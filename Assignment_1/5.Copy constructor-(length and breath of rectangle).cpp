#include <iostream>
using namespace std;

class Rectangle 
{
private:
    float length;
    float breadth;

public:
    Rectangle(float l, float b) 
	{
        length = l;
        breadth = b;
    }

    Rectangle(const Rectangle &rect) 
	{
        length = rect.length;
        breadth = rect.breadth;
       
    }

    void display() 
	{
        cout << "Length: " << length << "\nBreadth: " << breadth << endl;
    }
};

int main() {
    float length, breadth;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    Rectangle rect1(length, breadth);
    cout << "\nRectangle 1:" << endl;
    rect1.display();

    Rectangle rect2 = rect1;
    cout << "\nRectangle 2:" << endl;
    rect2.display();

    return 0;
}
