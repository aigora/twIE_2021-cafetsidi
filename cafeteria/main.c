#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define N 1000

int main()
{
	int opcion_inicio;
	int opcion_cliente;
	int quiere_bebida;
	int opcion_bebida;
	int quiere_suplemento;
	int opcion_suplemento;
	int quiere_comida;
	int opcion_comida;
	int j, i=0;
	int comparador=0, intentos=0, comparar=1;
	int nusuario;
	int ncontra;
	int ingreso_empleado;
	float tocapagar;
	personal trabajadores[N];
	FILE *cf;
	FILE *pf;
    char c;
 printf("Bienvenido a cafetsidi. Por favor, indique si quiere continuar como cliente o como administrador.\n");
 printf("1.- Cliente \t\t2.- Administrador\n");
 do
 {
 	scanf("%i",&opcion_inicio);
 	switch (opcion_inicio)
 	{
 		case 1:
 			printf("Ha accedido como cliente. Por favor, seleccione la acción que desea realizar.\n\n");
 			printf("1.- Realizar pedido\t\t\t\t2.- Consultar carta\n\n");
 			scanf("%i", &opcion_cliente);
 			switch (opcion_cliente)
 			{
 				case 1:
 					printf("Desea algo de beber?\n1.- Si\t\t2.- No");
 					scanf("%i",&quiere_bebida);
 					if (quiere_bebida == 1)
 					{
 						printf("Seleccione la bebida que le gustaria tomar:\n");
 						printf("1.- Cafe solo\t3,50%c\n2.- Cafe con leche\t3,95%c\n3.- Cafe bombon\t4,95%c\n4.- Capuccino\t4,50%c\n5.- Chocolate\t4,50%c\n6.- Chocolate con nata\t4,95%c\n7.-te (verde, rojo o negro)\t3,95%c\n",36,36,36,36,36,36,36);
 						scanf ("%i",&opcion_bebida);
 						printf("Ha elegido la opción %i\n", opcion_bebida);
					 }
 					else
 					{
 						printf("Usted no quiere beber");
					 }
 					printf("¿Quiere un suplemento para su bebida?\n1.- Si\t\t2.- No");
 					scanf("%i",&quiere_suplemento);
 					if (quiere_suplemento == 1)
 					{
 						printf("Por favor, seleccione su suplemento");
 						printf("1.- Azucar\n2.- Miel\n3.- Canela\n4.- Leche condensada\n5.- Hielo\n6.- Sirope\t\n");
 						scanf("%i",&opcion_suplemento);
					 }
					 else
					 {
					 	printf("Usted no quiere suplemento\n");
					 }
 					
 					printf("¿Desea algo de comer?\n1.- Si\t\t2.- No");
 					scanf("%i",&quiere_comida);
 					if (quiere_comida == 1)
 					{
 						printf("Genial! A continuacion se le muestran los diferentes platos que preparamos!\n");
 						printf("1.- Tostada con queso brie y mermelada de higos\t6,50%c\n2.- Tostada con aguacate y huevos revueltos\t6,50%c\n3.- Tostada con membrillo, queso, jamon y rucula\t7,95%c\n4.- Tostada con aceite y tomate\t3%c\n5.- Bowl de yogur\t5,90%c\n6.- Gofres con sirope y nata\t4,50%c\n7.- Bolleria (Napolitana, rosquilla, palmera)\t1%c\n",36,36,36,36,36,36,36);
 						scanf("%i",&opcion_comida);
					 }
					 else
					 {
					 	printf("Usted no quiere comer");
					 }
					 printf ("Su pedido se esta preparando");
					 tocapagar = preciototal (opcion_bebida, opcion_suplemento, opcion_comida);
					 printf("A continuacion encontrara el resumen de su pedido:\nBebida: %i\nSuplemento: %i\nComida: %i\n A cobrar: %.2f\n", opcion_bebida, opcion_suplemento, opcion_comida, tocapagar);
				break;
					 
					 //Aqui ira una funcion que imprima en pantalla el resumen del pedido y que calcule el precio total
				
				case 2:
					 
                    pf=fopen("Menu.txt","r");
                    if(pf== NULL){
                    	printf("Error en la apertura del archivo\n");
  	                    return -1;
                        }
                        while(fscanf(pf,"%c", &c) !=EOF)
                        {
                        	printf("%c", c);
                        }
                        fclose(pf);
                        return 0;
                break;
			}
			break;
            
			case 2:
				cf=fopen("credenciales.txt","r");
				if(cf==NULL)
				{
					printf("No se ha podido abrir el archivo\n");
					return -1 ;
				}
				else
				{			
					while(fscanf(cf,"%d; %d \n ",&trabajadores[i].usuario,&trabajadores[i].contra) !=EOF)
				{
					i++;
				}
				}			
				fclose(cf);
				printf("Ha accedido como un administrador.\n");
				printf("A continuación debe inciar sesión.\n");
				do
				{
					printf("Introduzca su clave de usuario\n");
					scanf("%d",&nusuario);
					for(j=0;j<N;j++)
					{
						if(nusuario==trabajadores[j].usuario)
						{
							comparar=1;
							ingreso_empleado=j;
							printf("El numero de usuario es correcto\n");
						}
					}
					intentos ++;
			 	}while(intentos<3 && comparador==0);
			 	if(comparador==0)
			 	{
			 		printf("Ha agotado los intentos\n");
					printf("Hable con el encargado\n");
					return 0;	
				}		
				comparador=0;	
				intentos=0;
				do
				{
					printf("Introduzca la contraseña:\n");
					scanf("%d",&ncontra);
					if(ncontra==trabajadores[ingreso_empleado].contra)
					{
						comparar=1;
						printf("La contraseña es correcta\n");
						printf("Bienvenido\n");
					}
					intentos++;
				}while(intentos<3 && comparador==0);
				if(comparador==0)
				{
					printf("Ha superado el numero de intentos\n"); 
					return 0;
          		}
          		
				printf("Menu de inicio como administrador\n");
				return 0;
	
 			default:
		
		
			 
 			break;
 	} 		
  }while (opcion_inicio <= 2);
return 0;
}
