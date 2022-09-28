IBM-Project-27109-1660046673
TITLE:SmartFarmer - IoT Enabled Smart Farming Applicatio

Akash B-917719D008
Krishna Prasanna V G-917719D041
Lingeshwaran K-917719D044
Gunal L-917719D025
"""
import random
while(True):
    temp=random.randrange(0,100)
    humid=random.randrange(0,100)
    if (temp>90 or temp<80) and humid>60:
        print("------Dangerious!!!------")
