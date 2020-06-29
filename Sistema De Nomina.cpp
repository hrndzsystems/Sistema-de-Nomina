#include<stdio.h>
#include<stdlib.h>
int main(){
	int opc;
	int NombreEmpleado,TurnoEmpleado,SucursalEmpleado,DepartamentoEmpleado,PuestoEmpleado,SalarioEmpleado,DesempenioEmpleado,NSSEmpleado,AntiguedadEmpleado; 
	printf("Sistema de Nomina: ");
	printf("\n1. Nombre del Empleado\n");
	printf("2. Turno del empleado\n");
	printf("3. Sucursal del empleado\n");
	printf("4. Departamento del empleado\n");
    printf("5. Puesto del empleado\n");
	printf("6. Salario del empleado \n");
	printf("7. Desempeño del empleado\n");
	printf("8. Numero de Seguridad Social del empleado \n");
	printf("9. Antiguedad del empleado \n");					
	printf("\n Elija la opcion: ");
	scanf("%d", &opc);
	switch(opc){
		case 1:
		printf("Escriba el Nombre del Empleado");
		scanf("%d",&NombreEmpleado);
		printf("Buscando informacion del empleado, escoja de nuevo otra opcion: ");
		break;
		case 2:
		printf("En que Turno labora el Empleado");
		scanf("%d",&TurnoEmpleado);
		printf("Buscando informacion del empleado, escoja de nuevo otra opcion: ");
		break;
		case 3:
		printf("En que Sucursal se encuentra el Empleado");
		scanf("%d",&SucursalEmpleado);
		printf("Buscando informacion del empleado, escoja de nuevo otra opcion: ");
		break;
		case 4:
		printf("En que area Departamental se encuentra el Empleado");
		scanf("%d",&DepartamentoEmpleado);
		printf("Buscando informacion del empleado, escoja de nuevo otra opcion: ");
		break;
		case 5:
		printf("que Puesto desempenia el Empleado");
		scanf("%d",&PuestoEmpleado);
		printf("Buscando informacion del empleado, escoja de nuevo otra opcion: ");
		break;
		case 6:
		printf("Cual es el Salario mensual del Empleado");
		scanf("%d",&SalarioEmpleado);
		printf("Buscando informacion del empleado, escoja de nuevo otra opcion: ");
		break;
		case 7:
		printf("Cual es su Desempeño del Empleado");
		scanf("%d",&DesempenioEmpleado);
		printf("Buscando informacion del empleado, escoja de nuevo otra opcion: ");
		break;
		case 8:
		printf("Cual es el NSS del Empleado");
		scanf("%d",&NSSEmpleado);
		printf("Buscando informacion del empleado, escoja de nuevo otra opcion: ");
		break;
		case 9:
		printf("Cuanto tiempo lleva laborando el empleado en la empresa");
		scanf("%d",&AntiguedadEmpleado);
		printf("Buscando informacion del empleado, escoja de nuevo otra opcion: ");
		break;
		default:
	printf("Opcion incorrecta, ingresa de nuevo\n");
	break;
	}
	return 0;
}
