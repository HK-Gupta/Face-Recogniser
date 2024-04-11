# Facial Recognizer

This repository contains a facial recognition system that allows users to train the model with their own images and then use it to recognize faces in new images or video streams.

## Usage

1. **Prepare Image Data:**
   - Create a folder named `image_data`.
   - Inside the `image_data` folder, create a subfolder for each person whose face you want to recognize. Name each subfolder with the person's name.
   - Add images of each person to their respective folders. These images will be used for training.
   - Additionally, for non-human objects or faces, such as an Arduino, you can add images to a separate folder, e.g., `object_data`.

2. **Training:**
   - Run the `face_trainer.py` Python file to train the facial recognition model using the provided image data.
   - The trained model will be saved for future use.

3. **Recognition:**
   - Before proceeding with recognition, upload the Arduino file to the Arduino board and ensure all necessary connections are completed.
   - After training, run the `recognizer.py` Python file to start recognizing faces.
   - The program will use the trained model to recognize faces in new images or video streams.
   - Detected faces will be labeled with the corresponding names of the individuals, and any recognized objects will be labeled accordingly.

## Requirements

- Python 3.x
- OpenCV
- numpy


## Arduino Circuit

<img src="https://github.com/HK-Gupta/Face-Recogniser/assets/116277672/f35035a1-108f-4274-ac84-92d658186ee6">


## Acknowledgments

This project was inspired by the face recognition technology provided by OpenCV.

