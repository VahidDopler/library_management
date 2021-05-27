#include "library_code.cpp"

void search_with_id_update(vector<book> &vect);

void edit_data_book(book &obj);

void search_with_id(vector<book> vect)
{
    long int book_id=0;
    bool flag=false;
    cout << "Enter your book id => ";
    cin >> book_id;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (book_id == vect[i].show_book_id())
        {
            show_book_data(vect[i]);
            flag=true;
            break;
        }  
    }
    if (flag==false)
        cout << "Not found" << endl;
}

void search_with_name(vector<book> vect)
{
    string name="";
    bool flag=false;
    cout << "Enter your book name => ";
    cin >> name;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (vect[i].show_book_name().find(name) != std::string::npos)
        {
            show_book_data(vect[i]);
            flag=true;
            break;
        }  
    }
    if (flag==false)
        cout << "Not found" << endl;
}


void search_with_author(vector<book> vect)
{
    string author_temp="";
    bool flag=false;
    cout << "Enter your book author => ";
    cin >> author_temp;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if ( vect[i].show_book_author().find(author_temp) != std::string::npos)
        {
            show_book_data(vect[i]);
            flag=true;
            break;
        }  
    }
    if (flag==false)
        cout << "Not found" << endl;
}


////////////

void search_book(vector<book> vect)
{
    person obj;
    bool flag=true;
    int selector=0;
    while (flag)
    {
        cout << endl << "1) search with id "<< endl;
        cout << "2) search with name " << endl;
        cout << "3)search with author " << endl;
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
            search_with_author(vect);
            flag=false;
            break;
        }
        default:
            break;
        }
    }
}

//////////////

//base for search and update book datas

void search_with_author_update(vector<book> &vect)
{
    string temp="";
    long int Temp=0;
    cout << "Enter your book author => ";
    cin >> temp;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (vect[i].show_book_author().find(temp) != std::string::npos)
            show_book_data(vect[i]);
    }
    cout << "Enter your book id => ";
    cin >> Temp;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (Temp == vect[i].show_book_id())
        {
            edit_data_book(vect[i]);
            break;
        }
    }
}

void search_with_name_update(vector<book> &vect)
{
    string temp="";
    long int Temp =0;
    cout << "Enter your book name => ";
    cin >> temp;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (vect[i].show_book_name().find(temp) != std::string::npos)
            show_book_data(vect[i]);
    }
    cout << "Enter your book id => ";
    cin >> Temp;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (Temp == vect[i].show_book_id())
        {
            edit_data_book(vect[i]);
            break;
        }
    }
}

void search_with_id_update(vector<book> &vect)
{
    long int temp=0;
    cout << "Enter your number id to search => ";
    cin >> temp;
    for (size_t i = 0; i < vect.size(); i++)
    {
        if (temp == vect[i].show_book_id())
        {
            show_book_data(vect[i]);
            edit_data_book(vect[i]);
            break;
        } 
    }
}

void update_book_data (vector<book> &vect)
{
    bool flag=true;
    int selector=0;
    while (flag)
    {
        cout << endl << "1) search with id "<< endl;
        cout << "2) search with name " << endl;
        cout << "3) search with author " << endl;
        cout << "How do you want to search => ";
        cin >> selector;
        switch (selector)
        {
        case 1:
        {
            search_with_id_update(vect);
            flag=false;
            break;
        }
        case 2:
        {
            search_with_name_update(vect);
            flag=false;
            break;
        }
        case 3:
        {
            search_with_author_update(vect);
            flag=false;
            break;
        }
        default:
            break;
        }
    }
}

void edit_book_author( book &obj)
{
    string temp="";
    cout << "Enter your author name => ";
    cin >> temp;
    obj.set_book_author(temp);
}

void edit_book_name( book &obj)
{
    string temp="";
    cout << "Enter your book name => ";
    cin >> temp;
    obj.set_book_name(temp);
}

void edit_book_id(book &obj)
{
    long int temp=0;
    cout << "Enter your book id => ";
    cin >> temp;
    obj.set_book_id(temp);
}

void edit_book_status( book &obj)
{
    int selector=0;
    if (obj.get_book_status())
    {
        cout << endl << "Do you want to set the book reserve off ? (1/yes // 2/no)=> ";
        cin >> selector;
        if (selector == 1)
            obj.set_reserve(false);
    }
    else
    {
        cout << endl << "Do you want to set the book reserve on ? (1/yes // 2/no)=> ";
        cin >> selector;
        if (selector == 1)
            obj.set_reserve(true);
    }
}


void edit_data_book(book &obj)
{
    int  selector=0;
    bool flag=true;
            while (flag==true)
            {
                cout << "1) Edit id " << endl;
                cout << "2) Edit author " << endl;
                cout << "3) Edit name " << endl;
                cout << "4) Edit reserve status " << endl;
                cout << "5) Edit reserver name " << endl;
                cout << "6) stop process " << endl;
                cout << "what dy you want => ";
                cin >> selector;
                switch (selector)
                {
                    case 1:
                    {
                        edit_book_id (obj);
                        flag=false;
                        break;
                    }
                    case 2:
                    {
                        edit_book_author (obj);
                        flag=false;
                        break;
                    }
                    case 3:
                    {
                        edit_book_name(obj);
                        flag=false;
                        break;
                    }
                    case 4:
                    {
                        edit_book_status(obj);
                        flag=false;
                        break;
                    }
                    case 6:
                        flag=false;
                        break;
                    default:
                        break;
                }
            }
}

