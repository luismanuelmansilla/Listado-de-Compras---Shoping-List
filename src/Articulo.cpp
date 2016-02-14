#include "Articulo.h"

Articulo::Articulo(std::string articulo, int cantidad): _siguiente(NULL), _articulo(articulo), _cantidad(cantidad)
{

}

std::string Articulo::getArticulo()
{
    return _articulo;
}

int Articulo::getCantidad()
{
    return _cantidad;
}

Articulo* Articulo::getSiguiente()
{
    return _siguiente;
}

Articulo::~Articulo()
{
    //dtor
}
