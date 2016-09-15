#!/usr/bin/env python  
# -*- coding: utf-8 -*-  
import requests  
import smbus  
import RPi.GPIO as GPIO  
import time  
# �� /dev/i2c-1  
bus = smbus.SMBus(1)  
# �豸URI  
apiurl = 'http://api.yeelink.net/v1.0/device/1949/sensor/2511/datapoints'  
# �û�����  
apiheaders = {'U-ApiKey': 'ffa3826972d6cc7ba5b17e104ec5xxxx'}  
    while True:  
    #��������  
    r = requests.get(apiurl,headers=apiheaders)  
    # ��ӡ��Ӧ����  
    print(r.text)  
    # ת��Ϊ�ֵ����� ��ע�� 2.7.4�汾ʹ��r.json()  
    led = r.json  
    # {'value':x} x=1��״̬��x=0�ر�״̬  
    if led['value'] == 1:  
        print("led on")  
        bus.write_byte( 0x20 , 1 )  
    else:  
        print("led off")  
        bus.write_byte( 0x20 , 0 )  
    # ��ʱ5S  
    time.sleep(5)  