#include <iostream>
#include <string>
#include "redsocial.h"
#include "usuario.h"
#include "publicacion.h"
#include <vector>
using namespace std;

Publicacion(Usuario* user, string date, string cont)
{
    this->usuario=user;
    this-> fecha = date;
    this-> contenido = cont;
}
void mostrarPublicacion()
{
    cout <<"papu dia: "<< this->fecha <<"       de: "<< this->usuario.nombre<< endl;
    cout << contenido <<endl;
}