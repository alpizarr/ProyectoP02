#ifndef usuario_h
#define usuario_h
#include <iostream>
using namespace std;
#include "redsocial.h"
#include "publicacion.h"
class Usuario {
private:
  int id;

public:
  string nombre;
  int edad;
  string nacionalidad;
  string hobbie;
  vector<Usuario*> amigos;
  vector<Publicacion*> publicaciones;

  Usuario(int od,string name);
  Usuario(int od,string name, int age);
  Usuario(int od,string name, int age, string nac);
  Usuario(int od,string name, int age, string nac, string hob);

  int getId();
  void mostrarAmigos();
  void mostrarPerfil();
  void mostrarPublicaciones();
  void agregarAmigo(Usuario* nuevoAmigo)
  void crearPublicacion (Usuario* user);
  Usuario* getAmigo (int id);

};



#endif
