// Description----------------------------------------------------------------|
/*
 *
 */
// DEFINES AND INCLUDES-------------------------------------------------------|

#define STM32F051												   //COMPULSORY
#include "stm32f0xx.h"											   //COMPULSORY
#include "lcd_stm32f0.h"

// GLOBAL VARIABLES ----------------------------------------------------------|
int my_age;

// FUNCTION DECLARATIONS -----------------------------------------------------|
struct age_data{
	int date;
	int month;
	int year;
	int age;
};

void main(void);			//COMPULSORY
void init_LCD(void);
void delay();

// MAIN FUNCTION -------------------------------------------------------------|

void main(void)
{
	struct age_data MyData;
	MyData.date = 19;
	MyData.month = 03;
	MyData.year = 2001;
	MyData.age = 21;

	init_LCD();
	char string[3];



	while(1)
	{
		for(int i=0; i<=MyData.age; i++){

			sprintf(string, "%d",i);
			lcd_putstring(string);
			delay(100000);
			lcd_command(CLEAR);

		}

	}
}

// OTHER FUNCTIONS -----------------------------------------------------------|
