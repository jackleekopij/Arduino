# ModBus Project

## Arduino basics

### Communication protocols
Serial Communication is a way for data transfer, transmitting over one wire, one bit, at a time. Pins 0 and 1 on the Arduino are dedicated to serial receiver input and transmission output, respectively. Arduino use the Transistor-Transistor Logic (TTL) protocol for receiver/transmission. TTL signals operate between 0volts - 3.3volts making it perfect for the Arduino. 

To interface microcontrollers with RS-485 (ModBus protocol) the project uses MAX485 (TTL to RS-485) modules.