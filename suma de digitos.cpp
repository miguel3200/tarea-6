#include<iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

int main() {

	int num, digits;
	int count = 0;
	int sum = 0, m;

	cout << "Enter any number : ";
	cin >> num;

	digits = num;

	while (digits != 0) {

		count++;

		digits /= 10;
	}
	
	while (num > 0)
	{
		m = num % 10;
		sum = sum + m;
		num = num / 10;
	}
		
	
	cout << "\n" << "Total digits: " << count << "\n";
	cout << "Sum is= " << sum << "\n";

	
}