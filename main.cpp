#include <iostream>
#include "CODIFICADO.h"
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <string.h>
#include <cstring>
#include <MENU.h>
#include <COMPROBADOR.h>

using namespace std;

char *string_a_char(string PA) // TRANSFORMA UN STRING EN UN *CHAR
{
    char *x = new char[PA.length() + 1];
    strcpy(x, PA.c_str());
    return x;
}

int main()
{  int opcion= 0;
    while (true)
    {
    int i,contador = 0;
    char *x,*y;
    bool verificacion,verificacion_2;
     do{
    system("cls");
    if (contador > 0)
    cout<<"   HUBO UN ERROR AL INGRESAR LOS DATOS REINTENTE"<<endl<<endl;

    string Palabra , Clave ;
    cout<<"Introduce La Palabra que quieras codificar o decodificar "<<endl;
    getline(cin, Palabra, '\n');
    cout <<endl;
    cout<<"Introduce Un codigo para empezar a codificar o decodificar"<<endl;
    getline(cin, Clave , '\n');
    cout<<endl;
    x=string_a_char(Palabra);
    y=string_a_char(Clave);
    verificacion = comprobar(x);
    verificacion_2 = comprobar_clave(y);
    contador++;

    }while(verificacion == true || verificacion_2 == true);

    CODIFICADO P_PRUEBA(x,y);
    int *aux;
    int opcion;
    menu();
    cin>>opcion;
    cout<<endl<<endl;

    if (opcion == 1)
    {
        P_PRUEBA.Proceso_codificacion();
        cout<<endl;
        system("pause");
        system("cls");

    }
    if (opcion == 2)
    {
        P_PRUEBA.proceso_decodificacion();

        cout<<endl;
        system("pause");
        system("cls");
    }
    if (opcion == 4)
    {
        exit(0);
    }


    cin.ignore();
    }
    return 0;


}
