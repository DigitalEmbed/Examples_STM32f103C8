#include "./MyApp.h"

void vSetup(void){
}

void vLoop(void){
	HAL_GPIO_TogglePin(LED_BUILTIN_GPIO_Port, LED_BUILTIN_Pin);		//Changes LED_BUILTIN state.
	HAL_Delay(1000);												//One second delay.
}
