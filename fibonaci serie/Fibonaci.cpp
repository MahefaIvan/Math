#include <iostream>

void Fibonaci(int limit){
	
	 long long int previous_number = 0;
	 long long int second_number = 1;
	 long long int next_number;
	 
	for(int iterator = 0; iterator <= limit; iterator++){
	
		next_number = previous_number + second_number;

		std::cout << next_number << std::endl;

		previous_number = second_number ;
		second_number = next_number ;

	}
}

int main(){
	
	int limit;

	std::cout << "enter a number" << std::endl;
	std::cin >> limit;

	Fibonaci(limit);
	return 0;
	
}
