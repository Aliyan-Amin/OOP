#include<iostream>
using namespace std;

class Vehicle{
	public:
		virtual void startengine(){
			cout << "Vehicle Engine started." << endl;
		}
};

class Airplane : public Vehicle{
	public:
		void startengine() override{
			cout << "Engine started. Prepare to takeoff." << endl;
		} 
};

int main(){
	Vehicle v;
	Airplane a;
	
	cout << "For Vehicle: " << endl;
	v.startengine();
	
	cout << "\nFor Airplane: " << endl;
	a.startengine();
	return 0;
}