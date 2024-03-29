
#ifndef publicacion_h
#define publicacion_h


class Publicacion {
private:
  int id;
  string contenido;
  Usuario* autor;

public:
  Publicacion(int id, string contenido, Usuario* autor);

  int getId() { return id; }

  void mostrar();

  // ... (otras funcionalidades)
};

#endif

#endif
