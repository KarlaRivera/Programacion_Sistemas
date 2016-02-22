 #include <iostream>
 #include <stdio.h>

using namespace std;

int main()
{
    int num=0;
    int i=0;
    int j=0;
    char resp;

    for (j=10; j>0; j--)
    {
        cout<<"Numero "<<j<<"\n";
    }
    do{

        do
        {
            cout<<"Ingrese un numero entre 5 y 10..";
            cin>>num;

        }while(!((num>=5) && (num<=10)));

        for (i=1; i<=10; i++)
        {

            cout<<i<<" X "<<num<<" = "<<i*num<<"\n";
        }_flushall();

       do
       {
           cout<<"Desea continuar...:";
           cin.get(resp);
           _flushall();

       } while ((toupper(resp) !='S') and (toupper(resp) !='N'));
   } while ((toupper(resp)=='S'));
return 0;
}

