#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
struct emple
{
    char nombre[30];
    int ventas[3];
    double total,comis,tp;
};
emple empleados[5];

void ingreso (emple empleados[])
{
    int i,k;
    for (i=0;i<5;i++)
    {
        cout<<"Nombre del empleado: ";
        cin.getline(empleados[i].nombre,30);
        for (k=0;k<3;k++)
        {
            cout<<"Ingresar la venta: "<<k<<"  ";
            cin>>empleados[i].ventas[k];
        }
        _flushall();
    }
}

void calcular (emple empleados[])
{
    int i,k;
    for (i=0;i<5;i++)
    {   empleados[i].total=0;
        for (k=0;k<5;k++)
        {
            empleados[i].total+=empleados[i].ventas[k];
        }
            empleados[i].comis=empleados[i].total*0.05;
        }
}

void presentar (emple empleados[])
{
    int i,k;
    for (i=0;i<5;i++)
    {
         cout<<"Empleados: "<<empleados[i].nombre<<"\n";
         for (k=0;k<3;k++)
         {
              cout<<"Ventas "<<k+1<<"  :"<<empleados[i].ventas[k]<<"\n";
         }
         cout<<"Total de las ventas: "<<empleados[i].total<<"\n";
         cout<<"Comision de ventas: "<<empleados[i].comis<<"\n";
         cout<<"\n\n";
    }
}

int main()
{
    ingreso(empleados);
    calcular(empleados);
    presentar(empleados);
}
