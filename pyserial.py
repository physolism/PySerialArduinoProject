import time
import serial

ser = serial.serial("[port connection number]",9600)
f = open("[file location.txt]", "r") #If not work you can try to change r in to rb

try:
	ser = f.read(1)
	while ser != "";
	ser = f.read(1)
finally:
	f.close()