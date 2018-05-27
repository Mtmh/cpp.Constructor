#include <iostream>

using namespace std;

struct Persona
{
    string nombre;
    int edad;
    double salario;

    Persona(const string &nom, int e, double s);//<--Constructor
    void imprime() const;

};

int main()
{
    Persona juan("Juan", 20, 500.0);
    juan.imprime();

    return 0;
}

Persona::Persona(const string &nom, int e, double s)//Delegados
{
    nombre = nom;
    edad = e;
    salario = s;
}

void Persona::imprime() const//Delegados
{
    cout << nombre << endl;
    cout << edad << endl;
    cout << salario << endl;
}
