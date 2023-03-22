#include <iostream>
using namespace std;
void lengthConversions();
void massConversions();

// main function
int main() 
{
	int choice;
	do 
	{
	cout << "\n ********************** ";
	cout << "\n ** UNIT CONVERSIONS ** ";
	cout << "\n ********************** \n\n";

	cout << " 1. Length Conversions \n";
	cout << " 2. Mass Conversions \n";
	cout << " 3. Exit \n";

	cout << "\n Enter an option (1-3): ";
	cin >> choice;

		switch (choice)
		{
		case 1:
			lengthConversions(); 
			break;
			
		case 2:
			massConversions();
			break;
			
		case 3:
			break;
			
		default: 
			cout << "Invalid Input";
		}
	} while (choice != 3);
	return 0;
}	

// first function
void lengthConversions() 
{	
	int l;
	float km, mile, inch, foot, metre;

	cout << "\n  -------------------- ";
	cout << "\n | Length Conversions | ";
	cout << "\n  -------------------- \n\n";

	cout << " 1. Kilometers to Miles \n";
	cout << " 2. Miles to Kilometers \n";
	cout << " 3. Metres to Inches \n";
	cout << " 4. Inches to Metres \n";
	cout << " 5. Feet to Inches \n";
	cout << " 6. Inches to Feet \n";
	cout << "\n";

	cout << " Enter an option (1-6): ";
	cin >> l;
	
		switch (l) 
		{
			case 1:
				cout << "\n Entera the value in kilometres: ";
				cin >> km;
				
				mile = km / 1.60934;
				cout << "\n" << km << " kilometres are equal to " << mile << " miles";
				cout << "\n\n -------------------------------------------------------------------------- \n\n\n";
				break;
				
			case 2:
				cout << "\n Enter the value in miles: ";
				cin >> mile;
				
				km = mile * 1.60934;
				cout << "\n" << mile << " miles are equal to " << km << " kilometres ";
				cout << "\n\n -------------------------------------------------------------------------- \n\n\n\n";
				break;
			
			case 3:
				cout << "\n Enter the value in metres: ";
				cin >> metre;
				
				inch = metre * 39.3701;
				cout << "\n" << metre << " metres are equal to " << inch << " inches ";
				cout << "\n\n -------------------------------------------------------------------------- \n\n\n\n";
				break;
			
			case 4:
				cout << "\n Enter the value in inches: ";
				cin >> inch;
				
				metre = inch / 39.3701;
				cout << "\n" << inch << " inches are equal to " << metre << " metres ";
				cout << "\n\n -------------------------------------------------------------------------- \n\n\n\n";
				break;
			
			case 5:
				cout << "\n Enter the value in feet: ";
				cin >> foot;
				
				inch = foot * 12;
				cout << "\n" << foot << " feet are equal to " << inch << " inches ";
				cout << "\n\n -------------------------------------------------------------------------- \n\n\n\n";
				break;
			
			case 6:
				cout << "\n Enter the value in inches: ";
				cin >> inch;
				
				foot = inch / 12;
				cout << "\n" << inch << " inches are equal to " << foot << " feet ";
				cout << "\n\n -------------------------------------------------------------------------- \n\n\n\n";
				break;
			
			default: 
				cout << "\n Invalid Input";
		}
}

// second function
void massConversions()
{
	int m;
	float pound, kg, gram, tonne;

	cout << "\n  ------------------ ";
	cout << "\n | Mass Conversions | \n";
	cout << "  ------------------ \n\n";

	cout << " 1. Kilograms to Pounds \n";
	cout << " 2. Pounds to Kilograms \n";
	cout << " 3. Kilograms to Grams \n";
	cout << " 4. Grams to Kilograms \n";
	cout << " 5. Kilograms to Tonnes \n";
	cout << " 6. Tonnes to Kilograms \n";
	cout << "\n";

	cout << " Enter an option (1-6): ";
	cin >> m;
	
	switch (m) 
	{
		case 1:
			cout << "\n Enter the value in kilograms: ";
			cin >> kg;
			
			pound = kg * 2.20462;
			cout << "\n" << kg << " kilometres are equal to " << pound << " pounds ";
				cout << "\n\n -------------------------------------------------------------------------- \n\n\n\n";
			break;
			
		case 2:
			cout << "\n Enter the value in pounds: ";
			cin >> pound;
			
			kg = pound / 2.20462;
			cout << "\n" << pound << " pounds are equal to " << kg << " kilograms ";
				cout << "\n\n -------------------------------------------------------------------------- \n\n\n\n";
			break;
		
		case 3:
			cout << "\n Enter the value in kilograms: ";
			cin >> kg;
			
			gram = kg * 1000;
			cout << "\n" << kg << " kilograms are equal to " << gram << " grams ";
				cout << "\n\n -------------------------------------------------------------------------- \n\n\n\n";
			break;
		
		case 4:
			cout << "\n Enter the value in grams: ";
			cin >> gram;
			
			kg = gram / 1000;
			cout << "\n" << gram << " grams are equal to " << kg << " kilograms ";
				cout << "\n\n -------------------------------------------------------------------------- \n\n\n\n";
			break;
		
		case 5:
			cout << "\n Enter the value in kilograms";
			cin >> kg;
			
			tonne = kg / 1000;
			cout << "\n" << kg << " kilograms are equal to " << tonne << " tonnes ";
				cout << "\n\n -------------------------------------------------------------------------- \n\n\n\n";
			break;
		
		case 6:
			cout << "\n Enter the value in tonnes: ";
			cin >> tonne;
			
			kg = tonne * 1000;
			cout << "\n" << tonne << " tonnes are equal to " << kg << " kilograms ";
				cout << "\n\n -------------------------------------------------------------------------- \n\n\n\n";
			break;	
		
		default: 
			cout << "\n Invalid Input ";	
	}
}

// Author: Aditya Kirti
// Date: 30.01.23
