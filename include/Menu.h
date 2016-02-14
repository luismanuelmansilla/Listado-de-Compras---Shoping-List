#ifndef MENU_H
#define MENU_H
#include "Lista.h"
#include "Articulo.h"
#include "Menu.h"

class Menu
{
    public:
        Menu();
        virtual ~Menu();
        void menuPrincipal();
        void menuListar();
        void menuIntroducir();
        void menuEliminar();
    friend class Lista;
};

#endif // MENU_H
