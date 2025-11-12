#include <stdio.h>
#include <string.h>
#define MAX_CONTACTOS 10

struct contacto {
char nombre[50];
char telefono[15];
char correo[50];
int edad;
};
struct contacto capturar_contactos(struct contacto lista[],int n);
void imprimir_contactos(struct contacto lista[],int n);

int main ()
{ 
  struct contacto lista[MAX_CONTACTOS];
  int n;
  printf("Ingrese numero de contactos desea guardar (max 10) : \n");
  scanf("%d",&n);
  getchar();
  capturar_contactos(lista,n);
  imprimir_contactos(lista,n);
  return 0;
}

void capturar_contactos(struct contacto lista[],int n)
{
  struct contacto c;
  for(int i=0;i<n;i++)
  {
  printf(" Ingrese nombre completo: \n");
  fgets(lista[i].nombre, sizeof(lista[i].nombre), stdin);
  lista[i].nombre[strlen(lista[i].nombre)-1] = '\0';
  printf(" Ingrese telefono: \n");
  fgets(lista[i].telefono, sizeof(lista[i].telefono), stdin);
  lista[i].telefono[strlen(lista[i].telefono)-1]='\0';
  printf(" Ingrese correo electronico: \n");
  fgets(lista[i].correo, sizeof(lista[i].correo), stdin);
  lista[i].correo[strlen(lista[i].correo)-1]='\0';
  printf(" Ingrese edad: \n");
  scanf("%d",&lista[i].edad);
  printf("\n");
  getchar();
  }
}

void imprimir_contactos(struct contacto lista[],int n)
{
  for(int i=0;i<n;i++)
  {
  printf(" Nombre completo: %s\n",lista[i].nombre);
  printf(" Telefono: %s\n",lista[i].telefono);
  printf(" Correo electronico: %s\n",lista[i].correo);
  printf(" Edad: %d\n",lista[i].edad);
  printf("\n");
  }
}  
