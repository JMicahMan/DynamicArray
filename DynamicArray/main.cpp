#include "DynicArry.h"

int main()
{
	DynamicArray<int>* testArray = new DynamicArray<int>();

	
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
	testArray->print();
	testArray->clear();
	testArray->remove();
	testArray->print();
	testArray->clear();
	testArray->sort();
	testArray->print();





	
}