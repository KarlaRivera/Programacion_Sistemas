#include <iostream>

using namespace std;

char nombre[30];
int turno, horaNorm, horaEx, PagoNorm, PagoEx;
int pago, PagoTotal, hora;
void empezar (int turno, int &horaNorm, int &horaEx, char nombre[])
{
    cout<<"Ingresar nombre del empleado :";
    cin.getline (nombre,30);
    cout<<"Ingresar hora normal :";
    cin>>horaNorm;
    cout<<"Ingresar hora extra :";
    cin>>horaEx;
    do
    {
        cout<<"Ingresar el turno :";
        cin>>turno;
    }while (!(turno>=1) and (turno<=4));

}

int calcularPNormal (int turno)
{
    if ((turno==1) or (turno==3))
    {
        return 200;
    }
    if ((turno==2) or (turno==4))
    {
        return 300;
    }
}

int calcularPextra (int turno)
{
    if ((turno==1) or (turno==3))
    {
        return 250;
    }
    if ((turno==2) or (turno==4))
    {
        return 350;
    }
}

void FuncionesdePago (int turno, int &horaEx, int &horaNorm, int &PagoNorm, int &PagoEx, int &hora)
{
    horaNorm=calcularPNormal(turno);

    if ((turno==1) or (turno==3))
    {
        PagoNorm=hora*horaNorm;
    }
    if ((turno==2) or (turno==4))
    {
        PagoNorm=hora*horaNorm;
    }

    horaEx=calcularPextra(turno);

    if ((turno==1) or (turno==3))
    {
        PagoEx=hora*horaEx;
    }
    if ((turno==2) or (turno==4))
    {
        PagoEx=hora*horaEx;
    }

    PagoEx=hora*PagoEx;
    PagoNorm=hora*PagoNorm;
    PagoTotal=PagoNorm+PagoEx;

}

int main()
{
    empezar(turno, horaNorm, horaEx, nombre);
    FuncionesdePago(turno, horaEx, horaNorm, PagoNorm, PagoEx, hora);
    cout<<"Pago total es :"<<PagoTotal<<"\n";
    return 0;
}
