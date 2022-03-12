#include <iostream>
#include "contacts.h"

using namespace std;

int main()
{
    int c=-1;
    contacts contact(100); // contacts size = 10

    while(c!=0){
        cout <<"\n1- Print All Contacts\n"
             <<"2- Add New User\n"
             <<"3- Search \n"
             <<"4- Edit Existing User\n"
             <<"5- Delete User\n"
             <<"0- Quit\n";
        cout<<"Enter your choice: ";
        cin >> c;
        switch(c){
        case 1:
            contact.print();
            break;
        case 2:
            contact.addNewUser();
            break;
        case 3:
            {
                string key;
                cout << "Enter your keyword to find: ";
                cin.ignore();
                getline(cin, key);
                contact.findAll(key);
            }
            break;
        case 4:
            {
                int edit_id=0;
                cout<<"Enter user id to edit: ";
                cin>>edit_id;
                contact.editUser(edit_id);
            }
            break;
        case 5:
            {
                int del_id=0;
                cout<<"\nEnter user id to delete: ";
                cin>>del_id;
                contact.delUser(del_id);
            }
            break;
        }
    }
    cout << "Thanks for using Contact Manager Demo!" << endl;
    return 0;
}
