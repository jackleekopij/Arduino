/**
 *  Modbus slave example 3:
 *  The purpose of this example is to link a data array
 *  from the Arduino to an external device through RS485.
 *
 *  Recommended Modbus Master: QModbus
 *  http://qmodbus.sourceforge.net/
 */

#include <ModbusRtu.h>

// assign the Arduino pin that must be connected to RE-DE RS485 transceiver
#define TXEN  3 

// data array for modbus network sharing
uint16_t au16data[16] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int ledstatus = 0;
int ledpin = 13;

/**
 *  Modbus object declaration
 *  u8id : node id = 0 for master, = 1..247 for slave
 *  port : serial port
 *  u8txenpin : 0 for RS-232 and USB-FTDI 
 *               or any pin number > 1 for RS-485
 */
Modbus slave(10,Serial,TXEN); // this is slave @1 and RS-485

void setup() {
  Serial.begin( 19200 ); // baud-rate at 19200
  pinMode(ledpin,OUTPUT);
  slave.start();
}

void loop() {
  slave.poll( au16data, 16 );
  if(ledstatus != au16data[1]) {
    ledstatus = au16data[1];
    digitalWrite(ledpin,ledstatus);
  }
  
}
