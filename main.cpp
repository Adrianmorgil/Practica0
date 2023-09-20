#include <iostream>
#include "BrazoRobotico.h"

int main(){
	BrazoRobotico brazo(12.5, 20.6, 31.12, false);
	brazo.mover(6.15, 5.2, 16);
	std::cout << "El brazo se ha movido correctamente" << std::endl;
	brazo.coger(true);
	std::cout << "Se cogio el objeto correctamente" << std::endl; 
}
