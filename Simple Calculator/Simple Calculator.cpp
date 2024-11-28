#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_4_Solution_36
// Simple Calculator.


enum enOperationType { Add = '+', Subtract = '-' , 
						Multiply = '*' , Divide = '/' };

float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;

	return Number;
}

enOperationType ReadOpType()
{
	char OT = '+';

	cout << "Please enter Operation Type (+, - , * , /) " << endl;
	cin >> OT;

	return (enOperationType)OT;
}

float Calculate(float Number1, float Number2, enOperationType OpType)
{
	switch (OpType)
	{
	case enOperationType::Add:
		return Number1 + Number2;
	case enOperationType::Subtract:
		return Number1 - Number2;
	case enOperationType::Multiply:
		return Number1 * Number2;
	case enOperationType::Divide:
		return Number1 / Number2;
	default:
		return Number1 + Number2;
	}

}


int main()
{
	float Number1 = ReadNumber("please Enter Number 1 ");
	float Number2 = ReadNumber("please Enter Number 2 ");

	enOperationType OpType = ReadOpType();
	cout << endl << "Result= " << Calculate(Number1, Number2, OpType) << endl;
}
