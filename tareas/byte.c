#include <stdio.h>
#include <stdlib.h>
int main() {
printf("=== TAMAÑO DE DIFERENTES TIPOS DE PUNTEROS ===\n\n");
// tipos de datos básicos
printf("int = %zu bytes\n", sizeof(int));
printf("char = %zu bytes\n", sizeof(char*));
printf("float = %zu bytes\n", sizeof(float));
printf("double = %zu bytes\n", sizeof(double));
// Punteros básicos
printf("int* = %zu bytes\n", sizeof(int*));
printf("char* = %zu bytes\n", sizeof(char*));
printf("float* = %zu bytes\n", sizeof(float*));
printf("double* = %zu bytes\n", sizeof(double*));
}
