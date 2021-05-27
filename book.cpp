#include <string.h>
#include <iostream>
#include <vector> 
#include "person.cpp"
using namespace std;

book::book()
{
    name="";
    author="";
    id=0;
    reserve=false;
    reserver_name="Unknown";
}


string book::show_status()
{
    if ( reserve)
        return "This book is reserved ";
    else 
        return "This book is not reserved";
}

void set_book_Data(vector<book> &vect)
{
    book obj;
    string temp1 , temp2;
    cout << endl << "Enter your book name => ";
    cin >> temp1;
    cout << endl << "Enter your book author => ";
    cin >> temp2;
    obj.set_book_author(temp2);
    obj.set_book_name(temp1);
    obj.set_book_id();
    vect.push_back(obj);
}

void show_book_data(vector<book> &vect)
{
    for (size_t i = 0; i < vect.size(); i++)
    {
        cout << endl << "The book name => " << vect[i].show_book_name();
        cout << endl << "The book author => " << vect[i].show_book_author();
        cout << endl << "The book id => " << vect[i].show_book_id();
        cout << endl << "The book status => " << vect[i].show_status();
        cout << endl << "The book resever name => " << vect[i].show_reserver_name();
        cout << endl;
    }
}

void show_book_data(book obj)
{
        cout << endl << "The book name => " << obj.show_book_name();
        cout << endl << "The book author => " << obj.show_book_author();
        cout << endl << "The book id => " << obj.show_book_id();
        cout << endl << "The book status => " << obj.show_status();
        cout << endl << "The book resever name => " << obj.show_reserver_name();
        cout << endl;
}

void update_book_data(book obj)
{
    int selector=0;
    bool flag=true;
    while (flag)
    {
        cout << "1)Book name " << endl;
    }
}