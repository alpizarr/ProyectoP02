#ifndef redsocial_h
#define redsocial_h
#include <vector>
#include "usuario.h"
#include "publicacion.h"

class RedSocial {
private:
  string nombre;
  vector<Usuario*> usuarios;
  vector<Publicacion*> publicaciones;
  Usuario* usuarioActual;

public:
  RedSocial(string nombre);

  void agregarUsuario(Usuario* usuario);
  void mostrarUsuarios();
  void mostrarPublicaciones();
  Usuario* getUsuario(int id);

  void mostrarPerfilUsuarioActual();
  void mostrarAmigosUsuarioActual();
  void crearPublicacion();

};



#endif
