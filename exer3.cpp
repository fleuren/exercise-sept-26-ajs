#include <iostream>
using namespace std;

int main(){
	//Code for the Odd or Even Task
/*cout << "Odd or even checker, please input a whole number." << endl;
	int x;
	cin >> x;

if (x % 2 == 0){
	cout << "The inputted number is even" << endl;
}else
	cout << "The inputted number is odd" << endl;
*/

//Number Checker - If negative, positive, or zero

/*cout << "Please input a number, can be negative positive, or zero, but it must be a whole number." << endl;
	int x;
	cin >> x;

if (x == 0){
	cout << "The number is equal to 0";
}else if (x > 0){
	cout << "The number is positive";
}else
	cout << "The number is negative";*/

//Profit or Loss Program
/*cout << "Input the purchase price, and sale price of an item, and the program will determine whether you made a profit or a loss" << endl;
	double purchase;
	double sale;
cout << "Please input the purchase price" << endl;
	cin >> purchase;
cout << "Please input the sale price" << endl;
	cin >> sale;
double x = sale-purchase;

if(x <= 0){
	cout << "You did not make a profit" << endl;
}else
	cout << "You made a profit" << endl;
cout << x << endl;
*/

//Shape (Polygon) Identifying Program
	cout << "Input the amout of sides that a shape has (ex: 5 for a pentagon)" << endl;
	cout << "This program can only determine shapes with no more than 10 sides, and no less than 3" << endl;

		int side;
		cin >> side;
if (side > 10){
	cout << "Input a Number from 3-10";
}else
		switch (side) {
	case 1:
	cout << "Input a number from 3-10";
	break;

	case 2:
	cout << "Input a number from 3-10";
	break;

	case 3:
	cout << "Triangle";
	break;

	case 4:
	cout << "Quadrilateral";
	break;

	case 5:
	cout << "Pentagon";
	break;

	case 6:
	cout << "Hexagon";
	break;

	case 7:
	cout << "Heptagon";
	break;

	case 8:
	cout << "Octagon";
	break;

	case 9:
	cout << "Nonagon";
	break;

	case 10:
	cout << "Decagon";
	break;

} 

	return 0;
}
