#include "Cjt_especies.hh"
using namespace std;

Cjt_especies::Cjt_especies(){
  map<string, Especie> map_cjt;
  map<string, double> aux;
  map<string, map<string,double>> map_distancia;
}

void Cjt_especies::guardar_kmer(int k){
  kmer = k;
}

bool Cjt_especies::existe_especie(string a){
  map<string, Especie>::iterator it = map_cjt.find(a);
  if (it!= map_cjt.end()) return true;
  else return false;
}

void Cjt_especies::crea_especie(const Especie &esp){
  map_cjt.insert(make_pair(esp.consultar_identificador(), esp));
}

void Cjt_especies::elimina_especie(string &identificador){
  map<string, Especie>::iterator it = map_cjt.find(identificador);
  if (it != map_cjt.end()) map_cjt.erase(it);
}

string Cjt_especies::obtener_gen(const string identificador){
  map<string, Especie>::iterator it = map_cjt.find(identificador);
  if (it!= map_cjt.end()) return it->second.gen;
}

void Cjt_especies::tabla_distancias(){
  for (map<string, map<string, double>>::const_iterator it = map_distancia.begin(); it!= map_distancia.end(); ++it){
    cout << it->first << ': '
    for (map<string, double>::const_iterator it2 = aux.begin(); it2 != aux.end(); ++it2){
      cout << it2->first << ' (' <<  it2->second << ')';
    }
  }
  cout << endl;
}

void calcula_distancia(){
  }
}

void Cjt_especies::lee_cjt_especies(int n) {
  Especie esp;
  for (int i = 0; i < n; ++i){
    esp.llegir();
    map_cjt.insert(make_pair(esp.consultar_identificador(), esp));
  }
}

void Cjt_especies::imprime_cjt_especies() const{
  for (map<string, Especie>::const_iterator it = map_cjt.begin(); it != map_cjt.end(); ++it){
    cout << it->first << it->second.gen << endl;
  }
}
