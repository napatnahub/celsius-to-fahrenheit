#include <iostream>
using namespace std;
int main()
{
	float celsius;
	float fahrenheit;
	cout << "Enter Celsius temperature: ";
	cin >> celsius;
	cout << "fahrenheit: "<< celsius* 1.8 + 32.0 <<endl;
	cout << "Now weather in Thailand is: " << ((celsius * 1.8 + 32.0 > 68) ? "hot" : "cool");
		return(0);
}
	
		