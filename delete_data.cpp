#include "update_person_data.cpp"


void search_with_uinque_id_delete (vector<person> &vect)
{
    long int num=0;
    vector<person>::iterator it;
    it=vect.begin();
    cout << "Enter your uique id => ";
    cin >> num;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (num == vect[i].get_id())
        {
            vect.erase(it);
            cout << "\nSuccessfullly removed " << endl;
        }
        else
            it++;
    }
}

void search_with_name_delete (vector<person> &vect)
{
    string temp="";
    long int num=0;
    vector<person>::iterator it;
    it=vect.begin();
    cout << endl << "Enter your name => ";
    cin >> temp;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (vect[i].get_full_name().find(temp) != std::string::npos)
            show_seleted_person_update(vect[i]);
    }
    cout << endl << "please enter your selected person unique id => ";
    cin >> num;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (num == vect[i].get_id())
        {
            vect.erase(it);
            cout << "\nSuccessfullly removed " << endl;
        }
        else
            it++;
    }
}

void search_with_national_id_delete(vector<person> &vect)
{
    string temp="" , Temp="";
    long int num=0;
    vector<person>::iterator it;
    it=vect.begin();
    cout << "Enter your national id please => ";
    cin >> temp;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (vect[i].get_national_id().find(temp) != std::string::npos)
            show_seleted_person_update(vect[i]);
    }
    cout << endl << "please enter your selected person unique id => ";
    cin >> num;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (num == vect[i].get_id())
        {
            vect.erase(it);
            cout << "\nSuccessfullly removed " << endl;
        }
        else
            it++;
    }          
}

void delete_search_person(vector <person> &vect)
{
    bool flag=true;
    int selector=0;
    while (flag)
    {
        cout << endl << "1) search with national id "<< endl;
        cout << "2) search with name " << endl;
        cout << "3) search with unique id " << endl;
        cout << "How do you want to search => ";
        cin >> selector;
        switch (selector)
        {
        case 1:
        {
            search_with_national_id_delete(vect);
            flag=false;
            break;
        }
        case 2:
        {
            search_with_name_person_update(vect);
            flag=false;
            break;
        }
        case 3:
        {
            search_with_uinque_id_delete(vect);
            flag=false;
            break;
        }
        default:
            break;
        }
    }
}