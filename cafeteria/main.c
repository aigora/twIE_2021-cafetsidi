#include <stdio.h>

int main()
{
 int num;
  printf("Bienvenido a Cafeteria ETSIDI. Por favor, escoja una opción\n");
  printf("1.- Realizar pedido\n");
  printf("2.- Consultar pedidos anteriores\n");
  printf("3.- Menu\n");
  printf("4.- Beneficios\n");
  printf("5.- Salir\n");

  
  do
  {
     scanf("%i", &num);
    switch (num)
    {
      case 1:
      printf("Realice su pedido");
      break;

      case 2:
      printf("Estos son sus pedidos anteriores");
      break;

      case 3:
      printf("Estos son los productos disponibles");
      break;

      case 4:
      printf("Estos son los beneficios hasta ahora");
      break;
    }

  }while(num != 5);
  

  return 0;
}
