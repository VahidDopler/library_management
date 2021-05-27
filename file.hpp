#include <string>
#include <iostream>
using namespace std;

#ifndef VAHID_H
#define VAHID_H


class vahid
{
private:
    string name;
    string family_name;
    string full_name;
public:
    vahid (string input)
    {
       cout << "Your object name of " << input << " is created "; 
    }

    ~vahid()
    {
        cout << "Your object has been destroyed";
    }
    void set_data (string , string);
    void get_data();
    // void set_data (string str , string str2)
    // {
    //     name=str;
    //     family_name=str2;
    // }
    // void get_data()
    // {
    //     full_name = name + " " + family_name;
    //     cout << "\nYour name is " << full_name << endl ;
    // }
};

#endif // !VAHID_H