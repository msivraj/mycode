/* The system needs to prompt user for the number of guests that will attend the party. The user then needs
to input the number of guests. The system then needs to calculate then number of pizzas needed to feed the 
guests and output it the user. The system will then calculate the square inches of pizza necessary to feed the guests.
pi r squared= area 
The system will then take the number of squ ins and calculate how many squ ins that each guest will be able to 
eat. The system will then prompt the user to pay along with the added 10 percent tip by presenting the total 
price of the order.*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int numberOfGuests;
	cout << "How many guest will be attending your event?";
	cin >> numberOfGuests;
	
	int largePizzas = numberOfGuests / 7;
	int remainder1 = numberOfGuests % 7;
	int mediumPizzas = remainder1 / 3;
	int remainder2 = remainder1 % 3;
	int smallPizzas = remainder2;

	
if (numberOfGuests >= 7){
	cout << "Your order will consist of " << largePizzas << " large pizzas, " << mediumPizzas 
		<< " medium pizzas," "and" << smallPizzas << "small pizzas.";
	int radiusOfLargePizza = 10;
	int radiusOfMediumPizza = 8;
	int radiusOfSmallPizza = 6;
	double pi = 3.14159;
	cout << "The area your large pizza(s) will be" << pi*(pow(radiusOfLargePizza,2)) <<
		" square inches, with" << pi*(pow(radiusOfMediumPizza,2)) <<
		" square inches of medium pizza(s) and," << pi*(pow(radiusOfSmallPizza,2)) << "square inches of small pizza(s).";
}
else if (numberOfGuests >= 3){
	cout << "Your order will consist of " << mediumPizzas << "medium pizzas,and"
		<< smallPizzas << "small pizzas.";
}
else if (numberOfGuests > 0){
	cout << "Your order ll consist of " << smallPizzas << "small pizzas.";
}

system("pause");

return 0; 
}