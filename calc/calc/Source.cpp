# include <iostream>
#include<string>

using namespace std;
/*The function gets two numbers and op code and return the result if the op code is correct.
input: 2 numbers and op code
output: result if the op code is correct
throw exeption: uncorrect opcode or tries to divide by 0.
*/
double calculator(double num1, char op, double num2)
{
	double result = 0;
	switch (op)
	{
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
		case 'x':
		case 'X':
			result = num1 * num2;
			break;
		case '/':
		case ':':
			if (num2 != 0)
			{
				result = num1 / num2;
			}
			else
			{
				throw string("Can't divide by 0.");
			}
			break;
		default:
			throw string("Error opcode");
			break;
	}
	return result;
}


int main()
{
	double num1 = 0, num2 = 0;
	char op = '\n';
	
	cout << "Enter an exercise: ";
	cin >> num1 >> op >> num2;
	try {
		cout << calculator(num1, op, num2) << endl;
	}
	catch (string e)
	{
		cout<<e<<endl;
	}
	return 0;
}