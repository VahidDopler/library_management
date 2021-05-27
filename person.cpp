#include <string.h>
#include <iostream>
#include <vector> 
#include "../include/Head.hpp"
using namespace std;
void set_book_Data(vector<book> &);

void show_book_data(vector<book> &);

void set_person_data(vector<person> &);

void show_person_data(vector<person> &);

void person::set_id()
{
    this->id=id_person;
    id_person=id_person+10;
}

long int person::get_id()
{
    return id;
}

person::person()
{
    name="";
    full_name="";
    family_name="";
    year=0;
    day=0;
    month;
    national_id="";
}

void person::set_name()
{
    cout << endl << "Enter your person past name ";
    cin >> name;
}

void person::set_family_name()
{
    cout << endl << "Enter your person family name ";
        cin >> family_name;
    full_name=name+ " " +family_name;
}

void person::set_national_id()
{
    cout << endl << "Enter your person national id ";
        cin >> national_id;
}

void person::set_data()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    year=1900 + ltm->tm_year;
    month=1 + ltm->tm_mon;
    day=ltm->tm_mday;
}

int person::get_year()
{
    return year;
}

int person::get_month()
{
    return month;
}

int person::get_day()
{
    return day;
}

string person::get_full_name()
{
    return full_name;
}

string person::get_national_id()
{
    return national_id;
}

void person::show_book_reserved()
{
    for (size_t i = 0; i < book_reserved.size(); i++)
    {
        cout << endl << "The book name => " << book_reserved[i].show_book_name();
        cout << endl << "The book author => " << book_reserved[i].show_book_author();
        cout << endl << "The book id => " << book_reserved[i].show_book_id();
        cout << endl;
    }
}

void set_person_data(vector<person> &vect)
{
    person obj;
    obj.set_name();
    obj.set_family_name();
    obj.set_national_id();
    obj.set_data();
    obj.set_id();
    vect.push_back(obj);
}

void show_person_data(vector<person> &Vect)
{
    int selector=0;
    bool flag=true;
    for (size_t i = 0; i < Vect.size(); i++)
    {
        cout << endl << "The person full name => " << Vect[i].get_full_name();
        cout << endl << "The person national id  => " << Vect[i].get_national_id();
        cout << endl << "The person date register => " << Vect[i].get_year() << " / " << Vect[i].get_month() << " / " << Vect[i].get_day();
        cout << endl << "The person id => " << Vect[i].get_id() << endl;
        while (flag)
        {
            cout << "Do you want to show the reserved books (1 Yes 2 no )=> ";
            cin >> selector;
            switch (selector)
            {
                case 1:
                    Vect[i].show_book_reserved();
                    flag=false;
                    break;
                case 2:
                    flag=false;
                    break;
                default:
                    cerr << "Your input is wrong !! try again ";
                    break;
            }
        }
        flag=true;
    }
}

void person::set_book_reserved(const book &obj)
{
    book_reserved.push_back(obj);
}

void show_seleted_person(person obj)
{
    int selector=0;
    bool flag=true;
    cout << endl << "The person full name => " << obj.get_full_name();
    cout << endl << "The person national id  => " << obj.get_national_id();
    cout << endl << "The person date register => " << obj.get_year() << " / " << obj.get_month() << " / " << obj.get_day();
    cout << endl << "The person id => " << obj.get_id() << endl;
    while (flag)
    {
        cout << "Do you want to show the reserved books (1 Yes 2 no )=> ";
        cin >> selector;
        switch (selector)
        {
            case 1:
                obj.show_book_reserved();
                flag=false;
                break;
            case 2:
                flag=false;
                break;
            default:
                cerr << "Your input is wrong !! try again ";
                break;
        }
    }
}

void show_seleted_person_update(person obj)
{
    cout << endl << "The person full name => " << obj.get_full_name();
    cout << endl << "The person national id  => " << obj.get_national_id();
    cout << endl << "The person date register => " << obj.get_year() << " / " << obj.get_month() << " / " << obj.get_day();
    cout << endl << "The person id => " << obj.get_id() << endl;
}