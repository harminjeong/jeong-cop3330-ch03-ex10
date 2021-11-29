#include "std_lib_facilities.h"
int main()
{
	string operation;
	double val1 = 0;
	double val2 = 0;
	cout << "Enter an operation followed by two operands: ";
	cin >> operation >> val1 >> val2;
	double res = 0;
	if (operation=="+")
		res = val1+val2;
	else if (operation=="-")
		res = val1-val2;
	else if (operation=="*")
		res = val1*val2;
	else if (operation=="/") {
		if (val2==0) error("Cannot divide by 0.");
		res = val1/val2;
	}
	else error("Invalid operator! ",operation);
	cout << "The answer is: " << res <<'\n';
	
}
