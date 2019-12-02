#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char nome[100];
	int idade;
	
	printf ("Qual o seu nome?\t");
	scanf ("%s", &nome);
	printf ("Qual a sua idade?\t");
	scanf ("%d", &idade);
	printf ("A seu nome e: %s e sua idade: %d\n", nome, idade);
	
	system ("pause");
	return 0;
}
