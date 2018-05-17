#ifndef COMPROBADOR_H_INCLUDED
#define COMPROBADOR_H_INCLUDED
bool comprobar(char *palabra)
{   int i,j,a = 0;
    char *abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
    for(i = 0; i < strlen(palabra); i++)
    {
        for(j = 0; j<strlen(abc); j++)
        {
            if(palabra[i] == abc[j])
                a = 1 ;
        }
        if(a == 0)
        return true;
    }

    return false ;
}

bool comprobar_clave(char * palabra )
{
    int i,j,a = 0;
    char *abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(j = 0; j<strlen(abc); j++)
    {
        int contador = 0;
        for(i = 0; i < strlen(palabra); i++)
        {
            if(palabra[i] == abc[j])
            {
                a =1;
                contador++;
            }
            if (contador > 1)
            {
                return true;
            }

        }
       if(a == 0)
        return true;
    }

    return false;
}
char *Pasar_a_char(int A_PALABRA[])
{
     char *ALFABETO = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i , j;
        char *palabra;
        cout<<A_PALABRA[0]<<" "<<A_PALABRA[1]<<"EN LA FUNCION"<<endl;
    for( i = 0; i<(sizeof(A_PALABRA)/sizeof(A_PALABRA[0])); i++ )
    {
        for( j = 0; j<strlen(ALFABETO); j++)
        {
            if (A_PALABRA[i] == j)
                {
                    palabra[i] = ALFABETO[j];
                        cout<<palabra[i];
                }
        }
    }
    return palabra;
}



#endif // COMPROBADOR_H_INCLUDED
