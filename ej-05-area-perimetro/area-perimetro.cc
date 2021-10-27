#include <iostream>

int main(){
	
	int lado{0};

	std::cout << "--Calculo de area y perimetro de un cuadrado--" << std::endl;
	 
	std::cout << "Itroduzca el lado del cuadrado: ";

	std::cin >> lado;

	std::cout << "Area = " << lado*lado << std::endl << "Perímetro = " << lado*4 ;

	return 0;

}
