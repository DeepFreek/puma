#include "main.h"

volatile uint16_t adc_val[2] = {0, 0};
pos_cycl position_cycle;

int main(void ) {	
    RCC_init();
    TIM1_init();
    TIM2_ENCODE_init();
    ADC1_init(adc_val);
    
    while (1) {
		Func_1(200, &position_cycle);
		Func_2(adc_val, &position_cycle);
    }
}
