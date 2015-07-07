import time
import serial

counter = ''
ser = serial.Serial("COM3",9600)
f = open("C:\\Users\\Eve\\Desktop\\BINARY_3Dd.txt", 'r') #If not work you can try to change r in to rb

try:
	counter = f.read(1)
	ser.write(counter)
	print(counter)
	time.sleep(0.5)
	while ser != " ":
		counter = f.read(1)
		ser.write(counter)
		print(counter)
		time.sleep(0.5)
finally:
	f.close()