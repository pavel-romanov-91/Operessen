#include<iostream>
using namespace std;

//#define ARITHMETICAL_OPERATORS
//#define ARITHMETICAL_OPERATORS // оператор присваивания
//#define INCREMENT_DECREMENT
//#define COMPOUND_ASSIGNMENTS
#define 

void main() 
{
	setlocale(LC_ALL, "Russian");
	//cout << "Hello operators" << endl;
#if defined ARITHMETICAL_OPERATORS Inactive Preprocessor Block
	// l-vaiue = r-value;
	//int a = 2; // в переменную а записываем значение 2
	//int b = 3; // перменная b присваиваем значение 3
	//int c = a + b; // переменная с присваивает выражение a+b
	//int a, b, c;
	//a = b = c = 0;
	//cout << a << "\t" << b << "\t" << c << endl;
#ifdef ARITHMETICAL_OPERATORS Inactive Preprocessor Block

#endif // ARITHMETICAL_OPERATORS


#endif

#ifdef COMPARISON_OPERATORS
	//Increment(++)
	//Decrement(--)
	int i = 0;
	++i;		//Prefix increment
	i++;		//Postfix increment
	--i;		//Prefix decrement
	i--;		//Postrix

	int j = i++;
	cout << i << endl;
	cout << j << endl;


#endif COMPOUD_ASSIGNMENTS
	int a = 2;
	int b = 3;
	a = a + b;
	cout << a << endl;



#endif //COMPOUD_ASSIGNMENTS


}
