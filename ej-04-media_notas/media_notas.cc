#include <iostream>

int main(){

	std::cout << "--Calculo de media--" << std::endl;
	float suma_notas{0};
	float nota{0};
	
	for(int i = 1; i < 4; i++){
	
		std::cout << "Introduzca la nota del alumno " << i << std::endl;
		std::cin >> nota;
		if(nota >= 0 &&  nota <= 10){
			
			suma_notas = suma_notas + nota;

		}else{
			std::cout << "La nota debe estar entre 0 y 10" <<  std::endl;
			i--;
		}
 
			
	}
	
	std::cout << "La nota media es: " << suma_notas/3 << std::endl;
}
