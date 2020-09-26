import time
import board
from digitalio import DigitalInOut, Direction

blinkTime = 1

led = DigitalInOut(board.D13)
led.direction = Direction.OUTPUT

while True:
    led.value = True
    time.sleep(blinkTime)
    led.value = False
    time.sleep(1)
    blinkTime = blinkTime + 1