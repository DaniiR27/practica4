#include <iostream>

int main(){
	float euros(0);
	float cantidad_yenes(0);
		
	std::cout << "Euros a Yenes" <<std::endl;
	std::cout << "Introduzca la cantidad en euros" <<std::endl;
	std::cin >> euros;
	cantidad_yenes = euros / 0.0075;
	std::cout << "Cantidad en yenes: " << cantidad_yenes;

}
