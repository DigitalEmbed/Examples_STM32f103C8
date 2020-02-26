#include "./MyApp.h"
#include <stdint.h>

#define BLINK_TIME 200

void HAL_SYSTICK_Callback(){
	static uint16_t ui16TimeCounter = 0;
	if (HAL_GPIO_ReadPin(BUTTON_GPIO_Port, BUTTON_Pin) == GPIO_PIN_RESET){			//If BUTTON is pushed...
		if (ui16TimeCounter == BLINK_TIME){											//If BLINK_TIME milliseconds has passed...
			ui16TimeCounter = 0;													//Reset time counter variable.
			HAL_GPIO_TogglePin(LED_BUILTIN_GPIO_Port, LED_BUILTIN_Pin);				//Toggle LED_BUILTIN state.
		}else{
			ui16TimeCounter++;														//Increment time counter variable.
		}
	}else{
		HAL_GPIO_WritePin(LED_BUILTIN_GPIO_Port, LED_BUILTIN_Pin, GPIO_PIN_SET);	//Turn off LED_BUILTIN.
	}
}

void vSetup(void){
	__HAL_DBGMCU_FREEZE_IWDG();														//Stopping watch dog while debug pause.
	HAL_DBGMCU_EnableDBGSleepMode();												//Enable debug mode while sleeping.
}

void vLoop(void){
	__WFI();																		//Sleeping - "Wait for Interrupts"
}
