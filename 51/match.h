#ifndef MATCH_H
#define MATCH_H

#define uint unsigned int
#define uchar unsigned char

bit theftModeSwitch=0;

//P2口用作独立操作输入

sbit fanInput=P2^0;  //空调在P2^0输入
sbit livingLightInput=P2^1;  //客厅灯光在P2^1输入
sbit waterInput=P2^2;  //水泵在P2^2输入
sbit dinnerLightInput=P2^3;  //餐厅灯光在P2^3输入
sbit bedLightInput=P2^4;  //卧室灯光在P2^4输入
sbit manSensorInput=P2^5;  //防盗传感器在P2^5输入
sbit doorSnsorInput=P2^6;  //门磁传感器在P2^6输入

//P3口用作专用程序信号输入

sbit theftMode=P3^0;  //防盗模式输入
sbit welcomMode=P3^1;  //欢迎模式输入
sbit sittingMode=P3^2;  //起居模式输入
sbit dinnerMode=P3^3;  //用餐模式输入

//P1口用作输出

sbit fanOutput=P1^0; //空调在P1^0输出 
sbit livingLightOutput=P1^1;  //客厅灯光在P1^1输出
sbit waterOutput=P1^2;  //水泵在P1^2输出
sbit dinnerLightOutput=P1^3;  //餐厅灯光在P1^3输出
sbit bedLightOutput=P1^4;  //卧室灯光在P1^4输出
sbit beep=P1^5;//喇叭在P1^5输出
sbit theftBeep=P1^6;