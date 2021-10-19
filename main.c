/*
	Codigo Principal
	Tarea01
*/

#include "distance.h"

double miles_fact = 1.609;
"cambio 1"
double main(void) {
	float kilometers, miles;
	
	load_value(kilometers);
	miles = convert_to_miles(kilometers);
	
    printf("\n>>> %.2lf  Kms. to miles are %.2lf.\n", kilometers, miles);
    return 0;
}
