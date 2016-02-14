#include <iostream>
#include <stdlib.h>
#include "Lista.h"
#include "Articulo.h"
using namespace std;

Lista::Lista(): _primer(NULL), _ultimo(NULL)
{
    //ctor
}

Lista::~Lista()
{
    //dtor
}

void Lista::agregar(Articulo* articulo)
{
    if(_primer == NULL)
    {
        _primer = articulo;
        _ultimo = articulo;
    }else
    {
        _ultimo -> _siguiente = articulo;
        _ultimo = articulo;

    }
}

Articulo* Lista::getPrimer()
{
    return _primer;
}

void Lista::listarArticulos()
{
    Articulo* i = getPrimer();
    int cont=1;
    while( i!= NULL){
        cout << cont << ". " << i -> getArticulo() << " ";
        cout << i -> getCantidad() << endl;
        i = i -> getSiguiente();
        cont++;
    }
}

void Lista::introducirArticulos(string nombre, int cantidad)
{

    agregar(new Articulo(nombre,cantidad));
    size++;

}

void Lista::eliminarArticulos(int numeroArticulo)
{

    Articulo* temp1 = _primer;
    Articulo* temp2 = temp1 -> _siguiente;

    if(numeroArticulo == 1){
        _primer = temp1->_siguiente;
        delete(temp1);
        size--;
    }else{
        for(int i=0; i<numeroArticulo-2; i++){
            temp1 = temp1 -> _siguiente;
        }
        temp1 -> _siguiente = temp2 ->_siguiente;
        delete(temp2);
        size--;
    }
}

