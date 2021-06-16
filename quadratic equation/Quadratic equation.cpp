#include <iostream>
#include <cmath>

void quadraticequation(int variable_A, int variable_B, int variable_C){
	
	int delta;

	delta = (variable_B * variable_B) - 4 * variable_A * variable_C;
	std:: cout << delta << std::endl;
	
	if(delta < 0)

		std::cout << "there is no real solution for this equation";

	if(delta == 0){

		int solution = -(variable_B) / 2 * variable_A;
		std::cout << "there is one unique solution to this equation which is :" << solution;

	}else{
		
		int solution_1, solution_2;

		solution_1 = -(variable_B) - sqrt(delta) / 2 * variable_A;
		solution_2 = -(variable_B) + sqrt(delta)/ 2 * variable_A;
		
		std:: cout << "there is 2 solution to this equation:"<<"solution 1:"<<solution_1 << " solution 2:"<< solution_2;
	}
	
}

int main(){
	
	int variable_A,variable_B,variable_C;
	
	std:: cout << "enter the value of A,B and C of your equation" << std::endl;
	std:: cin >> variable_A; 
	std:: cin >> variable_B;
	std:: cin >> variable_C;

	quadraticequation(variable_A, variable_B, variable_C);
	return 0;
}
