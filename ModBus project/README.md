# ModBus Project

## ModBus PC simulator 
https://libmodbus.org/ will be used as the software for computer interface to ModBus system (acting as DCS). Can be run on Raspberry Pi and Mac.

## Questions to answer;
How to the following set point flow working: 
    1. [ ] Python or C program on laptop
        - Could help background for writing to serial port https://stackoverflow.com/questions/4715340/python-twisted-receive-command-from-tcp-write-to-serial-device-return-response
    2. [ ] Write from Python or C program to WaveShare USB to RS485
    3. [ ] Send set point to to MAXX485 
    4. [x] MAXX485 conver RS485 back to TTL and send to Arduino 
    5. [x] Arduino consumes set point

## Notes: 
Looking for appropriate software to enable laptop to output RS485. 

*Minimal Modbus*
Minimal Modbus is a lightweight solution for communication with instruments use ModBus RTU. It's an easy-to-use Python module for talking to instruments (slaves) from a computer (master) using the Modbus protocol, and is intended to be running on the master. The only dependence is the pySerial module (also pure Python). 
*Minimal ModBus* recommends more robust and feature reach [programs](https://minimalmodbus.readthedocs.io/en/stable/related.html) for advanced use case.


*PyUSB*
PyUSB provides an interface to access USB port on computer; PyUSB has depedencies on libusb which doesn't come installed. Installing  libusb for MAC currentl fails for `brew` via `brew install libusb`. Instead install from tar ball by downloading [here](https://libusb.info/) and there following general MAC install instructions: 
`
tar xvjf libusb.tar.bz2
Navigate to the extracted folder using cd command
cd libusb
Now run the following command to install the tarball
./configure
make
sudo make install
`

## ModBus terminology


### Waveshare USB to ModBus (WSUM) module
This is an industrial USB to RS485 converter with original FT232RL inside. Few tutorials are available online for the WSUM, however, there seems to be relatively more documentation on FT232R chip the WSUM uses.

### Setup
The Waveshare USB to ModBus module is a two pin RS485 module. Note: the 3rd pin is a ground pin is not needed for communication. Further channel A will link to channel A and channel B to channel B.

### Installation
For MAC:
1. Download drivers from [FTDI website](https://ftdichip.com/drivers/vcp-drivers/)
2. Extract zip into 'Applications' folder
3. Double click file to and accepted "Grant Permissions" 
4. Plug in WaveShare USB USB to RS485, navigate to Applications -> Utilities -> System Information -> 'USB' left hand panel
5. 'FT232R USB UART' will be listed if drivers are correctly installed. 

### Experiments:
Accessing WSUM from a software program such as *Minimal ModBus* or *PyModBus*. 
- How will Python program know the location of the WSUM? Is there a 'hello world' test to show a connection has been made? 
- Can commands simply be sent to to WSUM over serial and WSUM converts to RS485? 

Instead of trying direct access to WSUM via ModBus master program can a *test* approach achieve succesful connetion with the WSUM? 


## Arduino basics

### Communication protocols
Serial Communication is a way for data transfer, transmitting over one wire, one bit, at a time. Pins 0 and 1 on the Arduino are dedicated to serial receiver input and transmission output, respectively. Arduino use the Transistor-Transistor Logic (TTL) protocol for receiver/transmission. TTL signals operate between 0volts - 3.3volts making it perfect for the Arduino. 

To interface microcontrollers with RS-485 (ModBus protocol) the project uses MAX485 (TTL to RS-485) modules.


## Transmit-Receiver test
**Goal: test Arduino capability to communicate with RS-485 signal via RS-485 to TTL conversion. Necessary, for  Arduino to act as microcontroller for ModBus project.*
Files transmitter_modbus_experiment.ino & receiver_modbus_experiment.ino are a test in Arduino-Arduino communication over RS-485. Given two Arduinos, upload transmitter_modbus_experiment.ino to transmission Arduino and receiver_modbus_experiment.ino to the other. A serial monitor can be opened on receiver Arduino to view incoming communication from transmitter Arduino.
