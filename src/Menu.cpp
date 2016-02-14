#include <iostream>
#include "Menu.h"
#include <stdlib.h>

using namespace std;

Lista* lista = new Lista();

Menu::Menu()
{
    menuPrincipal();
    //ctor
}

Menu::~Menu()
{
    //dtor
}
void Menu::menuPrincipal()
{
    int opcionMenu;
    string temp;
    do {
        cout << "\n\n\tListado de Compras\n\n";
        cout << "1. Listar Articulos\n";
        cout << "2. Introducir Articulos\n";
        cout << "3. Eliminar Articulos\n";
        cout << "4. Salir\n";
        cout << "\nEleja una opcion => ";
        cin >> temp;
        if(temp.size() > 1 || temp[0]-'0' > 4 || temp[0]-'0' < 1){
                cout << "\nOpcion Invalida! Presione cualquier tecla para continuar...\n";
                system("PAUSE>null");
                system("cls");
                continue;
            } else{
                opcionMenu = temp[0] - '0';
            }
        switch (opcionMenu) {
            case 1: menuListar();
            break;
            case 2: menuIntroducir();
            break;
            case 3: menuEliminar();
            break;
            case 4: cout << "\nGracias por usar el programa, hasta la proxima!\n";
            break;
        }
        system("PAUSE>null");
        system("cls");
    }while(opcionMenu !=4);

}

void Menu::menuListar()
{
    system("cls");
    cout << "\n\n\tListado de Compras\n\n";
    if(lista -> size == 0){
        cout << "\nNo hay articulos agregados!!\n";
    }
    lista -> listarArticulos();
    cout << "\n--Presione Cualquier tecla para regresar el menu principal --\n";

}

void Menu::menuIntroducir()
{
    system("cls");
    string nombre;
    int cantidad;
    cout << "\n\n\tIntroduccion de articulos\n\n";
    cout << "Introduzca el nombre del  articulo: ";
    cin >> nombre;
    cout << "Introduza la cantidad del nuevo articulo: ";
    cin >> cantidad;
    lista -> introducirArticulos(nombre,cantidad);
    cout << "\n--Articulo Agregado. Presione cualquier tecla para regresar al menu principal--\n";

}

void Menu::menuEliminar()
{
    system("cls");
    int numeroArticulo;
    cout << "\n\n\tEliminado de artículos\n\n";
    if(lista -> size == 0){
        cout << "\nNo hay articulos agregados!!\n";
        cout << "\n--Presione cualquier tecla para regresar al menu principal--\n";
    }else{
        lista -> listarArticulos();
        cout << "\nElija el articulo  a eliminar => ";
        cin >> numeroArticulo;
        lista -> eliminarArticulos(numeroArticulo);
        cout << "\n--Articulo eliminado. Presione cualquier tecla para regresar al menu principal--\n";
    }

}
