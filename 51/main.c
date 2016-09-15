#include "reg52.h"
#include "config.h"

void initIO()
{
	P2=1;
	P3=1;
	P1=1;
}

void delay(uint xms)
{
	uint i,j;
	for(i=xms;i>0;i--)
		for(j=112;j>0;j--);
}

void fan()
{
	if(fanInput==0)
	{
		fanOutput=0;
	}
}

void livingLight()
{
	if(livingLightInput==0)
	{
		livingLightOutput=0;
	}
}

void water()
{
	if(waterInput==0)
	{
		waterOutput=0;
	}
}

void dinnerLight()
{
	if(dinnerLightInput==0)
	{
		dinnerLightOutput=0;
	}
}

void bedLight()
{
	if(bedLightInput==0)
	{
		bedLightOutput=0;
	}
}

void theftMode()
{
    if(manSensorInput==1)
	{
		delay(theftModeDelay);
		if(mamSensorInput==1)
		{
			beep=0;
		}
	}
}

void doorNotClose()
{
	if(doorSensorInput==1)
	{
		delay(doorCloseTime)
		{
			if(doorSensorInput==1)
			{
				beep=1;
			}
		}
	}
}

void welcomeMode()
{
	if(welcomMode==0)
	{
		fanOutput=0;
		livingLightOutput=0;
		dinnerLightOutput=0;
		theftModeSwitch=0;
	}
}

void sittingMode()
{
	if(sittingMode==0)
	{
		fanOutput=0;
		livingLight=0;
		theftModeSwitch=0;
	}
}

void dinnerMode()
{
	if(dinnerMode==0)
	{
		dinnerLightOutput=0;
		fanOutput=0;
		theftModeSwitch=0;
	}
}

void swither()
{
	if(theftMode==0)
	{
		theftModeSwitch=0;
		theftMode();
	}
}

void modeSwitcher()
{
	switcher();	
	fan();
	livingLight();
	water();
	dinnerLight();
	bedLight();
	doorNotClose();
}

void main()
{
	initIO();
	while(1)
	{
		modeSwitcher();
	}
}