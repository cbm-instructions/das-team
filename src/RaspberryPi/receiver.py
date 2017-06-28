# -*- coding: utf-8 -*-
import serial
from selenium import webdriver

ser = serial.Serial('/dev/ttyACM0', 9600)


def buildUrl(name):
    return 'file:///home/pi/BtnShow/websites/building{0}.html'.format(name)


browser = webdriver.Firefox()
browser.maximize_window()
browser.get(buildUrl('A'))

lastInput = ""
while True:
    inputLine = ser.readline().rstrip()
    print(inputLine)
    if inputLine != lastInput:
        lastInput = inputLine
        try:
            browser.get(buildUrl(inputLine))
        except:
            pass
