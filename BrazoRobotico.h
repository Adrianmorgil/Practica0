#include <iostream.h>

using namespace;

Class BrazoRobotico {

	private:
		double x;
		double y;
		double z;
		bool object;

	public:
		BrazoRobotico(double x_, double y_, double z_, bool objeto_);
		double getX();
		double getY();
		double getZ();
		bool getObjeto();
		void coger(bool objeto);
		void soltar(bool objeto);
		void mover(double x, double y, double z);
}
