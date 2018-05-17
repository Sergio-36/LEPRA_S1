#include "CODIFICADO.h"
#include <iostream>
#include <string.h>
#include <string>
//#include <stdio.h>
using namespace std;


CODIFICADO::CODIFICADO(char* _Palabra , char* _P_Clave)
{

    Palabra = _Palabra;
    P_Clave = _P_Clave;
    ALFABETO = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
}

CODIFICADO::~CODIFICADO()
{

}

/*int *CODIFICADO::Array_codificacion()
{
    int *A_Codificado;
    int i,j,k=0;
    int A_CLAVE[strlen(P_Clave)],A_PALABRA[strlen(Palabra)];
    A_Codificado = new int[strlen(Palabra)];
    int A_C[strlen(Palabra)];
    int largo= strlen(Palabra);
    char P_CODIFICADA[strlen(Palabra)];
    string PRUEBA;

    for(i = 0; i<strlen(Palabra); i++)// ARREGLO DE PALABRA COMO ENTEROS
    {
        for(j = 0; j<strlen(ALFABETO); j++)
        {
            if(Palabra[i] == ALFABETO[j])
            {
                A_PALABRA[i] = j;
            }
            if(Palabra[i] == 32)
            {
                A_PALABRA[i] = -99;
            }

        }

    }
        for(i = 0; i<strlen(P_Clave); i++)// ARREGLO DE P_CLAVE COMO ENTEROS
        {
        for(j = 0; j<strlen(ALFABETO); j++)
        {
            if(P_Clave[i] == ALFABETO[j])
            {
                A_CLAVE[i] = j;

            }

        }

        }

        j=0;
    for(i = 0; i<strlen(Palabra); i++) // CODIFICAR PALABRA CON TAQUION
    {
        if ( A_PALABRA[i] != -99)
        {
            if( (A_PALABRA[i] + A_CLAVE [j]) >= 26)
            {
                A_C[i] = (A_PALABRA[i] + A_CLAVE[j])-26;
                j++;
               //  cout<<A_C[i]<<";";

            }
            else
            {
                if (A_PALABRA[i] + A_CLAVE [j] < 26 )
                {
                    A_C[i] = (A_PALABRA[i] + A_CLAVE[j]);
                   // cout<<A_C[i]<<";";
                    j++;
                }

            }
            if (j == strlen(P_Clave))
            {
                j = 0;
                //  cout<<j<<endl;
            }
            // CUANDO J = STRLEN(TAQUION) J=0;
        }
        else
        {
            A_C[i]=-99;
        }

        }


 for(i = 0; i<strlen(Palabra); i++) // IMPRIMIR CIFRADO
   {
    for (j = 0; j<strlen(ALFABETO); j++)
    {
        if (A_C[i] != -99)
        {
            if(A_C[i] == j)
            {
               cout<<ALFABETO[j]<<"/";
                P_CODIFICADA[i]=ALFABETO[j];

            }
        }
    }
    if(A_C[i] == -99)
    {
        P_CODIFICADA[i]=' ';
       cout<<" ";
    }

   }


}


int *CODIFICADO::Array_decodificacion() // EN LA SEGUNDA LLAMADA SE CAE
{
    int *A_Codificado;
    int i,j,k=0;
    int A_CLAVE[strlen(P_Clave)],A_PALABRA[strlen(Palabra)];
    A_Codificado = new int[strlen(Palabra)];
    int A_C[strlen(Palabra)];
    char *P_CODIFICADA;

    for(i = 0; i<strlen(Palabra); i++)// ARREGLO DE PALABRA COMO ENTEROS
    {
        for(j = 0; j<strlen(ALFABETO); j++)
        {
            if(Palabra[i] == ALFABETO[j])
            {
                A_PALABRA[i] = j;
            }
            if(Palabra[i] == 32)
            {
                A_PALABRA[i] = -99;
            }

        }

    }
        for(i = 0; i<strlen(P_Clave); i++)// ARREGLO DE P_CLAVE COMO ENTEROS
        {
        for(j = 0; j<strlen(ALFABETO); j++)
        {
            if(P_Clave[i] == ALFABETO[j])
            {
                A_CLAVE[i] = j;

            }

        }

        }

        j=0;
    for(i = 0; i<strlen(Palabra); i++) // DECODIFICAR PALABRA CON TAQUION
    {
        if ( A_PALABRA[i] != -99)
        {
            if( (A_PALABRA[i] - A_CLAVE [j]) < 0)
            {
                A_C[i] = (A_PALABRA[i] - A_CLAVE[j])+26;
              //  cout<<A_PALABRA[i] <<"___"<<A_CLAVE[j]<<"---";
              //cout<<A_PALABRA[i]<<""<<"-"<<A_CLAVE[j]<<"="<<A_C[i]<<endl;
                j++;
                // cout<<A_C[i]<<";";

            }
            else
            {
                if (A_PALABRA[i] - A_CLAVE [j] > 0 )
                {
                    A_C[i] = (A_PALABRA[i] - A_CLAVE[j]);
               //     cout<<A_PALABRA[i]<<""<<"-"<<A_CLAVE[j]<<"="<<A_C[i]<<endl;
                    j++;
                }
                else
                {
                    if(A_PALABRA[i] == A_CLAVE[j]){
                    A_C[i]=0;
                    j++;
                    }

                   // cout<<A_C[i]<<endl;
                }

            }
            if (j == strlen(P_Clave))
            {
                j = 0;
                //  cout<<j<<endl;
            }
            // CUANDO J = STRLEN(TAQUION) J=0;
        }
        else
        {
            A_C[i]=-99;
        }

        }


 for(i = 0; i<strlen(Palabra); i++) // IMPRIMIR CIFRADO
   {
    for (j = 0; j<strlen(ALFABETO); j++)
    {
        if (A_C[i] != -99)
        {
            if(A_C[i] == j)
            {
                cout<<ALFABETO[j];
                P_CODIFICADA[i]=ALFABETO[j];

            }
        }
    }
    if(A_C[i] == -99)
    {
        P_CODIFICADA[i]=' ';
        cout<<" ";
    }

   }
    A_Codificado = A_C;


    return A_Codificado;
}

 */
int *CODIFICADO::Proceso_codificacion()
{
    int *A_Codificado;
    int i,j;
    int A_CLAVE[strlen(P_Clave)],A_PALABRA[strlen(Palabra)];
    A_Codificado = new int[strlen(Palabra)];
    int A_C[strlen(Palabra)];
    int largo= strlen(Palabra);
    char P_CODIFICADA[strlen(Palabra)];

    for(i = 0; i<strlen(Palabra); i++)// ARREGLO DE PALABRA COMO ENTEROS
    {
        for(j = 0; j<strlen(ALFABETO); j++)
        {
            if(Palabra[i] == ALFABETO[j])
            {
                A_PALABRA[i] = j;
                cout<<Palabra[i]<<"="<<j<<"/";
            }
            if(Palabra[i] == 32)
            {
                A_PALABRA[i] = -99;
            }

        }
    }

    cout<<endl;

        for(i = 0; i<strlen(P_Clave); i++)// ARREGLO DE P_CLAVE COMO ENTEROS
        {
        for(j = 0; j<strlen(ALFABETO); j++)
        {
            if(P_Clave[i] == ALFABETO[j])
            {   cout<<P_Clave[i]<<"="<<j<<"/";
                A_CLAVE[i] = j;
            }

        }

        }
        cout<<endl<<endl<<"*****OPERACION DE CODIFICACION*****"<<endl;
        j=0;
    for(i = 0; i<strlen(Palabra); i++) // CODIFICAR PALABRA CON TAQUION
    {
        if ( A_PALABRA[i] != -99)
        {
            if( (A_PALABRA[i] + A_CLAVE [j]) >= 26)
            {
                A_C[i] = (A_PALABRA[i] + A_CLAVE[j])-26;
                j++;
                 cout<<Palabra[i]<<"+"<<P_Clave[j-1]<<"-26"<<"="<<A_C[i]<<endl;

            }
            else
            {
                if (A_PALABRA[i] + A_CLAVE [j] < 26 )
                {
                    A_C[i] = (A_PALABRA[i] + A_CLAVE[j]);
                  // cout<<A_CLAVE[i]<<";";
                    j++;
                    cout<<Palabra[i]<<"+"<<P_Clave[j-1]<<"="<<A_C[i]<<endl;
                }

            }
            if (j == strlen(P_Clave))
            {
                j = 0;
                //  cout<<j<<endl;
            }
            // CUANDO J = STRLEN(TAQUION) J=0;
        }
        else
        {
            A_C[i]=-99;
        }

        }
cout<<endl<<endl<<"*******CODIFICADO*******"<<endl;
 for(i = 0; i<strlen(Palabra); i++) // IMPRIMIR CIFRADO
   {
    for (j = 0; j<strlen(ALFABETO); j++)
    {
        if (A_C[i] != -99)
        {
            if(A_C[i] == j)
            {
               cout <<ALFABETO[j]<<"/";
                P_CODIFICADA[i]=ALFABETO[j];

            }
        }
    }


   }

}




int *CODIFICADO::proceso_decodificacion() // EN LA SEGUNDA LLAMADA SE CAE
{
    int *A_Codificado;
    int i,j,k=0;
    int A_CLAVE[strlen(P_Clave)],A_PALABRA[strlen(Palabra)];
    A_Codificado = new int[strlen(Palabra)];
    int A_C[strlen(Palabra)];
    char *P_CODIFICADA;

    for(i = 0; i<strlen(Palabra); i++)// ARREGLO DE PALABRA COMO ENTEROS
    {
        for(j = 0; j<strlen(ALFABETO); j++)
        {
            if(Palabra[i] == ALFABETO[j])
            {
                A_PALABRA[i] = j;
                cout<<Palabra[i]<<"="<<j<<"/";
            }
            if(Palabra[i] == 32)
            {
                A_PALABRA[i] = -99;
            }

        }

    }
    cout<<endl;
        for(i = 0; i<strlen(P_Clave); i++)// ARREGLO DE P_CLAVE COMO ENTEROS
        {
        for(j = 0; j<strlen(ALFABETO); j++)
        {
            if(P_Clave[i] == ALFABETO[j])
            {
                A_CLAVE[i] = j;
                cout<<P_Clave[i]<<"="<<j<<"/";

            }

        }

        }
        cout<<endl<<endl<<"*****OPERACION DE DECODIFICACION*****"<<endl;
        j=0;
    for(i = 0; i<strlen(Palabra); i++) // DECODIFICAR PALABRA CON TAQUION
    {
        if ( A_PALABRA[i] != -99)
        {
            if( (A_PALABRA[i] - A_CLAVE [j]) < 0)
            {
                A_C[i] = (A_PALABRA[i] - A_CLAVE[j])+26;

              //  cout<<A_PALABRA[i] <<"___"<<A_CLAVE[j]<<"---";
              //cout<<A_PALABRA[i]<<""<<"-"<<A_CLAVE[j]<<"="<<A_C[i]<<endl;
                j++;
                // cout<<A_C[i]<<";";
                cout<<Palabra[i]<<"-"<<P_Clave[j-1]<<"+26"<<"="<<A_C[i]<<endl;

            }
            else
            {
                if (A_PALABRA[i] - A_CLAVE [j] > 0 )
                {
                    A_C[i] = (A_PALABRA[i] - A_CLAVE[j]);
               //     cout<<A_PALABRA[i]<<""<<"-"<<A_CLAVE[j]<<"="<<A_C[i]<<endl;
                    j++;
                    cout<<Palabra[i]<<"-"<<P_Clave[j-1]<<"="<<A_C[i]<<endl;
                }
                else
                {
                    if(A_PALABRA[i] == A_CLAVE[j]){
                    A_C[i]=0;
                    j++;
                    }

                   // cout<<A_C[i]<<endl;
                }

            }
            if (j == strlen(P_Clave))
            {
                j = 0;
                //  cout<<j<<endl;
            }
            // CUANDO J = STRLEN(TAQUION) J=0;
        }
        else
        {
            A_C[i]=-99;
        }

        }
cout<<endl<<endl<<"*******DECODIFICADO*******"<<endl;

 for(i = 0; i<strlen(Palabra); i++) // IMPRIMIR CIFRADO
   {
    for (j = 0; j<strlen(ALFABETO); j++)
    {
        if (A_C[i] != -99)
        {
            if(A_C[i] == j)
            {
                cout<<ALFABETO[j];
                P_CODIFICADA[i]=ALFABETO[j];

            }
        }
    }
    if(A_C[i] == -99)
    {
        P_CODIFICADA[i]=' ';
        cout<<" ";
    }

   }


}
