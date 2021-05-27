#include <string>
#include <iostream>
#include <vector> 
#include <ctime>
using namespace std;

#ifndef VAHID_H
#define VAHID_H

long int id_number= 500;

long int id_person=400;

class book
{
private:
    string name;
    string author;
    long int id;
    bool reserve;
    string reserver_name;
    int day;
public:
    book();
    void set_book_name(string str ) { name=str;}
    void set_book_author(string str) { author=str;}
    void set_book_id () { id= id_number; id_number= id_number+10;}
    void set_book_id (long int temp) { id=temp;}
    void set_reserve( bool flag) { reserve=flag;}
    void set_reserver_name(string str) { reserver_name=str; };
    string show_book_name() { return name;}
    string show_book_author() { return author;}
    long int show_book_id() { return id;}
    string show_status();
    string show_reserver_name() { return reserver_name;}; 
    bool get_book_status() { return reserve;}
};

class person
{
private:
    string name;
    string family_name;
    string full_name;
    string national_id;
    long int id;
    vector<book> book_reserved;
    int year , month , day;
public:
    person();
    void set_id();
    void set_name();
    void set_family_name();
    void set_national_id();
    void set_national_id(string str) { national_id=str;}
    void set_id(long int num) { id=num;}
    void set_book_reserved(const book &);
    void set_data();
    string get_full_name();
    string get_national_id();
    int get_year();
    int get_month();
    int get_day();
    void show_book_reserved();
    long int get_id();
    void set_name(string str){ name=str;}
    void set_family_name(string str) { family_name=str;}
    void update_name() {full_name=family_name+ " "+name;}
};

#endif // !VAHID_H