#ifndef usuario_h
#define usuario_h

class Usuario {
private:
  int id;
  string nombre;
  string biografia;
  vector<Usuario*> amigos;
  vector<Publicacion*> publicaciones;

public:
  Usuario(int id, string nombre, string biografia);

  int getId() { return id; }
  string getNombre() { return nombre; }

  void mostrarPerfil();
  void mostrarPublicaciones();

};



#endif
