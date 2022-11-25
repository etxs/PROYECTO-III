#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class Grafo
{
private:

	/* Grafo de 4 filas y 9 columnas ( 5 vertices)
	* Estructura de mi grafo
	* (0 cuando no se conectan, 1 cuando si lo hacen)
	*   0 1 2 3 4 5 6 7 8
	*   -------------------
	* 0 0 A 0 0 0 0 0 0 0
	* 1 0 0 B C 0 0 0 0 0
	* 2 0 0 0 0 0 D E 0 0
	* 3 0 0 0 0 0 0 0 F G
	*/

	char grafo[4][9] = {
	{'0', 'A', '0', '0', '0', '0' ,'0' ,'0', '0'},
	{'0', '0', 'B', 'C', '0', '0', '0', '0', '0'},
	{'0', '0', '0', '0', 'D', 'E', '0', '0', '0'},
	{'0', '0', '0', '0', '0', '0', 'F', 'G', '0'} };

	char opc;

	Texture photo1, photo2, photo3, photo4, photo5, photo6, photo7, photo8, photo9, photo10, photo11, photo12, photo13, photo14, photo15, photo16, photo17, photo18, photo19, photo20, photo21, photo22, photo23, photo24, photo25, photo26, photo27, photo28, photo29, photo30, photo31, photo32, photo33, photo34, photo35, photo36, photo37, photo38, photo39,photo40,photo41;

public:
	Grafo();
	// Metodo que muestra la histroria
	void inicioNovela();

	void subirfotos();
};