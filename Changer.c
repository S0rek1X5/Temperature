#include <stdio.h>
int main ()
{
	float fah, cel, kel;
	int opcion,opc;
	do{
		printf("Que conversion desea hacer?\nCelsius a fahrenheit->1\nCelsius a kelvin->2\nFahrenheit a celsius->3\nFahrenheit a kelvin->4\nKelvin a celsius->5\nKelvin a fahrenheit->6\n:");
		scanf("%d",&opcion);
		if(opcion==1){
			printf("\nIntroduzca su grado en Celsius\n:");
			scanf("%f",&cel);
			fah=(cel*9/5)+32;
			printf("la temperatura en Fahrenheit es\n:%1.2f", fah);
		}
		else if(opcion==2){
			printf("\nIntroduzca su grado en Celsius\n:");
			scanf("%f",&cel);
			kel=cel+273.15;
			printf("la temperatura en Kelvin es\n:%1.2f", kel);
		}
		else if(opcion==3){
			printf("\nIntroduzca grado en Fahrenheit:");
			scanf("%f",&fah);
			cel = 5*(fah-32) /9;
			printf("\nLa temperatura en Celsius es:%1.2f",cel);
		}
		else if(opcion==4){
			printf ("\nIntroduzca grado en Fahrenheit\n:");
			scanf ("%f",&fah);
			kel=5*(fah-32)/9 + 273.15;
			printf ("\nLa temperatura en Kelvin es\n:%1.2f",kel);
		}
		else if(opcion==5){
			printf("\nIntroduzca su grado en Kelvin\n:");
			scanf("%f",&kel);
			cel=kel-273.15;
			printf("\nLa temperatura en Celsius es\n:%1.2f",cel);
		}
		else if(opcion==6){
			printf("\nIntroduzca su grado en Kelvin\n:");
			scanf("%f",&kel);
			fah=(kel-273.15)*9/5+32;
			printf("\nLa temperatura en Fahrenheit es\n:%1.2f",fah);
		}
		printf("\nDigite 1 para CONTINUAR --- 2 para SALIR: ");scanf("%d",&opc);
		printf("\n----------------------------------");
	}while(opc==1);
	return 0;
	}
