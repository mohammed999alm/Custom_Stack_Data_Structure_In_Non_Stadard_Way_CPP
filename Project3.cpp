#include <iostream>
#include "clsMyStack.h"
using namespace std;

int main() 
{

	clsMyStack<int> stack;

	stack.push(10);
	stack.push(20);
	stack.push(30);
	stack.push(40);
	stack.push(50);
	stack.push(60);


	cout << "Stack Items : \n\n";
	stack.print("\n\n");

	cout << "Stack size() : " << stack.size() << endl << endl;
	cout << "Stack front() : " << stack.top() << endl << endl;
	cout << "Stack back() : " << stack.bottom() << endl << endl;

	cout << "\nAfter Preform Stack pop() : \n";
	stack.pop();
	stack.print("\n\n");

	cout << "Stack getItem(3) : " << stack.getItem(3) << endl << endl;

	cout << "\nAfter Preform Stack reverse() : \n";
	stack.reverse();
	stack.print("\n\n");


	cout << "\nAfter Perfrom Stack updateItem(3) : \n";
	stack.updateItem(3, 1999);
	stack.print("\n\n");


	//It's not Normal For Stack To Do That It's Just For Learning Purpose.
	//cout << "\nAfter Perfrom Stack insertAfter() insert 950 After item 3 : \n";
	//stack.insertAfter(3, 950);
	//stack.print("\n\n");

	//cout << "\nAfter Perfrom Stack insertAtFront() insert 1000: \n";
	//stack.insertAtFront(1000);
	//stack.print("\n\n");

	//cout << "\nAfter Perfrom Stack insertAtBack() insert 3000: \n";
	//stack.insertAtBack(3000);
	//stack.print("\n\n");

	//cout << "\nAfter Perfrom Stack clear() : \n";
	//stack.clear();
	//stack.print("\n\n");


	system("pause > 0");

	return 0;
}