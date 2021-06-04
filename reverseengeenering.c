#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void crackear(int *pa){
	printf("\t\t\t%i", *pa);
	printf("\n\nPudiste derrotar al dragon sin perder la vida y salvar al pueblo por ello");
	system("pause>nul");
}

int main(void){
	int a = 999;
	int c;
	char zyuser[25];
	char zypass[25];
	int b;
	printf("\t\t\t%i", a);
	printf("\n\nBienvenido al juego, a continuacion decide una accion a realizar: ");
	printf("\n\Opcion 1: Derrotar al dragon");
	printf("\n\nOpcion 2: Rendirse ante el dragon");
	scanf("\n%i", &b);
	switch(b){
		case 1:
			c = a - 999;
			printf("\t\t\t%i", c);
			printf("\n\nPerdiste la vida pero al final fue por el pueblo");
			break;
		case 2:
			printf("\t\t\t%i", a);
			printf("\n\nTe rendiste antes de tiempo y al final te quedaste solo sin nadie mas");
			break;
		case 3:
			printf("\n\n\nIngrese el usuario: ");
			scanf("\n%s", &zyuser);
			printf("\n\n\nIngrese el password: ");
			scanf("\n%s", &zypass);
			if(strcmp(zyuser, "juan") == 0 | strcmp(zypass, "pepe") == 0){
				crackear(&a);
			}
			else{
				printf("No puedes pasar");
				system("pause>nul");
			}
		default:
			printf("Escoge algo correcto");
	}
	return 0;
}
