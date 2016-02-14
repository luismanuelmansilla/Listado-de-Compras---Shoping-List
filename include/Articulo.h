#ifndef ARTICULO_H
#define ARTICULO_H
#include <string>

class Articulo
{
    public:
        Articulo(std::string articulo, int cantidad);
        virtual ~Articulo();
        std::string getArticulo();
        int getCantidad();
        Articulo* getSiguiente();
    protected:
    private:
        Articulo* _siguiente;
        std::string _articulo;//nombre
        int _cantidad;
    friend class Lista;
};

#endif // ARTICULO_H
