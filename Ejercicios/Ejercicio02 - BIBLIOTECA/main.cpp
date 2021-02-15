#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;
string libros [39][3];

void cargarLibros() {

	srand (time(NULL));

    libros [ 0 ] [ 0 ] = " Algoritmos " ; libros [ 0 ] [ 1 ] = " Algoritmos y Programacion (Guia para docentes) ", libros [ 0 ] [ 2] = "Autor" ;
	libros [ 1 ] [ 0 ] = " Algoritmos " ; libros [ 1 ] [ 1 ] = " Apuntes de Algoritmos y Estructuras de Datos " , libros [ 1 ] [ 2] = " James ";
	libros [ 2 ] [ 0 ] = " Algoritmos " ; libros [ 2 ] [ 1 ] = " Breves Notas sobre Análisis de Algoritmos " ; libros [ 2 ] [ 2 ] = " Juan ";
	libros [ 3 ] [ 0 ] = " Algoritmos " ; libros [ 3 ] [ 1 ] = " Fundamentos de Informatica y Programacion " ; libros [ 3 ] [ 2 ] = " Carlos ";
	libros [ 4 ] [ 0 ] = " Algoritmos " ; libros [ 4 ] [ 1 ] = " Temas selectos de estructuras de datos " ; libros [ 4 ] [ 2 ] = " Javier ";
	libros [ 5 ] [ 0 ] = " Algoritmos " ; libros [ 5 ] [ 1 ] = " Teoria sintactico-gramatical de objetos " ; libros [ 5 ] [ 2 ] = " Gladys ";
	libros [ 6 ] [ 0 ] = " Base de Datos " ; libros [ 6 ] [ 1 ] = " Apuntes de Base de Datos 1 " ; libros [ 6 ] [ 2] = " Cecilia ";
	libros [ 7 ] [ 0 ] = " Base de Datos " ; libros [ 7 ] [ 1 ] = " Base de Datos (2005) " ; libros [ 7 ] [ 2 ] = " Autor ";
	libros [ 8 ] [ 0 ] = " Base de Datos " ; libros [ 8 ] [ 1 ] = " Base de Datos (2011) " ; libros [ 8 ] [ 2 ] = " Maribel ";
	libros [ 9 ] [ 0 ] = " Base de Datos " ; libros [ 9 ] [ 1 ] = " Base de Datos Avanzadas (2013) " ; libros [ 9 ] [ 2 ] = " Kenneth ";
	libros [ 10 ] [ 0 ] = " Base de Datos " ; libros [ 10 ] [ 1 ] = " Diseño Conceptual de Bases de Datos " ; libros [ 10 ] [ 2 ] = " Mirna ";
	libros [ 11 ] [ 0 ] = " Ciencia Computacional " ; libros [ 11 ] [ 1 ] = " Breves Notas sobre Automatas y Lenguajes " ; libros [ 11 ] [ 2 ] = " Sara ";
	libros [ 12 ] [ 0 ] = " Ciencia Computacional " ; libros [ 12 ] [ 1 ] = " Breves Notas sobre Teoria de la Computación " ; libros [ 12 ] [ 2 ] = " Cindy ";
	libros [ 13 ] [ 0 ] = " Metodologias de desarrollo de software " ; libros [ 13 ] [ 1 ] = " Compendio de Ingenieria del Software " ; libros [ 13 ] [ 2 ] = " Maria ";
	libros [ 14 ] [ 0 ] = " Metodologias de desarrollo de software " ; libros [ 14 ] [ 1 ] = " Diseno agil con TDD " ; libros [ 14] [ 2 ] = " Mabel ";
	libros [ 15 ] [ 0 ] = " Metodologias de desarrollo de software " ; libros [ 15 ] [ 1 ] = " Ingeniería de Software: Una Guía para Crear Sistemas de Información " ; libros [ 15 ] [ 2 ] = " Autor";
	libros [ 16 ] [ 0 ] = " Metodologias de desarrollo de software " ; libros [ 16 ] [ 1 ] = " Scrum & Extreme Programming (para programadores) " ; libros [ 16 ] [ 2 ] = " Autor ";
	libros [ 17 ] [ 0 ] = " Metodologias de desarrollo de software " ; libros [ 17 ] [ 1 ] = " Scrum y XP desde las trincheras " ; libros [ 17 ] [ 2 ] = " Autor ";
	libros [ 18 ] [ 0 ] = " Miscelaneos " ; libros [ 18 ] [ 1 ] = " 97 cosas que todo programador deberia saber " ; libros [ 18 ] [ 2 ] = " Autor ";
	libros [ 19 ] [ 0 ] = " Miscelaneos " ; libros [ 19 ] [ 1 ] = " Docker " ; libros [ 19 ] [ 2 ] = " Autor ";
	libros [ 20 ] [ 0 ] = " Miscelaneos " ; libros [ 20 ] [ 1 ] = " El camino a un mejor programador " ; libros [ 20 ] [ 2 ] = " Autor ";
	libros [ 21 ] [ 0 ] = " Miscelaneos " ; libros [ 21 ] [ 1 ] = " Introduccion a Docker " ; libros [ 21 ] [ 2 ] = " Autor ";
	libros [ 22 ] [ 0 ] = " Miscelaneos " ; libros [ 22 ] [ 1 ] = " Programación de videojuegos SDL " ; libros [ 22 ] [ 2 ] = " Autor ";
	libros [ 23 ] [ 0 ] = " PHP " ; libros [ 23 ] [ 1 ] = " Manual de estudio introductorio al lenguaje PHP procedimental " ; libros [ 23 ] [ 2 ] = " Autor ";
	libros [ 24 ] [ 0 ] = " PHP " ; libros [ 24 ] [ 1 ] = " PHP y Programación orientada a objetos " ; libros [ 24 ] [ 2 ] = " Autor ";
	libros [ 25 ] [ 0 ] = " PHP " ; libros [ 25 ] [ 1 ] = " POO y MVC en PHP " ; libros [ 25 ] [ 2 ] = " Autor ";
	libros [ 26 ] [ 0 ] = " PHP " ; libros [ 26 ] [ 1 ] = " Silex, el manual oficial " ; libros [ 26 ] [ 2 ] = " Autor ";
	libros [ 27 ] [ 0 ] = " PHP " ; libros [ 27 ] [ 1 ] = " Symfony 1.4, la guia definitiva " ; libros [ 27 ] [ 2 ] = " Autor ";
	libros [ 28 ] [ 0 ] = " PHP " ; libros [ 28 ] [ 1 ] = " Symfony 2.4, el libro oficial " ; libros [ 28 ] [ 2 ] = " Autor ";
	libros [ 29 ] [ 0 ] = " Python " ; libros [ 29 ] [ 1 ] = " Aprenda a pensar como un programador (con Python) " ; libros [ 29 ] [ 2 ] = " Autor ";
	libros [ 30 ] [ 0 ] = " Python " ; libros [ 30 ] [ 1 ] = " Doma de Serpientes para Ninos: Aprendiendo a Programar con Python " ; libros [ 30 ] [ 2 ] = " Autor ";
	libros [ 31 ] [ 0 ] = " Python " ; libros [ 31 ] [ 1 ] = " Inmersión en Python " ; libros [ 31 ] [ 2 ] = " Autor ";
	libros [ 32 ] [ 0 ] = " Python " ; libros [ 32 ] [ 1 ] = " Inmersión en Python 3 " ; libros [ 32 ] [ 2 ] = " Autor ";
	libros [ 33 ] [ 0 ] = " Python " ; libros [ 33 ] [ 1 ] = " Introduccion a la programacion con Python " ; libros [ 33 ] [ 2 ] = " Autor ";
	libros [ 34 ] [ 0 ] = " Python " ; libros [ 34 ] [ 1 ] = " Introducción a Programando con Python " ; libros [ 34 ] [ 2 ] = " Autor ";
	libros [ 35 ] [ 0 ] = " Python " ; libros [ 35 ] [ 1 ] = " Python instantaneo (1999) " ; libros [ 35 ] [ 2 ] = " Autor ";
	libros [ 36 ] [ 0 ] = " Python " ; libros [ 36 ] [ 1 ] = " Python para ciencia e ingenieria " ; libros [ 36 ] [ 2 ] = " Autor ";
	libros [ 37 ] [ 0 ] = " Python " ; libros [ 37 ] [ 1 ] = " Python para principiantes " ; libros [ 37 ] [ 2 ] = " Autor ";
	libros [ 38 ] [ 0 ] = " Python " ; libros [ 38 ] [ 1 ] = " Python para todos " ; libros [ 38 ] [ 2 ] = " Autor ";
}

int main(int argc, char *argv[])
{
	cargarLibros();
    bool salir = false;
	int Opc;
	cout << "Ingrese 1 . si dese buscar por Libro o 2 . Por autor" << endl;
	cin >> Opc;
    if (Opc==1) {
	while (salir == false)
	{
        string buscar = "";
		
		system("cls");
		cout << "ingrese la descripcion del libro que busca:";
		cin >> buscar;
        
		
		// Realizar la busqueda
        for (int  i = 0; i < 39; i++)
		{
		    string libro = libros [i][1] ;
			string libroEnminuscula = libro;
            transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
			transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);
			
			if (libroEnminuscula.find(buscar) != string::npos){
				cout << "Libro encontrado: " << libro << endl;
				
				cout << "Tambien te sugerimos estos libros" << endl;
				int sugerencial1 = rand() % 38 + 1;
				int sugerencial2 = rand() % 38 + 1;
				int sugerencial3 = rand() % 38 + 1;
                
				cout << " Sugerencia 1: " << libros[sugerencial1][1] << endl;
				cout << " Sugerencia 2: " << libros[sugerencial2][1] << endl;
				cout << " Sugerencia 3: " << libros[sugerencial3][1] << endl;
				salir = true;
				break;
			}
		}
		
		if (salir == false) {
			char continuar == 'n';

			while (true)
			{
				system("cls");
				cout << "No se encontro el Libro que busca. Desea continuar? s/n";
				cin >> continuar;

				if (continuar == 's' || continuar == 'S')
				{
					break;
				} else if (continuar == 'n' || continuar == 'N'){
					salir == true;
					break;
				}
				
			}
			
		}
	}
	} else if (Opc==2) {
	//  realizar busqueda por autor
	// Realizar la busqueda
	    string buscar = "";
	    cout << "ingrese el nombre del autor al que busca:";
		cin >> buscar ;
        for (int  i = 0; i < 39; i++)
		{
		    string libro = libros [i][2] ;
			string libroEnminuscula = libro;
            transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
			transform(buscar .begin(), buscar .end(), buscar .begin(), ::tolower);
			
			if (libroEnminuscula.find(buscar ) != string::npos){
				cout << "Libro encontrado: " << libros[i][1]<< endl;
				
				cout << "Tambien te sugerimos estos libros" << endl;
				int sugerencial1 = rand() % 38 + 1;
				int sugerencial2 = rand() % 38 + 1;
				int sugerencial3 = rand() % 38 + 1;
                
				cout << " Sugerencia 1: " << libros[sugerencial1][1] << endl;
				cout << " Sugerencia 2: " << libros[sugerencial2][1] << endl;
				cout << " Sugerencia 3: " << libros[sugerencial3][1] << endl;
				salir = true;
				break;
			}
		}
		
		if (salir == false) {
			char continuar = 'n';

			while (true)
			{
				system("cls");
				cout << "No se encontro el Autor que busca. Desea continuar? s/n";
				cin >> continuar;

				if (continuar == 's' || continuar == 'S')
				{
					break;
				} else if (continuar == 'n' || continuar == 'N'){
					salir == true;
					break;
				}
				
			}
			
		}
	}
	system("pause");
	return 0;
}
