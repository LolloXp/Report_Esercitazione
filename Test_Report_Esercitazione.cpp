/// @brief that checks if th maain program is correcy and also fins the errors
/// @author Lorenzo Pitzalis

#include <iostream>
#include "polygon.h"
#include "righttrapezoid.h"
#include "rectangle.h"
#include "rhombus.h"
/// dichiaro i puntatori a classi
Polygon* polygons[99];

/// variabili di debug
bool debug = false;
string var;

using namespace std;

int main() {

	/// dichiaro contatore per il puntatore
	int count = 0;

	/// inizio caso della creazione di un rettangolo

	/// caso parametri normali
	Rectangle* X1 = new Rectangle;
	X1->SetDim(5, 4);
	polygons[count] = X1;
	count++;

	/// breakpoint for debug
	if (debug == false) {
		cout << endl << flush;
		cout << "Punto di interruzione: premi un tasto per continuare" << endl;
		var = cin.get();
		cout << endl << flush;
		debug = true;
	}
	debug = false;

	/// caso parametri negativi
	Rectangle* X2 = new Rectangle;
	X2->SetDim(-5, -4);
	polygons[count] = X2;
	count++;

	/// breakpoint for debug
	if (debug == false) {
		cout << endl << flush;
		cout << "Punto di interruzione: premi un tasto per continuare" << endl;
		var = cin.get();
		cout << endl << flush;
		debug = true;
	}
	debug = false;

	/// caso parametri uguali a zero
	Rectangle* X3 = new Rectangle;
	X3->SetDim(0, 0);
	polygons[count] = X3;
	count++;

	/// breakpoint for debug
	if (debug == false) {
		cout << endl << flush;
		cout << "Punto di interruzione: premi un tasto per continuare" << endl;
		var = cin.get();
		cout << endl << flush;
		debug = true;
	}
	debug = false;

	/// fine caso rettangolo
	
	/// inizio caso della creazione di un rombo -> impossibile causa errore nella classe derivata

	/*	/// caso parametri normali
	Rhombus* Y = new Rhombus;
	Y->SetDim(8, 4);
	polygons[count] = Y;
	count++;
	/// caso parametri negativi
	Rhombus* Y = new Rhombus;
	Y->SetDim(-8, -4);
	polygons[count] = Y;
	count++;
	/// caso parametri uguali a zero
	Rhombus* Y = new Rhombus;
	Y->SetDim(0, 0);
	polygons[count] = Y;
	count++;*/

	/// fine caso rombo

	/// inizio caso della creazione di un trapezio rettangolo

	/// caso parametri normali
	RightTrap* Z1 = new RightTrap;
	Z1->SetDim(5, 4, 7);
	polygons[count] = Z1;
	count++;

	/// breakpoint for debug
	if (debug == false) {
		cout << endl << flush;
		cout << "Punto di interruzione: premi un tasto per continuare" << endl;
		var = cin.get();
		cout << endl << flush;
		debug = true;
	}
	debug = false;

	/// caso parametri negativi
	RightTrap* Z2 = new RightTrap;
	Z2->SetDim(-5, -4, -7);
	polygons[count] = Z2;
	count++;

	/// breakpoint for debug
	if (debug == false) {
		cout << endl << flush;
		cout << "Punto di interruzione: premi un tasto per continuare" << endl;
		var = cin.get();
		cout << endl << flush;
		debug = true;
	}
	debug = false;

	/// caso parametri uguali a zero
	RightTrap* Z3 = new RightTrap;
	Z3->SetDim(0, 0, 0);
	polygons[count] = Z3;
	count++;

	/// breakpoint for debug
	if (debug == false) {
		cout << endl << flush;
		cout << "Punto di interruzione: premi un tasto per continuare" << endl;
		var = cin.get();
		cout << endl << flush;
		debug = true;
	}
	debug = false;

	/// caso basi uguali 
	RightTrap* Z4 = new RightTrap;
	Z4->SetDim(5, 7, 7);
	polygons[count] = Z4;
	count++;

	/// fine caso trapezio rettangolo
	
		/// breakpoint for debug
	if (debug == false) {
		cout << endl << flush;
		cout << "Punto di interruzione: premi un tasto per continuare" << endl;
		var = cin.get();
		cout << endl << flush;
		debug = true;
	}
	debug = false;

	/// Inizio prova funzione Draw

	for (int i = 0; i <= count; i++)
		polygons[i]->Draw();

	/// Fine prova funzione Draw

	return 0;
}
