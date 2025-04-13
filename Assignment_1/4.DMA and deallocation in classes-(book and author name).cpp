#include <iostream>
using namespace std;

class Book 
{
private:
    string title;
    string author;

public:
    Book(string t, string a) 
	{
        title = t;
        author = a;
    }

    void display() 
	{
        cout << "\nBook Title: " << title << endl;
        cout << "Author: " << author << endl;
    }

    ~Book() 
	{
        cout << "\nBook object destroyed." << endl;
    }
};

int main() {
    string title, author;
    
    cout << "Enter the title of the book: ";
    getline(cin, title);
    
    cout << "Enter the author's name: ";
    getline(cin, author);

    Book* bookPtr = new Book(title, author);
    
    bookPtr->display();
    
    delete bookPtr;

    return 0;
}
