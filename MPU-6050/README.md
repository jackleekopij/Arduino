
## MPU-6050 chip
The MPU-6050 chip measures three functions; acceleration, rotation and temperature.

Rotational axis of MPU-6050 is shown below: 
![mpu_6050_rotation](../images/mpu_rotation.png)

### Acceleration accelerometer
The accelerator on the MPU-6050 chip is MEMS (Micro Electro Mechanical Systems) accelerometer which measures *linear* acceleration.

### Rotation gyroscope
A MEMS gyroscope is used to measure angular rotation by employing The Coriolis Effect. 


## Ideas to investigate
Understand what the raw measurements are being produced by the MPU-6050 chip.

## Code investigate

[Implementation of quaternion maths for Arduino](
https://github-com.translate.goog/jrowberg/i2cdevlib/tree/master/Arduino/MPU6050?_x_tr_sl=auto&_x_tr_tl=en&_x_tr_hl=en-GB)

[Base implementation of 'working' MPU-6050 library albeit with undefined units](https://github.com/jarzebski/Arduino-MPU6050/blob/master/README.md)