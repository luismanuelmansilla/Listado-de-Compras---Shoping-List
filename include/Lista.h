#ifndef LISTA_H
#define LISTA_H
#include "Articulo.h"

class Lista
{
    public:
        Lista();
        virtual ~Lista();
        void agregar(Articulo* articulo);
        Articulo* getPrimer();
        void listarArticulos();
        void introducirArticulos(std::string nombre, int cantidad);
        void eliminarArticulos(int numeroArticulo);
        int size = 0;
    friend class Menu;
    private:
        Articulo* _primer;
        Articulo* _ultimo;


};

#endif // LISTA_H
