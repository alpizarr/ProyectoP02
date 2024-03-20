#include <iostream>
#include <vector>
#include <string>
#include "redsocial.h"
#include "usuario.h"
#include "publicacion.h"
using namespace std;
int r;
int interfaz()
{
    while (true)
    {
        
        cout << "1.- " << " Ver lista de usuario " << endl;    
        cout << "2.- " << " Ver lista de publicaciones " << endl;    
        cout << "3.- " << " Entrar a perfil de un usuario " << endl;    
        cout << "4.- " << " Agregar un nuevo usuario " << endl;    
        cout << "5.- " << " Salir "  << endl; 
        cin >> r;
        switch (r) 
        {
        case 1:
        lu();
        case 2:
        Lp();
        case 3:
        EntrarPerfil();
        case 4:
        Nuevouser();
        case 5:
        break;
        }
    }
}

int EntrarPerfil()
{
    cout << " Ver lista de amigos " << endl;
    cout << " Ver publicaciones " << endl;
    cout << " Crear publicaciones " << endl;
    cout << " Entrar a perfil de amigo " << endl;
    cout << " Agrega a un amigo " << endl; 
    cout << " Salir " << endl;
} 
