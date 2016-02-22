#include <iostream>

using namespace std;
char nombre[30];
int hrs,turno;


int pago (int hrs, int turno)
{
    if (turno==1)
    {
        turno=100;
    }
    if (turno==2)
    {
        turno=120;
    }
    if (turno==3)
    {
        turno=150;
    }
    int pay;
    pay=turno*hrs;
    return pay;
}

void empezar(int hrs, int turno, char nombre[]){
    cout<<"Nombre del empleado :";
    cin.getline (nombre,30);
    cout<<"Ingrese numero de horas :";
    cin>>hrs;
    do
    {
        cout<<"Ingrese turno :";
        cin>>turno;
    } while (!(turno>=1 and turno<=3));
    cout<<pago(hrs, turno);
}

int main()
{
    empezar(hrs, turno, nombre);
    return 0;
}


