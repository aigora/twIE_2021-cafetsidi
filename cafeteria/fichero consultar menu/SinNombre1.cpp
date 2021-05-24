#include <stdio.h>
#include<string.h>
int main ()
{
  FILE *pf;
  char c;
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
}
