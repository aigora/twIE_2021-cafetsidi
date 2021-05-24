#include <stdio.h>
#include <stdlib.h>

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
					 break;
					 //Aqui ira una funcion que imprima en pantalla el resumen del pedido y que calcule el precio total
				
				case 2:
					printf("Menu");
					break;
					//Aqui ira una funcion que imprima en pantalla el menu. 				
 			
 			}
 			break;
 		case 2:
 			printf("Hola admin, que tal");
 			break;
 		default:
 			printf("hola");
 			break;
 			
 		
	 }
 }while (opcion_inicio <= 2);


 
 


  return 0;
}
