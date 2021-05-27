#include <string.h>
#include <iostream>
#include <vector> 
#include "book.cpp"
using namespace std;


void reserve_specifc_book_data(vector<book> &vect , vector<person> &array)
{
    int book_selector=0 , person_selector=0;
    string temp="";
    bool flag=true;
    cout << endl << "Enter your book name => " ;
    cin >> temp;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (vect[i].show_book_name().find(temp) != std::string::npos) 
        {
            show_book_data(vect[i]);
        }
    }
    cout << endl << "Enter your person number => ";
    cin >> person_selector;
    cout << "Enter your book number => ";
    cin >> book_selector;
    while (flag)
    {
       if (vect[book_selector-1].get_book_status() == false)
       {
            array[person_selector-1].set_book_reserved(vect[book_selector-1]);
            vect[book_selector-1].set_reserve(true);
            vect[book_selector-1].set_reserver_name(array[person_selector-1].get_full_name());
            flag=false;
       }
       else
       {
            cout << "\nYou can not reserve this book please select another book \n";
            cout << "Enter your book number => ";
            cin >> book_selector;
       }      
    }
}

////////////////////

//searchh box for person

void search_with_national_id(vector<person> vect)
{
    string natinal_id="";
    bool flag=false;
    cout << "Enter your national id => ";
    cin >> natinal_id;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (natinal_id == vect[i].get_national_id())
        {
            show_seleted_person(vect[i]);
            flag=true;
            break;
        }  
    }
    if (flag==false)
        cout << "Not found";
}

void search_with_name(vector<person> vect)
{
    string name="";
    bool flag=false;

    cout << "Enter your name => ";
    cin >> name;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (vect[i].get_full_name().find(name) != std::string::npos)
        {
            show_seleted_person(vect[i]);
            flag=true;
            break;
        }  
    }
    if (flag==false)
        cout << "Not found";
}


void search_with_id(vector<person> vect)
{
    int id=0 , res=0 ;
    bool flag=false;
    cout << "Enter your person id => ";
    cin >> id;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (id = vect[i].get_id())
        {
            show_seleted_person(vect[i]);
            flag=true;
            break;
        }  
    }
    if (flag==false)
        cout << "Not found";
}

////////////////

void search_person(vector<person> vect)
{
    person obj;
    bool flag=true;
    int selector=0;
    while (flag)
    {
        cout << endl << "1) search with id "<< endl;
        cout << "2) search with name " << endl;
        cout << "3)search with natinal id " << endl;
        cout << "How do you want to search => ";
        cin >> selector;
        switch (selector)
        {
        case 1:
        {
            search_with_id(vect);
            flag=false;
            break;
        }
        case 2:
        {
            search_with_name(vect);
            flag=false;
            break;
        }
        case 3:
        {
            search_with_national_id(vect);
            flag=false;
            break;
        }
        default:
            break;
        }
    }
}

////////////////////////////////////////////////

//search box for book

