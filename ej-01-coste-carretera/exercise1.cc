#include <iostream>

int main(){
	int metros(0);
	int resultado(0);
	int precio_metro(1624);
	std::cout << "Calculemos el coste de la carretera" << std::endl;
	std::cout << "Indique cuanto metros tiene la carretera" << std::endl;
	std::cin >> metros;
	resultado = metros * precio_metro;
	std::cout << "El precio total de la carretera es: " << resultado << " euros" << std::endl;
	return 0;
}
