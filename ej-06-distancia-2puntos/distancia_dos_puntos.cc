#include <iostream>
#include <cmath>

int main(){

	float coordenadas_a[3];
	float coordenadas_b[3];
	const char indicacion[3] = {'x','y','z'};
	float distancia_ab{0};


	std::cout << "--Calculo de distancia entre dos puntos--" << std::endl;

	for(int i = 0; i < 3 ; i++){
		
		std::cout << "Introduzca la coordenada " << indicacion[i] << " de A" << std::endl;
		std::cin >> coordenadas_a[i];
		std::cout << "Introduzca la coordenada " << indicacion[i] << " de B" << std::endl;
		std::cin >> coordenadas_b[i];	
	}

	distancia_ab = sqrt(std::pow((coordenadas_b[0]-coordenadas_a[0]),2) + std::pow((coordenadas_b[1]-coordenadas_a[1]),2) + std::pow((coordenadas_b[2]-coordenadas_a[2]),2));

	std::cout << "La distancia A>B es: "  << distancia_ab << std::endl;

	return 0;
}