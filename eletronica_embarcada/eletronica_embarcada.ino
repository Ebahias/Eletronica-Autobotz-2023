
#include "imu.hpp"

struct IMU imu;

void setup() {
  
  Serial.begin(9600);

  init_imu();

}

void loop() {
  
  start_imu();

  get_imu_data();

  Serial.print(imu.accelx / 2048);
  Serial.print(" ");

  Serial.print(imu.accely / 2048);
  Serial.print(" ");

  Serial.print(imu.accelz / 2048);
  Serial.print(" ");
  
  Serial.print("\n");
}
