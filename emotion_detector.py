import cv2
import numpy as np
import serial
import time
from tensorflow.keras.models import load_model

# Connect Arduino
arduino = serial.Serial('COM6', 9600)
time.sleep(2)

# Load model
model = load_model("emotion_model.h5")

# Emotion labels
emotions = ['Angry', 'Disgust', 'Fear', 'Happy', 'Sad', 'Surprise', 'Neutral']

# Face detector
face_cascade = cv2.CascadeClassifier(
    cv2.data.haarcascades + 'haarcascade_frontalface_default.xml'
)

# Webcam
cap = cv2.VideoCapture(0)

while True:

    ret, frame = cap.read()

    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    faces = face_cascade.detectMultiScale(gray, 1.3, 5)

    for (x, y, w, h) in faces:

        face = gray[y:y+h, x:x+w]

        face = cv2.resize(face, (48,48))

        face = face / 255.0

        face = np.reshape(face, (1,48,48,1))

        prediction = model.predict(face, verbose=0)

        emotion = emotions[np.argmax(prediction)]

        print("Emotion:", emotion)

        # Send emotion to Arduino
        arduino.write((emotion + '\n').encode())

        # Display on laptop screen
        cv2.rectangle(frame, (x,y), (x+w,y+h), (255,0,0), 2)

        cv2.putText(
            frame,
            emotion,
            (x,y-10),
            cv2.FONT_HERSHEY_SIMPLEX,
            1,
            (0,255,0),
            2
        )

    cv2.imshow("Emotion Detector", frame)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
arduino.close()