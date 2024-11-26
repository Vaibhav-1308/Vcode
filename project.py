import cv2
import os
import numpy as np
from sklearn.svm import SVC
from sklearn.model_selection import train_test_split
import joblib

# Function to load and preprocess images from a folder
def load_images(folder):
    images = []
    labels = []
    for label in os.listdir(folder):  # Label folders (0 = bad, 1 = average, 2 = good)
        label_path = os.path.join(folder, label)
        for file in os.listdir(label_path):
            img_path = os.path.join(label_path, file)
            img = cv2.imread(img_path)
            img_resized = cv2.resize(img, (64, 64))
            img_gray = cv2.cvtColor(img_resized, cv2.COLOR_BGR2GRAY)
            images.append(img_gray.flatten())  # Flatten the image
            labels.append(int(label))  # Use folder name as label
    return np.array(images), np.array(labels)

# Load and preprocess the dataset
X, y = load_images('path_to_crop_images')  # Dataset path

# Split dataset into training and testing sets
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2)

# Train the SVM model
model = SVC(kernel='linear')
model.fit(X_train, y_train)

# Save the trained model
joblib.dump(model, 'svm_crop_model.pkl')
