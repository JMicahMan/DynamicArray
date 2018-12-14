#pragma once
#include <iostream>

template <class T>
class DynamicArray
{
public:

	DynamicArray();
	~DynamicArray();

	bool isEmpty() const;
	void insert(const T&);
	void remove();
	void sort();
	void print();
	void clear();
	bool search(const T&);

private:

	int ArySize;
	int SizeFilled;
	T* arry;

};

template<typename T>
DynamicArray<T>::DynamicArray()
{
	ArySize = 10;
	arry = new T[ArySize];
	SizeFilled = 0;
	 
}

template<typename T>
bool DynamicArray<T>::isEmpty() const
{
	if (SizeFilled == 0)
	{
		return true;
	}

	else
	{
		return false;
	}
}


template<typename T>
void DynamicArray<T>::insert(const T & other)
{
	if (SizeFilled == 0)
	{
		arry[SizeFilled] = other;
		SizeFilled = SizeFilled + 1;
	}

	else if (SizeFilled > 0 && ArySize > SizeFilled)
	{
		arry[SizeFilled] = other;
		SizeFilled = SizeFilled + 1;
	}
	
	else
	{
		ArySize = ArySize * 2;
		T* temp = new T[ArySize];
		for (int i = 0; i < SizeFilled; i++)
		{
			temp[i] = arry[i];
			
		}

		delete arry;
		arry = temp;

		arry[SizeFilled] = other;
		SizeFilled = SizeFilled + 1;
	}
}

template<typename T>
void DynamicArray<T>::remove()
{
	if (isEmpty() == false)
	{
		SizeFilled = SizeFilled - 1;
	}
}

template<typename T>
void DynamicArray<T>::sort()
{
	for (int i = 0; i < (SizeFilled - 1); i++)
	{
		for (int j = 0; j < (SizeFilled - 1); j++)
		{
			if (arry[j] > arry[j + 1])
			{
				int temp = arry[j];
				arry[j] = arry[j + 1];
				arry[j + 1] = temp;
			}
		}
	}
}

template<class T>
void DynamicArray<T>::print()
{
	for (int i = 0; i < SizeFilled; i++)
	{
		std::cout << (arry[i])<< " ";
	}
}

template<class T>
void DynamicArray<T>::clear()
{
	system("cls");
}

template<class T>
bool DynamicArray<T>::search(const T & other)
{
	for (int i = 0; i < SizeFilled; i++)
	{
		if (arry[i] == other)
		{
			return true;
		}
	}
	return false;
}


