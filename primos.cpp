#include <iostream>

using namespace std;

int main()
{
    int numero=0; // se le una variable entera
    cout<<"$:";  //texto que aparecera en la pantalla   
    cin>>numero; // guarda el valor escrito en la variable 
    for (int i = 2; numero >= i; i++) // repite la accion hasta que i sea igual a numero
    {

        while(numero % i == 0)// imprime i hasta que la division no sea 0
        {

            cout<<i<<" x ";
            numero /= i;
        }

    }
}