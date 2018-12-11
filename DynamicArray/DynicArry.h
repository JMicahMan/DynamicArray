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
	T arry[];

};

template<typename T>
inline bool DynicArry<T>::isEmpty() const
{
	if (SizeFilled == 0)
	{
		return true;
	}

	else
	{
		return false;
	}//ytuu
}


template<typename T>
inline void DynicArry<T>::insert(const T &)
{
	if (ArySize > SizeFilled)
	{

	}
}

template<typename T>
inline void DynicArry<T>::remove(const T &)
{

}

template<typename T>
inline void DynicArry<T>::sort(const T &)
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

