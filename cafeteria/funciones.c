#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float preciototal (int opcion1, int opcion2, int opcion3)
{
	float precio_total;
	float precio1;
	float precio2;
	float precio3;
	
	if (opcion1 == 1) //Obtiene el precio de la bebida 
	{
		precio1=3.5;
	}
	else if (opcion1 == 2 || opcion1 == 7)
	{
		precio1=3.95;	
	}
	else if (opcion1 == 3 || opcion1 == 6)
	{
		precio1=4.95;
	}
	else if (opcion1 == 4 || opcion1 == 5)
	{
		precio1=4.50;
	}
	else 
	{
		precio1=0;
	}
	
	
	if (opcion2 == 6) //Obtiene el precio del suplemento, que en este caso solamente hay si se quiere sirope
	{
		precio2=0.5;
	}
	else 
	{
		precio2=0;
	}

	
	
	if (opcion3 == 1 || opcion3 == 2)
	{
		precio3=6.5;
	}
	else if (opcion3 == 3)
	{
		precio3= 7.95;
	}
	else if (opcion3 == 4)
	{
		precio3=3;
	}
	else if (opcion3 == 5)
	{
		precio3=5.90;
	}
	else if (opcion3 == 6)
	{
		precio3=4.5;
	}
	else if (opcion3 == 7)
	{
		precio3=1;
	}
	else 
	{
		precio3=0;
	}
	
	precio_total = precio1 + precio2 + precio3;
	
	return precio_total;
	
}
