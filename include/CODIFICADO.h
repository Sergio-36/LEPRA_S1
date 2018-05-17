#ifndef CODIFICADO_H
#define CODIFICADO_H
#include <iostream>

using namespace std;


class CODIFICADO
{
    public:
        CODIFICADO(char*,char*);
        virtual ~CODIFICADO();
        int *Array_codificacion();
        int *Array_decodificacion();
        int *Proceso_codificacion();
        int *proceso_decodificacion();
        char *Pasar_a_char();

    protected:

    private:
        char *Palabra;
        char *P_Clave;
        char *ALFABETO;

};

#endif // CODIFICADO_H
