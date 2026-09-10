//bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
//Variables globales
int consecutivo= 0;

//clases y objetos
struct evento
{
	char nombre_evento[20], nombre_artista[20], fecha_ano[20], fecha_mes[20], fecha_dia[20],lugar_evento[20],genero_evento[20], estado[20];
	int cantidad_entradas;
};

struct evento vector[10]={0};;

//prototipos
void menu();

//procedimientos y funciones

struct evento insertar_evento(char nombre_evento[20], char nombre_artista[20], char fecha_ano[20], char fecha_mes[20], char fecha_dia[20], char lugar_evento[20], char genero_evento[20], int cantidad_entradas,char estado[20])
{
	struct evento crear_evento;
	
	strcpy(crear_evento.nombre_evento, nombre_evento);
	strcpy(crear_evento.nombre_artista, nombre_artista);
	strcpy(crear_evento.fecha_ano, fecha_ano);
	strcpy(crear_evento.fecha_mes, fecha_mes);
	strcpy(crear_evento.fecha_dia, fecha_dia);
	strcpy(	crear_evento.lugar_evento, lugar_evento);
	strcpy(crear_evento.genero_evento, genero_evento);
	crear_evento.cantidad_entradas = cantidad_entradas;
	strcpy(crear_evento.estado, estado);
	return crear_evento;
}

void modificar_evento(struct evento vector[10])
{
	int opcion2;
	char filtro[20];
	system("cls");
	if(consecutivo == 0)
	{
		printf("\nError: No a ingresado ningun evento");
	}
	else
	{
		printf("\nIngrese el dato del evento que desea encontrar: ");
		scanf("%s",&filtro);	
	
		for(int i = 0; i < consecutivo; i++)
		{
			if(strcmp(vector[i].nombre_evento,filtro)== 0 || strcmp(vector[i].nombre_artista,filtro)== 0 || strcmp(vector[i].fecha_ano,filtro)==0 || strcmp(vector[i].fecha_mes,filtro)==0 || strcmp(vector[i].fecha_dia,filtro)==0 || strcmp(vector[i].lugar_evento,filtro)==0 || strcmp(vector[i].genero_evento,filtro)==0 || (vector[i].cantidad_entradas,filtro)== 0 ||  strcmp(vector[i].estado,filtro)==0 )
			{
				printf("\n\nNombre del evento: %s",vector[i].nombre_evento);
				printf("\nNombre del artista: %s",vector[i].nombre_artista);
				printf("\nAno del evento: %s",vector[i].fecha_ano);
				printf("\nMes del evento: %s",vector[i].fecha_mes);	
				printf("\nDia del evento: %s",vector[i].fecha_dia);
				printf("\nLugar del evento: %s",vector[i].lugar_evento);
				printf("\nGenero del evento: %s",vector[i].genero_evento);	
				printf("\nCantidad de entradas: %i",vector[i].cantidad_entradas);
				printf("\nEstado del evento: %s",vector[i].estado);
	
				printf("\n\n1-Modificar nombre del evento");
				printf("\n2-Modificar artista del evento");
				printf("\n3-Modificar ano del evento");
				printf("\n4-Modificar mes del evento");
				printf("\n5-Modificar dia del evento");
				printf("\n6-Modificar lugar del evento");
				printf("\n7-Modificar genero del evento");
				printf("\n8-Modificar cantidad de entradas del evento");
				printf("\n9-Modificar estado del evento");
				printf("\n\nIngrese una opcion: ");
				scanf("%i",&opcion2);

				if(opcion2 == 1)
				{
					printf("\n\nIngrese el nuevo nombre del evento: ");
					scanf("%s",&vector[i].nombre_evento);
				}
				else if(opcion2 == 2)
				{
					printf("\nIngrese el nuevo artista del evento: ");
					scanf("%s",&vector[i].nombre_artista);
				}
				else if(opcion2 == 3)
				{
					printf("\nIngrese el nuevo ano del evento: ");
					scanf("%s",&vector[i].fecha_ano);
				}
				else if(opcion2 == 4)
				{
					printf("\nIngrese el nuevo mes del evento: ");
					scanf("%s",&vector[i].fecha_mes);
				}
				else if(opcion2 == 5)
				{
					printf("\nIngrese el nuevo dia del evento: ");
					scanf("%s",&vector[i].fecha_dia);
				}
				else if(opcion2 == 6)
				{
					printf("\nIngrese el nuevo lugar del evento: ");
					scanf("%s",&vector[i].lugar_evento);
				}
				else if(opcion2 == 7)
				{
					printf("\nIngrese el nuevo genero del evento: ");
					scanf("%s",&vector[i].fecha_mes);
				}
				else if(opcion2 == 8)
				{
					printf("\nIngrese la nueva cantidad de entradas del evento: ");
					scanf("%s",&vector[i].cantidad_entradas);
				}
				else if(opcion2 == 9)
				{
					printf("\nIngrese el nuevo estado del evento: ");
					scanf("%s",&vector[i].estado);
				}
				else
				{
					printf("\nOpcion incoreccta...");
				}
			}	
		}
	}
	printf("\n\nPresione una tecla para continuar...");	
}

void lista_eventos()
{
	system("cls");
		if (consecutivo == 0)
		{
			printf("\nError: No a ingresado ningun evento");	
		}
		else
		{
			for (int i = 0; i < consecutivo; i++)
			{
				printf("\n\nNombre del evento: %s",vector[i].nombre_evento);
				printf("\nNombre del artista: %s",vector[i].nombre_artista);
				printf("\nAno del evento: %s",vector[i].fecha_ano);
				printf("\nMes del evento: %s",vector[i].fecha_mes);	
				printf("\nDia del evento: %s",vector[i].fecha_dia);
				printf("\nLugar del evento: %s",vector[i].lugar_evento);
				printf("\nGenero del evento: %s",vector[i].genero_evento);	
				printf("\nCantidad de entradas: %i",vector[i].cantidad_entradas);
				printf("\nEstado del evento: %s",vector[i].estado);
			}
		}
		printf("\n\nPresione cualquier tecla para continuar...");
}

void buscar()
{
	system("cls");
		if (consecutivo == 0)
		{
			printf("\nError: No a ingresado ningun evento");					
		}
		else
		{
			char filtro[20];
			printf("\nIngrese el dato del evento que desea encontrar: ");
			scanf("%s",&filtro);
			
			for(int i= 0; i<consecutivo; i++)
			{
				if(strcmp(vector[i].nombre_evento,filtro)== 0 || strcmp(vector[i].nombre_artista,filtro)== 0 || strcmp(vector[i].fecha_ano,filtro)==0 || strcmp(vector[i].fecha_mes,filtro)==0 || strcmp(vector[i].fecha_dia,filtro)==0 || strcmp(vector[i].lugar_evento,filtro)==0 || strcmp(vector[i].genero_evento,filtro)==0 || (vector[i].cantidad_entradas,filtro)== 0 ||  strcmp(vector[i].estado,filtro)==0)
				{
					printf("\n\nNombre del evento: %s",vector[i].nombre_evento);
					printf("\nNombre del artista: %s",vector[i].nombre_artista);
					printf("\nAno del evento: %s",vector[i].fecha_ano);
					printf("\nMes del evento: %s",vector[i].fecha_mes);
					printf("\nDia del evento: %s",vector[i].fecha_dia);
					printf("\nLugar del evento: %s",vector[i].lugar_evento);
					printf("\nGenero del evento: %s",vector[i].genero_evento);
					printf("\nCantidad de entradas: %i",vector[i].cantidad_entradas);
					printf("\nEstado del evento: %s",vector[i].estado);
				}
			}
		}
		printf("\n\nPresione cualquier tecla para continuar...");
}

void menu()
{
	int opcion, opcion2, opcion3;
	int  cantidad_entradas, comprar_entradas;
	char nombre_evento[20], nombre_artista[20], fecha_ano[20], fecha_mes[20], fecha_dia[20], lugar_evento[20], genero_evento[20], estado[20];
	do
	{
		system("cls");
		system("color B0");
		printf("***Menu eventos***");
		printf("\n\n1-Administrador");
		printf("\n2-Cliente");
		printf("\n3-Salir");
		printf("\n\nIngrese una opcion: ");
		scanf("%i",&opcion);

		switch(opcion)
		{
			case 1:
			{
				system("cls");
				printf("\nIngresando al menu de administradores...");
				Sleep(1000);
	
				do
				{
					system("cls");
					printf("\n***Menu Administradores***");
					printf("\n1-Ingresar evento");
					printf("\n2-Modificar eventos");
					printf("\n3-Listar eventos");
					printf("\n4-Buscar evento");
					printf("\n5-Volver al menu");
					printf("\n\nIngrese una opcion: ");
					scanf("%i",&opcion2);
				
				 switch(opcion2)
				  {
						case 1:
						{
							system("cls");
							if (consecutivo<10)
							{
								printf("\nNombre del evento: ");
								scanf("%s",&nombre_evento);
								printf("\nNombre del artista: ");
								scanf("%s", &nombre_artista);
								printf("\nAno del evento: ");
								scanf("%s",&fecha_ano);
								printf("\nMes del evento: ");
								scanf("%s",&fecha_mes);
								printf("\nDia del evento: ");
								scanf("%s",&fecha_dia);
								printf("\nLugar del evento: ");
								scanf("%s",&lugar_evento);
								printf("\nGenero del evento: ");
								scanf("%s", &genero_evento);
								printf("\nCantidad de entradas: ");
								scanf("%i", &cantidad_entradas);
								printf("\nEstado del evento: ");
								scanf("%s", &estado);
								
								vector[consecutivo] = insertar_evento(nombre_evento, nombre_artista, fecha_ano, fecha_mes, fecha_dia, lugar_evento, genero_evento, cantidad_entradas, estado);
								consecutivo++;
								printf("\n\nSe ingreso correctamente");
								printf("\n\nPresione cualquier tecla para continuar...");
							}
							else
							{
								system("cls");
								printf("\nYa no puede ingresar mas datos...");
								printf("\n\nPresione cualquier tecla para continuar...");
							}
							getch();	
							break;
						}
					
						case 2:
					{
						modificar_evento(vector);
						getch();
						break;
					}
						case 3:
					{
						lista_eventos();
						getch();
						break;
					}
						case 4:
					{
						buscar();
						getch();
						break;
					}
						case 5:
					{
						system("cls");
						printf("\n\nPresione una tecla para volver al menu principal...");
						getch();
						printf("\n\nVolviendo al menu principal...");
						Sleep(1000);
						break;
					}
					default:
					{
						printf("\nError: Opcion incorrecta.");
						printf("\n\nPresione cualquier tecla para continuar...");
						getch();
						break;
					}
				 }	
					
				}while(opcion2 != 5);
				
				break;
			}
			case 2:
			{
				system("cls");
				printf("\nIngresando al menu de clientes...");
				Sleep(1000);
				do
				{
					system("cls");
					printf("***Menu clientes***");
					printf("\n\n1-Buscar evento");
					printf("\n2-Volver al menu principal");
					printf("\n\nIngrese una opcion: ");
					scanf("%i",&opcion3);
					if(consecutivo == 0)
					{
						system("cls");
						printf("\nError: No a ingresado ningun evento");
						printf("\n\nPresione cualquier tecla para continuar...");
						getch();
					}
					else
					{
				
						switch(opcion3)
						{
						
							case 1:
							{
								int opc;
								system("cls");
								buscar();
								do
								{
									printf("\n\n1-Reservar 2-Volver al menu");
									printf("\n\nIngrese una opcion: ");
									scanf("%i",&opc);
									system("cls");
									if (opc == 1)
									{
										system("cls");
										printf("\n\nIngrese la cantidad de entradas que desea reservar...");
										printf("\n\nReservar entradas: ");
										scanf("%i",&comprar_entradas);
				
										printf("\nEntradas compradas.");
										printf("\nCantidad de entradas reservadas: %i",comprar_entradas);
										printf("\n\nPresione cualquier tecla para continuar...");
										break;
									}
									else if(opc == 2);
									{
										printf("\n\nPresione cualquier tecla para volver al menu...");
										break;
									}
								
								}while(opc!=2);
								getch();
								break;
							}
							case 2:
							{
								system("cls");
								printf("\n\nPresione cualquier tecla para volver al menu principal...");
								getch();
								system("cls");
								printf("\nVolviendo al menu principal...");
								Sleep(1000);
								break;
							}
							default: 
							{
								printf("\nError: Opcion incorrecta.");
								printf("\n\nPresione cualquier tecla para continuar...");
								getch();
								break;
							}
						}	
					}
						
				}while(opcion3 != 2);
			
				break;
			}
			case 3:
			{
				system("cls");
				printf("\nPresione cualquier tecla para salir...");
				getch();
				printf("\n\nSaliendo...");
				Sleep(1000);
				break;
			}
			default:
			{
				printf("\nError: Opcion incorrecta.");
				printf("\n\nPresione cualquier tecla para continuar...");
				getch();
				break;
			}
		}
		
	}while(opcion != 3);
}
//cuerpo principal
int main()
{
	menu();
	return 0;
}
