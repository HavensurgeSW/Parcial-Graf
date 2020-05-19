#include "ejer1.h"

namespace parcial {

	void mostrarCreditos() {
		cout << "Libreria creada por Matias Karplus" << endl;
		cout << "Hecho en Visual Studio Studio Community 2019 16.5.4" << endl;
	}

	float diferencia(float num1, float num2) {
		
		float may;
		float men;
	
		if (num1 >= num2) {
			may = num1;
			men = num2;
		}
		else {
			may = num2;
			men = num1;
		}

		return may - men;
	}



}