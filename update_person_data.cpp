#include "../src/library_code_second.cpp"

void edit_person_unique_id(person &obj)
{
    long int temp=0;
    bool flag=true;
    cout << "Enter your id => ";
    cin >> temp;
    obj.set_id(temp);
}

void edit_person_national_id(person &obj)
{
    string temp="";
    cout << "Enter your national id => ";
    cin >> temp;
    obj.set_national_id(temp);
}

void edit_person_name(person &obj)
{
    int selector=0 , Selector=0;
    string temp="";
    bool flag=true;
    while (flag)
    {
        cout << endl << "What do you want to edit => 1//name    2//family name    3// exit   => ";
        cin >> selector;
        switch (selector)
        {
        case 1:
            cout << "Enter your person name you want to put => ";
            cin >> temp;
            obj.set_name(temp);
            obj.update_name();
            break;
        case 2:
            cout << "Enter your person name you want to put => ";
            cin >> temp;
            obj.set_family_name(temp);
            obj.update_name();
            break;
        case 3:
            flag=false;
            break;
        default:
            break;
        }
    }
}

void edit_person_data(person &obj)
{
    int selector=0;
    bool flag=true;
    while (flag==true)
    {
        cout << "1) Edit name " << endl;
        cout << "2) Edit national id " << endl;
        cout << "3) Edit uinque id " << endl;
        cout << "4) stop process " << endl;
        cout << "what dy you want => ";
        cin >> selector;
        switch (selector)
        {
            case 1:
                edit_person_name(obj);
                flag=false;
                break;
            case 2:
                edit_person_national_id(obj);
                flag=false;
                break;
            case 3:
                edit_person_unique_id(obj);
                flag=false;
                break;
            case 4:
                flag=false;
                break;
            default:
                break;
        }
            
    }
}

void search_with_national_id_update(vector<person> &vect)
{
    string temp="" , Temp="";
    long int num=0;
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
        if (num == vect[i].get_id())
            edit_person_data(vect[i]);
}

void search_with_name_person_update(vector<person> &vect)
{
    string temp="";
    long int num=0;
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
        if (num == vect[i].get_id())
            edit_person_data(vect[i]);
    
}

void search_with_unique_id_person(vector<person> &vect)
{
    long int num=0;
    cout << "Enter your uique id => ";
    cin >> num;
    for (size_t i = 0; i < vect.size(); i++)
        if (num== vect[i].get_id())
        {
            show_seleted_person(vect[i]);
            edit_person_data(vect[i]);
            break;
        }
    else   
        cout << endl << "Not found " << endl;    
}

void search_person_update(vector<person> &vect)
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
            search_with_national_id_update(vect);
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
            search_with_unique_id_person(vect);
            flag=false;
            break;
        }
        default:
            break;
        }
    }
}