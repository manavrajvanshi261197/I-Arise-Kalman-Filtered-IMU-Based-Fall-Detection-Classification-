# Kalman-Filtered-IMU-Based-Fall-Detection-Classification
Description:
Used a Kalman Filter to fuse multi dimensional inertial measurement data. Detected and notified the users in case of a fall.

Steps: 
Connect VCC and GND connections.
Connect the MPU6050 to the NODE MCU via I2C pins.
Download the required libraries from Arduino.cc website

Adjsut the Kalman parameters according to the sensitivity and noise (Visualize using serial monitor).
Adjust the prediction parameters in predict.ino sketch.
Use any method for notification management, this project used Google sheets and IFTTT integration using gScript.
Call the desired/chosen notification endpoint in the fall.ino sketch.

Place the sketches under the same directory.
Upload the sketches.
