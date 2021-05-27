#include "delete_book.cpp"

using namespace std;

int main()
{
    vector<book> array;
    vector<person> arr;
    int selector=0;
    bool flag=true;
    while (flag)
    {
        cout << "1) Set book data " << endl;
        cout << "2) Set person data " << endl;
        cout << "3) show book data " << endl;
        cout << "4) show person data " << endl;
        cout << "5) reseve a book data " << endl;
        cout << "6) see the selected person data " << endl;
        cout << "7) see the selected book data " << endl;
        cout << "8) update the selected book data " << endl;
        cout << "9) update the selected person data " << endl;
        cout << "10) delete the selected person data " << endl;
        cout << "11) delete the selected book data " << endl;
        cout << "12) stop the process " << endl;
        cout << "Enter your number => ";
        cin >> selector;
        switch (selector)
        {
        case 1:
            set_book_Data(array);
            break;
        case 2:
            set_person_data(arr);
            break;
        case 3:
            show_book_data(array);
            break;
        case 4:
            show_person_data(arr);
            break;
        case 5:
            reserve_specifc_book_data(array , arr);
            break;
        case 6:
            search_person(arr);
            break;
        case 7:
            search_book(array);
            break;
        case 8:
            update_book_data(array);
            break;
        case 9:
            search_person_update(arr);
            break;
        case 10:
            delete_search_person(arr);
            break;
        case 11:
            delete_search_book(array);
            break;
        case 12:
            flag=false;
            break;
        }
    }
}