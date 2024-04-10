
#ifndef publicacion_h
#define publicacion_h
#include <iostream>
using namespace std;
#include "usuario.h"
#include "redsocial.h"

class Publicacion {
private:
  int id;

public:
  string contenido;
  string fecha;
  Usuario* Usuario;

  Publicacion(Usuario* user, string date, string cont);

  void mostrarPublicacion();

  // ... (otras funcionalidades)
};

#endif


