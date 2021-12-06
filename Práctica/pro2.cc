/**
 @mainpage Programa principal de la Práctica 2020
*/

/** @file pro2.cc
    @brief Programa principal para el ejercicio <em>Práctica 2020</em>.
*/
#ifndef NO_DIAGRAM
#include <iostream>
#endif
#include "Especie.hh"
#include "Cjt_clusters.hh"
using namespace std;

int main(){
  int k;
  cin >> k;

  Cjt_especies cjtesp;
  Cjt_clusters cjtclust;

  cjtesp.guardar_kmer(k);


  string consulta, ident1, ident2;

  while (cin >> consulta){

    //1. El error lo hace el void
    if (consulta == "crea_especie"){
      Especie esp;
      esp.leer();
      cjtesp.crea_especie(esp);
    }

    //6
    else if (consulta == "lee_cjt_especies"){
      cin >> n;
      cjtesp.lee_cjt_especies(int n);
    }

    //2. El error lo hace el void
    else if (consulta == "obtener_gen"){
      cin >> ident1;
      cjtesp.obtener_gen(ident1);
    }

    //3
    else if (consulta == "distancia"){
      cin >> ident1 >> ident2;
      if (cjtesp.distancia(ident1, ident2) == -1){
        cout << "Un identificador de una de las especies no existe" << endl;
      }
    }

    //4. El error en el void
    else if (consulta == "elimina_especie"){
      cin >> ident1;
      cjtesp.elimina_especie(ident1);
    }

    //5
    else if (consulta == "existe_especie"){
      cin >> ident1;
      if (not cjtesp.existe_especie(ident1)){
        cout << "No existe esta especie" << endl;
      }
      else cout << "La especie existe" << endl;
    }

    //7
    else if (consulta == "imprime_cjt_especies"){
      cjtesp.imprime_cjt_especies();
    }

    //8
    else if (consulta == "tabla_distancias"){
      cjtesp.tabla_distancias();
    }

    //9
    else if (consulta == "inicializa_clusters"){
      cjtclust.inicializa_clusters(cjtesp);
    }

    //10
    else if (consulta == "ejecuta_paso_wpgma"){
      cjtclust.ejecuta_paso_wpgma();
    }

    //11. EL error se da en el void
    else if (consulta == "imprime_cluster"){
      cin >> ident1;
      cjtclust.imprime_cluster(ident1);
    }

    //12
    else if (consulta == "imprime_arbol_filogenetico"){
      cjtclust.imprime_arbol_filogenetico();
    }

    //13
    else if (consulta == "fin"){
      cout << "El programa se ha finalizado" << endl;
      return 0;
    }
  }
}
