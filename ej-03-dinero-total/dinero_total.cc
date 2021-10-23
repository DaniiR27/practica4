#include <iostream>

int main(){
	
	int monedas[4] = {1,5,20,50};
	int billetes[7] = {5,10,20,50,100,200,500};
	float dinero_total{0};
	int numero_monedas{0};

	for(int i = 0;i < 4; i++){
		
		std::cout << "Indique cuantas monedas de " << monedas[i] << " centimos tiene -> " << std::endl;
		std::cin >> numero_monedas;
		dinero_total = dinero_total + numero_monedas *  (monedas[i] * 0.01);	
	}

	for(int i = 0;i < 7; i++){
		
		std::cout << "Indique cuantos billetes de " << billetes[i] << " euros tiene -> " << std::endl;
		std::cin >> numero_monedas;
		dinero_total = dinero_total + numero_monedas * billetes[i];	
	}



	std::cout << "Usted tiene " << dinero_total << " euros";

}
