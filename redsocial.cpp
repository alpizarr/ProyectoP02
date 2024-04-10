#include "redsocial.h"
#include "usuario.h"
#include "publicacion.h"
#include <vector>

void RedSocial::agregarUsuario(Usuario* usuario)
{
    Usuario* user = new Usuario(usuario); 
    
    this->Usuarios.push_back(user);
}

void RedSocial::mostrarUsuarios()
{
    for (int i = 0; i < Usuarios.size(); i++)
    {
        Usuarios[i]->  mostrar();
        cout << endl; 
    }
}

void RedSocial::mostrarPublicaciones()
{
    for (int i = 0; i < Publicaciones.size(); i++)
    {
        Publicaciones[i]->mostrarPublicacion();
    }
}

Usuario *RedSocial::getUsuario(int od)
{
    int i = 0;
    bool verify = false;
    int c; 

    while (i < Usuarios.size())
    {
        if (Usuarios[i]->getID() == od)
        {
            c = i; 
            verify = true;
        }
        i++;
    }
    if (verify)
    {
        Usuario* us = Usuarios[c]; 
        return us; 
    }
    else
    {
        cout << "El usuario no existe." << endl;
        return nullptr;
    }
}

RedSocial::RedSocial(string nombre)
{
    this->nombre = nombre;
}

RedSocial::RedSocial(string nombre, vector<Usuario *> Usuarios)
{
    this->nombre = nombre;
    this->Usuarios = Usuarios;
}

RedSocial::RedSocial(string nombre, vector<Usuario *> Usuarios, vector<Publicacion *> Publicaciones)
{
    this->nombre = nombre;
    this->Usuarios = Usuarios;
    this->Publicaciones = Publicaciones;
}
