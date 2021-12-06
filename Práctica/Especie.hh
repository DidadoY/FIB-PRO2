/** @file Especie.hh
    @brief Especificación de la clase Especie
*/

#ifndef ESPECIE_HH
#define ESPECIE_HH
#ifndef NO_DIAGRAM
#include <string>
#include <map>
#endif
using namespace std;

/** @class Especie
    @brief Representa una especie

    Dispone de un gen y un map que guarda la cadena
    fraccionada de los trozos del gen que depende de la k introducida por el usuario

  */
class Especie {
private:
  string identificador, gen;
  map<string, int> vgen;  //almacena el gen ordenado partido en k grupos

public:
  /** @brief Creadora por defecto.

      Se ejecuta automáticamente al declarar una especie.
      \pre <em>cierto</em>
      \post El resultado es una especie sin identificador y gen
  */
  Especie();

    /** @brief Creadora con parámetros

    Permite declarar una especie con identificador y gen
    \pre <em>cierto</em>
    \post El resultado es una especie con identificador y gen
*/

  Especie(string identificador, string gen);
  /** @brief Destructora

    Permite destruir una especie existente

*/
  ~Especie();
 /** @brief Consulta el gen de la especie

   \pre el parámetro tiene gen
   \post el resultado es el gen de la especie
   */
  string consultar_gen() const;
	 /** @brief Consulta el identificador de la especie

   \pre el parámetro tiene identificador
   \post el resultado es el identificador de la especie
   */
  string consultar_identificador() const;

  double distancia(Especie& esp);

 /** @brief Lee especies

   \pre <em>cierto</em>
   \post el parámetro implícito pasa a tener los valores que el usuario ha establecido
   */
  void leer();

 /** @brief Escribe especies

   \pre <em>cierto</em>
   \post en el canal de salida se pueden ver el identificador y el gen de la especie solicitada
   */
  void escribir() const;

};
#endif
