#include <iostream>
#include <vector>
#include <string>
#include "redsocial.h"
#include "usuario.h"
#include "publicacion.h"
#include "rlutil.h"
using namespace std;
void bienvenida();
void interfaz(RedSocial &skibidi);
void EntrarPerfil(RedSocial &skibidi, Usuario* usuarioActual);

int main()
{
  bienvenida ();
  while (true)
  {
    interfaz();
  }
  
}

void bienvenida()
{
  hidecursor();
cout <<"      ::::::::          :::    :::          :::::::::::          :::::::::          :::::::::::          :::::::::          :::::::::::                      :::::::::::          :::::::: " <<endl;
cout <<"    :+:    :+:         :+:   :+:               :+:              :+:    :+:             :+:              :+:    :+:             :+:                              :+:             :+:    :+: " <<endl;
cout <<"   +:+                +:+  +:+                +:+              +:+    +:+             +:+              +:+    +:+             +:+                              +:+             +:+    +:+  " <<endl;
cout <<"  +#++:++#++         +#++:++                 +#+              +#++:++#+              +#+              +#+    +:+             +#+                              +#+             +#+    +:+   " <<endl;
cout <<"        +#+         +#+  +#+                +#+              +#+    +#+             +#+              +#+    +#+             +#+                              +#+             +#+    +#+    " <<endl;
cout <<"#+#    #+#         #+#   #+#               #+#              #+#    #+#             #+#              #+#    #+#             #+#              #+#             #+#             #+#    #+#     " <<endl;
cout <<"########          ###    ###          ###########          #########          ###########          #########          ###########          ###         ###########          ########       " <<endl;

    while (getkey() != 32) {};

 cls();
}


void interfaz(RedSocial &skibidi) {
  while (true) {
    cout << "**Menu principal**" << endl;
    cout << "1. Ver lista de usuarios" << endl;
    cout << "2. Sign in" << endl;
    cout << "3. Log in" << endl;
    cout << "4. Salir" << endl;

    int opcion;
    cin >> opcion;

    switch (opcion) {
      case 1:
        skibidi.mostrarUsuarios();
        break;
      case 2:
        int a=0;
        cout<< "Introduzca el ID" << endl;
        cin>> a;
        skibidi.getUsuario(a);
        EntrarPerfil(skibidi, a);
        break;
      case 3:
        Usuario n;
        cout <<"Inserte nombre" << endl;
        string name;
        cin>> name;
        cout << "Inserte edad"
        int age;
        cin>> age;
        cout <<"Inserte nacionalidad" << endl;
        string nac;
        cin>> nac;
        cout <<"Inserte hobbie" << endl;
        string hob;
        cin>> hob;
        n(name, age, nac, hob);
        skibidi.agregarUsuario(n);
        break;
      case 4:
        return;
      default:
        cout << "Porfavor escoja una dentro del rango" << endl;

    }

  }
}


void EntrarPerfil(RedSocial &skibidi, Usuario* user) 
{
  while (true) {
    cout << "**Perfil de " << user->getNombre() << "**" << endl;
    cout << "1. Ver amigos" << endl;
    cout << "2. Ver publicaciones" << endl;
    cout << "3. Crear publicaciones" << endl;
    cout << "4. Entrar a perfil de un tilin" << endl;
    cout << "5. Agregar tilin" << endl;
    cout << "6. Salir" << endl;

    int opcion;
    cin >> opcion;

    switch (opcion) {
      case 1:
        user.mostrarAmigos();
        break;
      case 2:
        user.mostrarPublicaciones();
        break;
      case 3:
        user.crearPublicacion(user);

        break;
      case 4:
        cout<< "Introduce el id de tu tilin" << endl;
        int idfrd;
        user.getAmigo(idfrd);
        break;
      case 5:
        cout<< "Introduce el id de tu tilin" << endl;
        int idfrd;
        int c= 0;
        bool found =false;
        for(int i= 0; i<= skibidi.usuarios.size; i++)
        {
          if (skibidi.usuarios[i].id == idfrd)
          {
            found= true;
            c=i;
          }
        }
        if(found== false)
        {
          cout << "No se encontro este usuario" << endl;
        }else{
          user.agregarAmigo(skibidi.usuarios[c]);
        }
        break;
      case 6:
        return;
      default:
        cout << "Porfavor escoja una dentro del rango" << endl;
    }
  }
}
