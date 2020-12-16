/*----------------------------------------------------------------------------*/
/* Steuerung für Zusammenspiel von LED und Taster.                            */
/*----------------------------------------------------------------------------*/
#include <windows.h>

#include "hwInterface.h"
#include "simulator.h"

/*----------------------------------------------------------------------------*/
/* Defines                                                                    */
/*----------------------------------------------------------------------------*/

/* Defines für die Zustände. */
#define T0B0L0 1
#define T1B1L1 2
#define T1B1L0 3
#define T0B1L1 4
#define T0B1L0 5
#define T1B0L0 6




/*----------------------------------------------------------------------------*/
/* Hauptprogramm                                                              */
/*----------------------------------------------------------------------------*/
unsigned char TimerEvent;

void TimerIsr()
{
	TimerEvent = 1;

}
int main()
{
    /* Simulator initialisieren. */
    InitialisiereSimulator();

	
	unsigned char state = T0B1L1;
	Hw_RegisterTimerISR(TimerIsr);

    /* Endlosschleife. */
    for (;;)
    {
        /* Simulator ausführen. */
        SimuliereZeitschritt();

        /*-----------------------------------------------*/
        /* Hier sollte Ihr Steuerungsalgorithmus stehen! */
        /*-----------------------------------------------*/
		switch (state)
		{
		case T0B0L0:
				if (Hw_GetTaster() == HW_ON)
				{
					state = T1B1L1;
					Hw_SetLED(HW_ON);
					Hw_StartTimer(500, 1);
				}
				break;
		case T1B1L1:
			if (TimerEvent == 1)
			{
				TimerEvent = 0;
				Hw_SetLED(HW_OFF);
					state = T1B1L0;
			}
			else if(Hw_GetTaster() == HW_OFF)
			{
				state = T0B1L1;
				
					}
					break;

		case T1B1L0:
			if (TimerEvent == 1)
			{
				TimerEvent = 0;
				Hw_SetLED(HW_ON);
				state = T1B1L1;
			}
			else if (Hw_GetTaster() == HW_OFF)
			{
				state = T0B1L0;

			}
			break;
		case T0B1L0:
			if (TimerEvent == 1)
			{
				TimerEvent = 0;
				Hw_SetLED(HW_ON);
				state = T0B1L1;
			}
			else if (Hw_GetTaster() == HW_ON)
			{
				state = T1B0L0;
				Hw_SetLED(HW_OFF);
				Hw_StopTimer();
			}
			break;
		case T0B1L1:
			if (TimerEvent == 1)
			{
				TimerEvent = 0;
				Hw_SetLED(HW_OFF);
				state = T0B1L0;
			}
			else if (Hw_GetTaster() == HW_ON)
			{
				state = T1B0L0;
				TimerEvent = 0;
				Hw_SetLED(HW_OFF);
			}
			break;
		
		}

		Hw_SetLED(HW_ON);

        /* Abbruch, falls ESC */
        if(GetAsyncKeyState(VK_ESCAPE))
            break;
    }

    return 0;
}
