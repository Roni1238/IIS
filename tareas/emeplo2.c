#include <stdio.h>
void suma(int a, int b, int *c);
void suma_resta(int a, int b, int *c, int *d);

int main()
{
int a=10, b=30, c=0, d=0;
suma(a, b, &c);
suma_resta(a, b, &c, &d);
printf("la suma es %d \n", c);
printf("la resta es %d \n", d);
}

void suma(int a, int b, int *c){
*c=a+b;
}

void suma_resta(int a, int b, int *c, int *d){
*c=a+b;
*d=a-b;
}
