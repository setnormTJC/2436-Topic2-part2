#include<iostream> 


//#include<map>

#include<exception>

#include<array> //STATIC (unchanging number of elements)


#include<vector> //DYNAMIC
using namespace std; 

//class LinkedListADT
//{
//	virtual void functionName() = 0; 
//	//The abstract data type can enforce the existence
//	//  of certain functionality in its child class
//};
//
//class LinkedListConcrete : public LinkedListADT
//{
//	void functionName() override
//	{
//		//insert def
//	}
//};

template<typename T, int elementCount> 
class MyArray
{
private: 
	T data[elementCount];
	
public: 
	MyArray() //default constructor (takes no inputs/arguments)
	{
		for (int i = 0; i < elementCount; i++)
		{
			data[i] = i; 
		}
	}

	void print()
	{
		for (int i = 0; i < elementCount; i++)
		{
			cout << data[i] << " ";
		}
		cout << "\n\n";
	}

	T getBack()
	{
		return data[elementCount - 1];
	}
};

int main()
{
	//std::map<int, char>  //heterogeneity
	////std::array<Car, int, string>
	////LinkedListADT llAdt; 
	//LinkedListConcrete ll; 
	//for (auto& num : numsVect)
	vector<int> numsVect; 
	array<int, 3> numsArray = { 0, 11, 22 };

	//numsVect.

	//int back = numsArray.back();
	//cout << numsArray.back() << endl; 
	//cout << numsArray.at(453) << endl; 
	//cout << numsArray[453] << endl; 

	//int cArray[3] = { 0, 11, 22 }; //C-style array
	//cout << cArray[453] << endl; 
	
	MyArray<int, 3> ma1; 
	ma1.print(); 
	
	cout << ma1.getBack() << endl; 
	
	return 0; 
}