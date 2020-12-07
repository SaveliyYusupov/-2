#include<iostream>
using namespace std;
class Cl 
{
private:
	int element;
	
public: 
	void get()
	{
		cout << "Enter the value of the element: ";
		cin >> element;
	}
	void print() 
	{
		cout << element;
	}
	Cl& ret_el(Cl* array, int index) 
	{
		return array[index];
	}
	Cl& operator++ () 
	{
		this->element++;
		return *this;
	}
	friend void show_the_array(Cl* arr, int size);
};
void show_the_array(Cl* array, int size) 
{
	cout << "The array: "<<endl;
	for (int i = 0; i < size; i++) 
	{
		array[i].print() ;
		cout << endl;
	}
}
int main() 
{
	Cl element1;
	element1.get();
	Cl element2;
	element2.get();
	Cl element3;
	element3.get();
	Cl element4;
	element4.get();
	const int size = 4;
	Cl array[size];
	array[0] = element1;
	array[1] = element2;
	array[2] = element3;
	array[3] = element4;
	show_the_array(array, size);	
	int numb;
	cout << "Enter the number of the element (1-4): ";
	cin >> numb;
	numb--;
	++array[numb].ret_el(array, numb);
	show_the_array(array, size);
	system("pause");
	return 0;
}

