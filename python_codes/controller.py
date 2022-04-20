import serial

arduino = serial.Serial('COM2',9600)

print("Tekan 1 = LED hidup , Tekan 0 LED = mati : ")

while 1:
    data = input()
    if data=='1':
        arduino.write(b'1')
        print("LED HIDUP")
    elif data=='0':
        arduino.write(b'0')
        print("LED MATI")
    