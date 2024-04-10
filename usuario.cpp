#include "redsocial.h"
#include "usuario.h"
#include "publicacion.h"
#include <vector>

Usuario::Usuario(int od,string name);
{
this->nombre = name;
this->edad = 0;
this->nacionalidad = "unknown";
this->id = od;
}

Usuario::Usuario(int od,string name, int age);
{
this->nombre = name;
this->edad = age;
this->nacionalidad = "unknown";
this->id = od;
}

Usuario::Usuario(int od,string name, int age, string nac);
{
this->nombre = name;
this->edad = age;
this->nacionalidad = nac;
this->id = od;
}

Usuario::Usuario(int od,string name, int age, string nac, string hob)
{
    this->nombre = name;
    this->edad = age;
    this->nacionalidad = nac;
    this->id = od;
    this->hobbie=hob;
}

int Usuario::getId()
{
    return id;
}

void Usuario::mostrarAmigos()
{
    for (int i = 0; i<= amigos.size; i++)
    {
        cout <<"Nombre: " amigos[i].nombre<< endl;
        cout <<"Edad: " amigos[i].Edad<< endl;
        cout <<"Nacionalidad: " amigos[i].nacionalidad<< endl;
        cout << "ID: "<< amigos[i].getId<< endl;
        cout << "Hobbie: "<< amigos[i].hobbie << endl;
        cout<< "- - - - - - - - - - - - - - - - - - - - - - - - - - - -  - -  - - "<<endl;
    }
}

void Usuario::mostrarPerfil()
{
    for (int i = 0; i<= usuarios.size; i++)
    {
        cout <<"Nombre: " usuarios[i].nombre<< endl;
        cout <<"Edad: " usuarios[i].Edad<< endl;
        cout <<"Nacionalidad: " usuarios[i].nacionalidad<< endl;
        cout << "ID: "<< usuarios[i].getId<< endl;
        cout << "Hobbie: "<< usuarios[i].hobbie<<endl;
    }
}

void Usuario::mostrarPublicaciones()
{
    for (int i= 0; i<this->publicaciones.size(); i++)
    {
        this->publicaciones[i]->mostrarPublicacion();
    }
}

void Usuario::agregarAmigo(Usuario* nuevoAmigo)
{
    this->amigos.push_back(nuevoAmigo);
}

void Usuario::crearPublicacion (Usuario* user)
{
    Publicacion n;
        string date, pub;
        cout <<"Que deseas publicar?"<< endl;
        cin >> pub;
        cout << "Por ultimo, introduce la fecha de hoy papu"
        cin >> fecha;
        n(user, date, pub);
        user.publicaciones.push_back(n);
}

Usuario* Usuario::getAmigo (int id)
{
    int r;
    for (int i= 0; i<this->amigos.size; i++)
    {
        if(id== amigos[i].id)
        {
            r=i;
        }else{
            cout<< "No se encontro este tilin en la lista de amigos"<<endl;
        }
    return amigos[r];
    }
}