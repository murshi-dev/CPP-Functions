/*In this programming example, the function larger is used to determine the largest number from a set of numbers. For the purpose of illustration, this program determines the largest number from a set of 10 numbers. 
Input A set of 10 numbers.
Output The largest of 10 numbers.
*/
#include <iostream>
using namespace std;
double larger(double x, double y);
int main()
{
	double num; //variable to hold the current number
	double max; //variable to hold the larger number
	int count; //loop control variable
	cout << "Enter 10 numbers." << endl;
	cin >> num; //Step 1
	max = num; //Step 1
	for (count = 1; count < 10; count++) //Step 2
	{
		cin >> num; //Step 2a
		max = larger(max, num); //Step 2b
	}
	cout << "The largest number is " << max
		<< endl; //Step 3
	system("pause>0");
}//end main
double larger(double x, double y)
{
	if (x >= y)
		return x;
	else
		return y;
}


