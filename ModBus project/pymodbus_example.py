from pymodbus.client.sync import ModbusSerialClient

wsum = ModbusSerialClient(method='rtu',port='/dev/tty.usbserial-5',baudrate=9600,parity='O')

wsum.connect()
test = wsum.read_holding_registers(0, 1, unit=1)
print(test)
