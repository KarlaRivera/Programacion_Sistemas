#include <iostream>

using namespace std;

char nombre[30];
int turno;
double ventas, comision, pay, PorComis;

double Porcentaje (int turno)
{
    if (turno==1)
    {
        comision=0.05;
    }
    if (turno==2)
    {
        comision=0.06;
    }
    if (turno==3)
    {
        comision=0.04;
    }
    return comision;
}

void pago (double &ventas, int &turno, double &PorComis)
{
    Porcentaje(turno);
    pay=ventas*comision;
}

void empezar (int &turno, double &ventas, char nombre[], double &PorComis)
{
    cout<<"Nombre del empleado :";
    cin.getline (nombre,30);
    cout<<"Ingrese ventas :";
    cin>>ventas;
    do
    {
        cout<<"Ingrese turno :";
        cin>>turno;
    } while (!(turno>=1 and turno<=3));
}


int main()
{
    empezar (turno, ventas, nombre, PorComis);
    pago(ventas,turno,PorComis);
    cout<<"El pago es  :"<<pay<<"\n";
    return 0;
}
