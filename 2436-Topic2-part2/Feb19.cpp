#include <iostream>
#include <string>
#include <vector>
#include<fstream> 
#include<iomanip>
#include<array>

#include<exception>

#include<cassert>

//global using directives: 
using std::cout;
using std::cin;
using std::endl;

using std::setw;
using std::left;


template<typename T, int elementCount>
class MyArray
{
	//member vars: 
private:
	T data[elementCount];

public:
	//member functions: 
	MyArray()
	{
		for (int i = 0; i < elementCount; i++)
		{
			data[i] = 42;
		}
	}
	//default constructors take no args.

	T getElementAtIndex(int index)
	{
		assert(index < elementCount); //234 > 3
		return data[index];

	} //end func def. 

	T operator [] (int index)
	{
		assert(index < elementCount); //234 > 3
		return data[index];
	}

	void print()
	{
		for (int i = 0; i < elementCount; i++)
		{
			cout << data[i] << " ";
		}
		cout << "\n\n";
	}
};


int main()
{
	//std::array<int, 3> threeNums; 
	//threeNums.

	//cout << threeNums.at(0) << endl; 
	//cout << threeNums[0] << endl;

	MyArray<int, 3> ma1; //"myArray1" object
	//ma1.print(); 

	//cout << ma1.getElementAtIndex(234) << endl; 
	cout << ma1[2] << endl; //requires OPERATOR overloading - hooray!
	//ma1[2] = 34567; //R-values, return by reference stuff ... 


	return 0;
}