```c
#include <stdio.h>
#include <stdlib.h>

// Include necessary libraries for GPS, gyroscope, and RF receiver
#include "gps.h"
#include "gyroscope.h"
#include "rf_receiver.h"

// Define sensor data structure
typedef struct {
    double latitude;
    double longitude;
    double altitude;
    double velocity;
    double direction;
} SensorData;

// Function to acquire data from GPS
SensorData acquireGPSData() {
    SensorData data;
    // Code to interface with GPS and store data in 'data'
    // This will depend on the specific GPS module you are using
    return data;
}

// Function to acquire data from gyroscope
SensorData acquireGyroData() {
    SensorData data;
    // Code to interface with gyroscope and store data in 'data'
    // This will depend on the specific gyroscope module you are using
    return data;
}

// Function to acquire data from RF receiver
SensorData acquireRFData() {
    SensorData data;
    // Code to interface with RF receiver and store data in 'data'
    // This will depend on the specific RF receiver module you are using
    return data;
}

int main() {
    SensorData gpsData = acquireGPSData();
    SensorData gyroData = acquireGyroData();
    SensorData rfData = acquireRFData();

    // Print sensor data for testing
    printf("GPS Data: Latitude = %f, Longitude = %f, Altitude = %f, Velocity = %f, Direction = %f\n", 
            gpsData.latitude, gpsData.longitude, gpsData.altitude, gpsData.velocity, gpsData.direction);
    printf("Gyro Data: Latitude = %f, Longitude = %f, Altitude = %f, Velocity = %f, Direction = %f\n", 
            gyroData.latitude, gyroData.longitude, gyroData.altitude, gyroData.velocity, gyroData.direction);
    printf("RF Data: Latitude = %f, Longitude = %f, Altitude = %f, Velocity = %f, Direction = %f\n", 
            rfData.latitude, rfData.longitude, rfData.altitude, rfData.velocity, rfData.direction);

    return 0;
}
```
