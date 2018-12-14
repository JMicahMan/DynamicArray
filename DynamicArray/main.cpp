#include "DynicArry.h"

int main()
{
	DynamicArray<int>* testArray = new DynamicArray<int>();

	//insert adds a value to the array right after the previous value at the end of the array
	// the resualt should be an array with values 5 10 15 4 4 9 4 115 14 35 84 90

	testArray->insert(5);
	testArray->insert(10);
	testArray->insert(15);
	testArray->insert(4);
	testArray->insert(4);
	testArray->insert(9);
	testArray->insert(4);
	testArray->insert(115);
	testArray->insert(14);
	testArray->insert(35);
	testArray->insert(84);
	testArray->insert(90);
	//insert works as intended

	testArray->print();
	// prints the array to console for debugging

	testArray->clear();
	// clears the previously printed array for easier debugging

	// remove should remove the the value at the end of the array
	// the resault should be an array with values 5 10 15 4 4 9 4 115 14 35 84

	testArray->remove();
	// remove works as intended
	testArray->print();
	testArray->clear();

	// sort should sort the array by least to greatest numerical values
	// the resault should be an array with values 4 4 4 5 9 10 14 15 35 84 115
	testArray->sort();
	// sort works as intended
	testArray->print();
	
	// search should find the numerical value in the array that matches the number in the parentheses 
	testArray->search(84);
	// Search works as intended






	
}
