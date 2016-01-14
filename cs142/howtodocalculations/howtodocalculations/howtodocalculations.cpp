/* The system needs to prompt user for the number of guests that will attend the party. The user then needs
to input the number of guests. The system then needs to calculate then number of pizzas needed to feed the 
guests and output it the user. The system will then calculate the square inches of pizza necessary to feed the guests.
pi r squared= area 
The system will then take the number of squ ins and calculate how many squ ins that each guest will be able to 
eat. The system will then prompt the user to pay along with the added 10 percent tip by presenting the total 
price of the order.*/

#include <iostream>

using namespace std;

int main()
{
	int number_of_guests;
	cout << "How many guest will be attending your event?";
cin >> number_of_guests;
if ("number_of_guests > 7"){
	cout << "Your order will consist of " << number_of_guests /7 << " large pizzas, " << number_of_guests /7 /3 
		<< " medium pizzas," "and" <<number_of_guests /7 /3 /1<< "small pizzas.";
}
else if ("number_of_guests < 7"){
	cout << "Your order will consist of " << number_of_guests % 3 << "medium pizzas,and"
		<< number_of_guests % 3 % 1 << "small pizzas.";
}
/*else ("number_of_guests > 3"){
	cout << "Your order will consist of " << number_of_guests / 1 << "small pizzas."
}/**/
system("pause");

return 0; 
}