#ifndef IMU_HPP
#define IMU_HPP

#include<Wire.h>

// Endereco I2C do sensor MPU-6050
const int MPU = 0x68;

struct IMU{

  float accelx;
  float accely;
  float accelz;
  float gyrx;
  float gyry;
  float gyrz;

};

void init_imu();

void start_imu();

void calibrate_imu();

void get_accel(char axis, struct IMU* imu);


#endif