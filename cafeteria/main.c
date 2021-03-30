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
      printf("Introduzca el numero del producto que desee\n");

      printf("\n 1.- Cafe con leche\n 2.- Cafe largo\n 3.- Cafe manchado\n 4.- Cafe solo\n 5.- Cafe americano\n");
      printf(" 6.- Cafe latte\n 7.- Cafe helado\n 8.- Capuccino\n 9.- Cafe moka\n");



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
