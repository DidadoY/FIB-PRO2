/** @file Cjt_clusters.hh
    @brief Especificación de la clase Cjt_clusters
*/

#ifndef CJT_CLUSTERS_HH
#define CJT_CLUSTERS_HH
#ifndef NO_DIAGRAM
#include "BinTree.hh"
#endif
#include "Cjt_especies"
using namespace std;

/** @class Cjt_clusters
    @brief Representa un conjunto de clústers

    Dispone de una estructura map en el cuál se incluye el string identificaodr y un árbol con las correspondientes distancias

  */
class Cjt_clusters {
private:
  map<string,Bintree<pair<string,double>>> mtree;

public:
  /** @brief Creadora por defecto.

    Se ejecuta automáticamente al declarar un conjunto de clusters.
    \pre <em>cierto</em>
    \post El resultado es un conjunto de clusters
*/
  Cjt_clusters();
  /** @brief Impresión de clústers

    \pre El identificador de una especie
    \post Mediante una búsqueda del identificador imprime el cluster correspondiente
*/
  void imprime_cluster(const string& a);

  /** @brief Inicialización de clústers

    \pre El conjunto de especies/la especie asociada al clúster
    \post Imprime la tabla de distancias así como los clústers resultantes después de inicializarla
*/
  void inicializa_clusters(Cjt_especies& cjtesp);
  /** @brief Algoritmo WPGMA

    \pre <em>cierto</em>
    \post Ejecuta un paso del algoritmo wpgma imprimiéndolo por pantalla y guarda la tabla de distancias
*/
  void ejecuta_paso_wpgma();
  /** @brief Impresión final del árbol filogenético

    \pre <em>cierto</em>
    \post Imprime por pantalla el árbol filogenético resultante
*/
  void imprime_arbol_filogenetico() const;
};
#endif
