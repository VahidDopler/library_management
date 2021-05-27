#include "delete_data.cpp"

void search_with_unique_id_book_delete(vector<book> &vect)
{
    long int num=0;
    vector<book>::iterator it;
    it=vect.begin();
    cout << "Enter your uique id => ";
    cin >> num;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (num == vect[i].show_book_id())
        {
            vect.erase(it);
            cout << "\nSuccessfullly removed " << endl;
        }
        else
            it++;
    }
}

void search_with_author_delete_book(vector<book> &vect)
{
    string temp="";
    long int num=0;
    vector<book>::iterator it;
    it=vect.begin();
    cout << endl << "Enter your author name => ";
    cin >> temp;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (vect[i].show_book_author().find(temp) != std::string::npos)
            show_book_data(vect[i]);
    }
    cout << endl << "please enter your selected book unique id => ";
    cin >> num;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (num == vect[i].show_book_id())
        {
            vect.erase(it);
            cout << "\nSuccessfullly removed " << endl;
        }
        else
            it++;
    }
}

void search_with_name_delete_book(vector<book> &vect)
{
    string temp="";
    long int num=0;
    vector<book>::iterator it;
    it=vect.begin();
    cout << endl << "Enter your name => ";
    cin >> temp;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (vect[i].show_book_name().find(temp) != std::string::npos)
            show_book_data(vect[i]);
    }
    cout << endl << "please enter your selected book unique id => ";
    cin >> num;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (num == vect[i].show_book_id())
        {
            vect.erase(it);
            cout << "\nSuccessfullly removed " << endl;
        }
        else
            it++;
    }
}

void delete_search_book(vector<book> &vect)
{
    bool flag=true;
    int selector=0;
    while (flag)
    {
        cout << endl << "1) search with name "<< endl;
        cout << "2) search with author " << endl;
        cout << "3) search with unique id " << endl;
        cout << "How do you want to search => ";
        cin >> selector;
        switch (selector)
        {
        case 1:
        {
            search_with_name_delete_book(vect);
            flag=false;
            break;
        }
        case 2:
        {
            search_with_author_delete_book(vect);
            flag=false;
            break;
        }
        case 3:
        {
            search_with_unique_id_book_delete(vect);
            flag=false;
            break;
        }
        default:
            break;
        }
    }
}