#include <iostream>
using namespace std;

class Car 
{
	private:
	    string model;
	    int year;
	
	public:
	    Car(string m, int y) 
		{
	        model = m;
	        year = y;
	        cout << "Car created: " << model << " (" << year << ")" << endl;
	    }
	
	    ~Car() 
		{
	        cout << "Car destroyed: " << model << " (" << year << ")" << endl;
	    }

};

int main() {
    string model1, model2;
    int year1, year2;

    cout << "Enter model for the first car: ";
    getline(cin, model1);
    cout << "Enter year of manufacture for the first car: ";
    cin >> year1;
    cin.ignore();  

    cout << "\nEnter model for the second car: ";
    getline(cin, model2);
    cout << "Enter year of manufacture for the second car: ";
    cin >> year2;
    cout << endl;
    
	Car car1(model1, year1);
    Car car2(model2, year2);
    
    return 0;
}
