#ifndef redsocial_h
#define redsocial_h
#include <iostream>
using namespace std;
#include "usuario.h"
#include "publicacion.h"

class RedSocial {
private:
  vector<Usuario*> usuarios;
  vector<Publicacion*> publicaciones;

public:
  string nombre;
  int numeroDeUsuarios;
  int numeroDePublicaciones;

  void agregarUsuario(Usuario* usuario);
  void mostrarUsuarios();
  void mostrarPublicaciones();
  Usuario* getUsuario(int od);

  RedSocial(string nombre);
  RedSocial(string nombre, vector<Usuario*>usuarios);
  RedSocial(string nombre, vector<Usuario*>usuarios, vector<Publicacion*>publicaciones);
};



#endif
