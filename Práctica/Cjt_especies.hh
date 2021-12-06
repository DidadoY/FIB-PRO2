/** @file Cjt_especies.hh
    @brief Especificación de la clase Cjt_especies
*/

#ifndef CJT_ESP_HH
#define CJT_ESP_HH
#include "Especie.hh"
#include <map>
using namespace std;

/** @class Cjt_especies
    @brief Representa un conjunto de especies

    Dispone de dos maps, uno que sirve para enlazar una especie con el string y otro que sirve para almacenar la distancia

  */
class Cjt_especies {

private:

  //Representa un conjunto de especies
  static int kmer;
  map<string, Especie> map_cjt;
  map<string, double> aux;
  map<string, map<string,double>> map_distancia;

public:
  //Constructoras
    /** @brief Creadora por defecto.

      Se ejecuta automáticamente al declarar un conjunto de especies.
      \pre <em>cierto</em>
      \post El resultado es un conjunto de especies
  */
  Cjt_especies();

  //Modificadoras

  /** @brief Guardar la k

      \pre El valor de la k introducida por el usuario
      \post Guardamos la k en el kmer
  */
  void guardar_kmer(int k);

/** @brief Booleano para saber si exite una especie

    \pre Un identificador introducido por el usuario
    \post El resultado es true si esxiste ese identificador y false si no existe
*/
  bool existe_especie(const string identificador);
/** @brief Añade una especie al conjunto

    \pre Una especie con identificador y gen
    \post Se añade al conjunto de especies la especie
*/
  void crea_especie(Especie& esp);
/** @brief Elimina una especie dado su identificador

    \pre Un identificador
    \post Elimina la especie del conjunto
*/
  void elimina_especie(string &idenficador);
/** @brief Obtención de gen mediante la búsqueda de un identificador

    \pre Un identificador
    \post Imprime el gen asociado al identificador
*/
  string obtener_gen(const string identificador);
/** @brief Distancia entre dos especies del conjunto

    \pre Dos identificadores
    \post Devuelve la distancia entre ambas especies del conjunto
*/
  double distancia(string a, string b);

  /** @brief Tabla de distancias

      \pre <em>cierto</em>
      \post Imprime una tabla de distancias
  */
	void tabla_distancias();


  //Lectura y escritura
  /** @brief Lecrura de especies

      \pre <em>cierto</em>
      \post Lee el conjunto de especies y los guarda en el conjunto
  */
  void lee_cjt_especies(int n);
  /** @brief Escritura de especies

      \pre <em>cierto</em>
      \post Imprime por pantalla el conjunto de especies
  */
  void imprime_cjt_especies() const;

};
#endif
