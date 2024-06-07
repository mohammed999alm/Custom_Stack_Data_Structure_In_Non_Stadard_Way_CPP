#pragma once
#include <iostream>
#include "clsMyQueue.h"


template <class T> 

class clsMyStack : public clsMyQueue <T>
{

private :

	using clsMyQueue<T>::front;
	using clsMyQueue<T>::back;

public : 

	void push(T value)
	{
		clsMyQueue<T>::_list.insertAtBeginning(value);
	}


	T top() 
	{
		return clsMyQueue<T>::front();

	}

	T bottom() 
	{
		return clsMyQueue<T>::back();

	}
};

