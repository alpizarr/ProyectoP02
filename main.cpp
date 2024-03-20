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
        switch (r) 
        cout << "1.- " << " Ver lista de usuario " << endl;    
        cout << "2.- " << " Ver lista de publicaciones " << endl;    
        cout << "3.- " << " Entrar a perfil de un usuario " << endl;    
        cout << "4.- " << " Agregar un nuevo usuario " << endl;    
        cout << "5.- " << " Salir "  << endl;
        cin >> r;
    } 
}
