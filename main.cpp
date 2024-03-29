#include <iostream>
#include <vector>
#include <string>
#include "redsocial.h"
#include "usuario.h"
#include "publicacion.h"
using namespace std;
void interfaz(RedSocial &redSocial) {
  while (true) {
    cout << "**Menu principal**" << endl;
    cout << "1. Ver perfil" << endl;
    cout << "2. Ver amigos" << endl;
    cout << "3. Ver publicaciones" << endl;
    cout << "4. Crear publicación" << endl;
    cout << "5. Salir" << endl;

    int opcion;
    cin >> opcion;

    switch (opcion) {
      case 1:
        redSocial.mostrarPerfilUsuarioActual();
        break;
      case 2:
        redSocial.mostrarAmigosUsuarioActual();
        break;
      case 3:
        redSocial.mostrarPublicaciones();
        break;
      case 4:
        redSocial.crearPublicacion();
        break;
      case 5:
        return;
      default:
        cout << "Porfavor escoja una dentro del rango" << endl;
    }
  }
}


void EntrarPerfil(RedSocial &redSocial, Usuario* usuarioActual) {
  while (true) {
    cout << "**Perfil de " << usuarioActual->getNombre() << "**" << endl;
    cout << "1. Ver amigos" << endl;
    cout << "2. Ver publicaciones" << endl;
    cout << "3. Crear publicaciones" << endl;
    cout << "4. Entrar a perfil de amigo" << endl;
    cout << "5. Agregar amigo" << endl;
    cout << "6. Salir" << endl;

    int opcion;
    cin >> opcion;

    switch (opcion) {
      case 1:
    }
  }
