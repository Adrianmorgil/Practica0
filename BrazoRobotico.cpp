#include "BrazoRobotico.h"

BrazoRobotico::BrazoRobotico(double x_, double y_, double z_, bool objeto_){
		double x = x_;
		double y = y_;
		double z = z_;
		bool objeto = objeto_;
		
}

double BrazoRobotico::getX(){
		return x;
}

double BrazoRobotico::getY(){
		return y;
}

double BrazoRobotico::getZ (){
		return z;
}

bool BrazoRobotico::getObjeto(){
		return objeto;
}


void BrazoRobotico::coger(bool objeto){
		objeto = true;
}

void BrazoRobotico::soltar(bool objeto){
		objeto = false;
}

void BrazoRobotico::mover(double newx, double newy, double newz){
		x = newx;
		y = newy;
		z = newz;
}

