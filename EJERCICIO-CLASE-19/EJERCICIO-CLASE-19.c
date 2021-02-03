#include <iostream>
#include<fstream>
using namespace std;

void  ingresar();
void leer();

int main() {
  int opcion;
  string n;
  string a;
  int ed;
  string nombre, apellido;
  int edad;
  ofstream archivoprueba;
  string nombrearchivo;
  char r;
  do{
    cout<<"**MENÚ**"<<endl;
    cout<<"\t1.- Ingresar datos de contactos"<<endl;
    cout<<"\t2.- Mostrar datos de contactos"<<endl;
    cout<<"\t3.-Salir"<<endl;
    cout<<"Ingrese la opción: ";
    cin>>opcion;
    cin.ignore();
    switch(opcion){
      case 1:
       ingresar();
      break;
      case 2:
        leer();
      break;
      case 3:
        cout<<"Gracias, vuelva pronto";
      break;
    }
  }
  while(opcion!=3);
  return 0;
}

void ingresar(){
  string nombre, apellido;
  int edad;
  ofstream archivoprueba;
  string nombrearchivo;
  char r;
  cout<<"Ingrese el nombre del archivo: ";
  getline(cin, nombrearchivo);
  archivoprueba.open(nombrearchivo.c_str(),ios::out);
    do{
        cout<<"Ingrese el nombre del contacto: ";
        getline(cin,nombre);
        cout<<"Ingrese el apellido del contacto: ";
        getline(cin,apellido);
        cout<<"Ingrese la edad del contacto: ";
        cin>>edad;

        archivoprueba<<" "<<nombre<<" "<<apellido<<" "<<edad<<endl;

        cout<<"¿Desea ingresar otro contacto? s/n: ";
        cin>>r;
        cin.ignore();
    }
    while(r=='s'|| r=='S');
  archivoprueba.close();
}

void leer(){
  string nombrearchivo;
  string nombre;
  string apellido;
  //ifstream archivolectura;
  int edad;
  //ifstream archivolectura();
  ifstream archivolectura("Contactos.txt");
  while (!archivolectura.eof()){
    archivolectura>>nombre>>apellido>>edad;
    //getline(archivolectura,texto);
    if(!archivolectura.eof()){
      cout<<"==========================================\n";
      cout<<"Nombre: "<<nombre;//<<endl;
      cout<<"\nApellido: "<<apellido;//<<endl;
      cout<<"\nEdad: "<<edad<<endl;
      cout<<"==========================================\n";
      //cout<<endl;
    }
  }
  archivolectura.close();
}
