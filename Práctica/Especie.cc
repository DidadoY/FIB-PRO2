#include "Especie.hh"
using namespace std;

Especie::Especie(){
  identificador="";
  gen="";
}

Especie::Especie(string a, string b){
  identificador = a;
  gen = b;
}

Especie::~Especie(){}


string Especie::consultar_gen() const{
  return gen;
}

string Especie::consultar_identificador() const{
  return identificador;
}

void Especie::leer() {
  cin >> identificador >> gen;
}

void Especie::escribir() const{
  cout << identificador << ' ' << gen;
}
