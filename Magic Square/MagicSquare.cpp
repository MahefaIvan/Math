#include "MagicSquare.h"
#include <iostream>

MagicSquare::MagicSquare(int size){

    this -> sizeOfSquare = size;

    square = new int*[sizeOfSquare];
    for(int rowIterator = 0; rowIterator < sizeOfSquare; rowIterator++){

        square[rowIterator] = new int[sizeOfSquare];
        for(int columnIterator = 0; columnIterator < sizeOfSquare; columnIterator++){

            square[rowIterator][columnIterator] = 0;

        }

    }

}
void MagicSquare::generate(){

    int rowIterator = 0;
    int columnIterator = sizeOfSquare / 2;

    for(int iterator = 1; iterator <= sizeOfSquare * sizeOfSquare ; iterator++){
            	
    	if(rowIterator == -1 && columnIterator == sizeOfSquare){
                	
           	rowIterator = 1;
           	columnIterator = sizeOfSquare -1;
            	
		}else if(rowIterator < 0){

            rowIterator = sizeOfSquare - 1;

        }else if(columnIterator > sizeOfSquare - 1){

            columnIterator = 0;

        }else if(square[rowIterator][columnIterator] != 0 ){

            columnIterator--;
            rowIterator += 2;

        } 
                	
        square[rowIterator][columnIterator] = iterator;
	    rowIterator--;
	    columnIterator++;	

    }
}
void MagicSquare::printSelf(){

    for(int rowIterator = 0; rowIterator < sizeOfSquare ; rowIterator++){

        for(int columnIterator = 0; columnIterator < sizeOfSquare; columnIterator++){

            std::cout << "[ "<< square[rowIterator][columnIterator] << " ]" ;

        }
        std::cout << std::endl;

    }

}