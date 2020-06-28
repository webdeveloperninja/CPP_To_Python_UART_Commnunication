from machine import UART
import time

uart = UART(1, 9600)

while True:
    # uart.write(bytearray('Hello ESP 32, I Am X Bee'))
    if uart.any() > 0:
        read_text = uart.read(uart.any())
        print(read_text)
    time.sleep(0.1)