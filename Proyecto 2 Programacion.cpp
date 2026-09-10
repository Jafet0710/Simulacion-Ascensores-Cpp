//bibliotecas
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>

//variables globales
int cantidadpisos, contadorascensor1=1, contadorascensor2=cantidadpisos;


//prototipos
void saludo();
void menu();
void ascensor1();
void ascensor2();
void estadisticas();

//procedimientos y funciones
void saludo()
{
	printf("\n\t\t\t\t\tBienvenido al programa de ascensores");
	printf("\n\nIngrese la cantidad de pisos que tiene el edificio: ");
	scanf("%i",&cantidadpisos);
}
void menu()
{
	int opcion;
	do
	{
	system("cls");
	printf("***Menu***");
	printf("\n\n1-Llamar el ascensor");
	printf("\n2-Ver Estadisticas");
	printf("\n3-Salir");
	printf("\n\nIngrese la opcion que desea realizar: ");
	scanf("%i",&opcion);
	system("cls");
	switch(opcion)
	{
		case 1: 
		{
		ascensor1();
		ascensor2();
		getch();
		break;
		
		}
		case 2: 
		{
			
			break;
		}
		case 3:
		{
			
			break;
		}
	}

		
	}while(opcion != 3);
	
}

void ascensor1()
{
	int pisoactual, pisodestino;
	printf("\Ingrese el piso actual: ");
	scanf("%i",&pisoactual);
	if(pisoactual<cantidadpisos)
	{
		for (int i=1; i<=pisoactual && i<=cantidadpisos;i++)
	{
		system("cls");
		printf("\n----- %i -----",i);
		printf("\n---------------");
		printf("\n|              |");
		printf("\n|              |");
		printf("\n|              |");
		printf("\n|              |");
		printf("\n|              |");	
		printf("\n|              |");	
		printf("\n--------------",i);
		Sleep(1000);
		contadorascensor1++;
	}
		
	}
	
	printf("\n\nIngrese al piso que desea ir: ");
	scanf("%i",&pisodestino);
	if(pisodestino <=cantidadpisos)
	{
		for (int i=pisoactual; i<=pisodestino && i<=cantidadpisos;i++)
	{
		system("cls");
		printf("\n----- %i -----",i);
		printf("\n---------------");
		printf("\n|              |");
		printf("\n|              |");
		printf("\n|              |");
		printf("\n|              |");
		printf("\n|              |");	
		printf("\n|              |");	
		printf("\n--------------",i);
		Sleep(1000);
	}
	for (int i=pisoactual; i>=pisodestino && i<=cantidadpisos;i--)
	{
		system("cls");
		printf("\n----- %i -----",i);
		printf("\n---------------");
		printf("\n|              |");
		printf("\n|              |");
		printf("\n|              |");
		printf("\n|              |");
		printf("\n|              |");	
		printf("\n|              |");	
		printf("\n--------------",i);
		Sleep(1000);
	}
	
	}
	else
	{
		printf("\n\nError: Ingreso un piso mayor a la cantidad de pisos que tiene el edificio\n\nPresione una tecla para continuar...");
		getch();	
	}
	
	
	
}

void ascensor2()
{
	
	
}

void estadisticas()
{
	
	
}





//cuerpo principal
int main()
{
	saludo();
	menu();

	return 0;
}
