# ModBus Project

## ModBus PC simulator 
https://libmodbus.org/ will be used as the software for computer interface to ModBus system (acting as DCS). Can be run on Raspberry Pi and Mac.

## Questions to answer;
How to the following set point flow working: 
    1. [ ] Python or C program on laptop
    2. [ ] Write from Python or C program to WaveShare USB to RS485
    3. [ ] Send set point to to MAXX485 
    4. [x] MAXX485 conver RS485 back to TTL and send to Arduino 
    5. [x] Arduino consumes set point

## ModBus terminology


### Waveshare USB to ModBus module
The Waveshare USB to ModBus module is a two pin RS485 module. Note: the 3rd pin is a ground pin is not needed for communication. Further channel A will link to channel A and channel B to channel B.
https://www.waveshare.com/wiki/USB_TO_RS485

## Arduino basics

### Communication protocols
Serial Communication is a way for data transfer, transmitting over one wire, one bit, at a time. Pins 0 and 1 on the Arduino are dedicated to serial receiver input and transmission output, respectively. Arduino use the Transistor-Transistor Logic (TTL) protocol for receiver/transmission. TTL signals operate between 0volts - 3.3volts making it perfect for the Arduino. 

To interface microcontrollers with RS-485 (ModBus protocol) the project uses MAX485 (TTL to RS-485) modules.


## Transmit-Receiver test
**Goal: test Arduino capability to communicate with RS-485 signal via RS-485 to TTL conversion. Necessary, for  Arduino to act as microcontroller for ModBus project.*
Files transmitter_modbus_experiment.ino & receiver_modbus_experiment.ino are a test in Arduino-Arduino communication over RS-485. Given two Arduinos, upload transmitter_modbus_experiment.ino to transmission Arduino and receiver_modbus_experiment.ino to the other. A serial monitor can be opened on receiver Arduino to view incoming communication from transmitter Arduino.
