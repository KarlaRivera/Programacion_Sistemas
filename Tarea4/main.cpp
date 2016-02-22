#include <iostream>

using namespace std;

int main()
{
    int j=6;
    int k=0;
    for (j=6;j>=1;j--)
    {
        for (k=1; k<j; k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}
