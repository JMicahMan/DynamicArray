#pragma once


template <typename T>
class DynicArry
{
public:
	DynicArry();
	~DynicArry();



	bool isEmpty() const;
	void insert(const T&);
	void remove(const T&);
	void sort(const T&);
	
	


private:

	int ArySize;
	int SizeFilled;
	T* arry;

};

template<typename T>
DynicArry<T>::DynicArry()
{
	ArySize = 10;
	arry = new T[ArySize];
	SizeFilled = 0;
	 
}

template<typename T>
bool DynicArry<T>::isEmpty() const
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
void DynicArry<T>::insert(const T & other)
{
	if (SizeFilled == 0;)
	{
		arry[SizeFilled] = other;
	}

	else if (SizeFilled > 0 && ArySize > SizeFilled)
	{
		arr[SizeFilled] = other;
		SizeFilled = SizeFilled + 1;
	}
	
	else
	{
		ArySize = ArySize * 2;
		T* temp = new T[ArySize];
		for (int i = 0; i < SizeFilled; i++);
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
void DynicArry<T>::remove(const T &)
{
	if (isEmpty() == false)
	{
		SizeFilled = SizeFilled - 1;
	}
}

template<typename T>
void DynicArry<T>::sort(const T &)
{
	for (int i = 0; i < (SizeFilled - 1); i++)
	{
		for (int j = 0; j < (SizeFilled - 2); i++)
		{
			if (arry[j] > arry[j + 1])
			{
				temp = arry[j];
				arry[j] = arry[j + 1];
				arry[j + 1] = temp;
			}
		}
	}
}

