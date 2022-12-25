#include <iostream>
using namespace std;

int main ()
{
	
	float num;
	
	cout << "Enter the student's score : ";
	cin >> num;
	
	if (num >= 86 && num <=100){
		cout << "Your grade is A";	
	}
	else if (num >= 76 && num <=85){
		cout << "Your grade is AB";
	}
	else if (num >= 66 && num <= 75){
		cout << "Your grade is B";
	}
	else if (num >= 61 && num <= 65){
		cout << "Your grade is BC";
	}
	else if (num >= 56 && num <=60){
		cout << "Your grade is C";
	}
	else if (num >= 41 && num <=55){
		cout << "Your grade is D";
	}
	else {
		cout << "Your grade is E";
	}
	
	return 0;
}

