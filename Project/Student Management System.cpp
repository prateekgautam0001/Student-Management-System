#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<windows.h>
#include<fstream>
using namespace std;

class Node
{
    public:
        int roll_no;
        string name,father_name,qualification,phone_no;
        Node *next_add;
};
class Linked_List
{
    public:
        Node *head=NULL;
        void Insert()
        {
            fstream file;
            file.open("Items.txt"),ios::app;

            int r;
            string n;
            string fn;
            string q;
            string ph;
            cout<<"\n\n Enter Student Id: ";
            cin>>r;
            cout<<"\n\n Enter Student Name: ";
            cin>>n;
            cout<<"\n\n Enter Student Father Name: ";
            cin>>fn;
            cout<<"\n\n Enter Student Qualification: ";
            cin>>q;
            cout<<"\n\n Enter Student Phone Number: ";
            cin>>ph;

            Node *new_node = new Node;
            new_node -> roll_no = r;
            new_node -> name = n;
            new_node -> father_name = fn;
            new_node -> qualification = q;
            new_node -> phone_no = ph;
            new_node -> next_add = NULL;

            file<<new_node -> roll_no<<endl;
            file<<new_node -> name<<endl;
            file<<new_node -> father_name<<endl;
            file<<new_node -> qualification<<endl;
            file<<new_node -> phone_no<<endl;
            file.close();
            if(head == NULL)
            {
                head = new_node;
            }
            else
            {
                Node* ptr = head;
                while(ptr->next_add!=NULL)
                {
                    ptr = ptr -> next_add;
                }
                ptr -> next_add = new_node;
            }
        cout<<"\n\n New Node Insert Successfully... ";
        }
        void Search()
        {
            if(head == NULL)
            {
                cout<<"\n\n Linked List Is Empty... ";
            }
            else
            {
                int r,found=0;
                cout<<"\n\n Enter Student Id. For Search: ";
                cin>>r;
                Node *ptr = head;
                while(ptr != NULL)
                {
                    if(r == ptr -> roll_no)
                    {
                        cout<<"\n\n Student Id: "<<ptr -> roll_no;
                        cout<<"\n\n Student Name: "<<ptr -> name;
                        cout<<"\n\n Student Father Name: "<<ptr -> father_name;
                        cout<<"\n\n Student Qualification: "<<ptr -> qualification;
                        cout<<"\n\n Student Phone: "<<ptr -> phone_no;
                        found++;     
                    }
                    ptr = ptr -> next_add;
                }
                if(found == 0)
                {
                    cout<<"\n\n Search Student Id."<<r<<"Can't Found... "<<endl;
                }
            }
        }
        void Count()
        {
            if(head == NULL)
            {
                cout<<"\n\n Linked List Is Empty... ";
            }
            else
            {
                int c=0;
                Node *ptr = head;
                while(ptr != NULL)
                {
                    c++;
                    ptr = ptr -> next_add;
                }
                cout<<"\n\n Total No. Of Records: "<<c;
            }
        }
        void Update()
        {
            if(head == NULL)
            {
                cout<<"\n\n Linked List Is Empty... ";
            }
            else
            {
                int r,found=0;
                cout<<"\n\n Enter Student Id For Updation: ";
                cin>>r;
                Node *ptr = head;
                while(ptr != NULL)
                {
                    if(r == ptr -> roll_no)
                    {
                        cout<<"\n\n Enter New Student Id: ";
                        cin>>ptr -> roll_no;
                        cout<<"\n\n Enter Student Name: ";
                        cin>>ptr -> name;
                        cout<<"\n\n Enter Student Father Name: ";
                        cin>>ptr -> father_name;
                        cout<<"\n\n Enter Student Qualification: ";
                        cin>>ptr -> qualification;
                        cout<<"\n\n Enter Student Phone Number: ";
                        cin>>ptr -> phone_no;
                        cout<<"\n\n Record Udated Successfully... ";
                        found++;
                    }
                    ptr = ptr -> next_add;
                }
                if(found == 0)
                {
                    cout<<"\n\n Update Student Id."<<r<<"Not Found... "<<endl;
                }
            }
        }
        void Delete()
        {
            if(head == NULL)
            {
                cout<<"\n\n Linked List Is Empty... ";
            }
            else
            {
                int r,found=0;
                cout<<"\n\n Enter Student Id For Deletion... ";
                cin>>r;
                if(r == head -> roll_no)
                {
                    Node *ptr = head;
                    head = head -> next_add;
                    cout<<"\n\n Record Deleted Successfully... ";
                    found++;
                    delete ptr;
                }
                else
                {
                    Node *pre = head;
                    Node *ptr = head -> next_add;
                    while(ptr != NULL)
                    {
                        if(r = ptr -> roll_no)
                        {
                            pre -> next_add = ptr -> next_add;
                            cout<<"\n\n Record Deleted Successfully";
                            found++;
                            delete ptr;
                            break;
                        }
                        pre = ptr;
                        ptr = ptr -> next_add;
                    }
                }
                if(found == 0)
                {
                    cout<<"\n\n Delete Student Id."<<r<<"Can't Found"<<endl;
                }
            }
        }
        void Show()
        {
            if(head == NULL)
            {
                cout<<"\n\n Linked List Is Empty... ";
            }
            else
            {
                Node *ptr = head;
                while(ptr != NULL)
                {
                    cout<<"\n\n Student Id: "<<ptr -> roll_no;
                    cout<<"\n\n Student Name: "<<ptr -> name;
                    cout<<"\n\n Student Father Name: "<<ptr -> father_name;
                    cout<<"\n\n Student Qualification: "<<ptr -> qualification;
                    cout<<"\n\n Student Phone Number: "<<ptr -> phone_no;
                    ptr = ptr -> next_add;
                }
            }
        }
        void ShowFile()
        {
            string s1;
            string s2;
            string s3;
            string s4;
            string s5;
            string s6;
            string s7;
            string s8;
            string s9;
            string s10;
            string s11;
            string s12;
            string s13;
            string s14;
            string s15;

            ifstream in("Items.tct");
            getline(in,s1);
            getline(in,s2);
            getline(in,s3);
            getline(in,s4);
            getline(in,s5);
            getline(in,s6);
            getline(in,s7);
            getline(in,s8);
            getline(in,s9);
            getline(in,s10);
            getline(in,s11);
            getline(in,s12);
            getline(in,s13);
            getline(in,s14);
            getline(in,s15);

                    cout<<"\n\n\t First Student Record Is Given Below \n\n"<<endl;
            cout<<"\t\t Student Id is: "<<s1<<endl;
            cout<<"\t\t Student Name is: "<<s2<<endl;
            cout<<"\t\t Student Father Name is: "<<s3<<endl;
            cout<<"\t\t Student Qualifiaaction is: "<<s4<<endl;
            cout<<"\t\t Student Phone Number is: "<<s5<<endl;

                    cout<<"\n\n\t Second Student Record Is Given Below \n\n"<<endl;
            cout<<"\t\t Student Id is: "<<s6<<endl;
            cout<<"\t\t Student Name is: "<<s7<<endl;
            cout<<"\t\t Student Father Name is: "<<s8<<endl;
            cout<<"\t\t Student Qualifiaaction is: "<<s9<<endl;
            cout<<"\t\t Student Phone Number is: "<<s10<<endl;

                    cout<<"\n\n\t Third Student Record Is Given Below \n\n"<<endl;
            cout<<"\t\t Student Id is: "<<s11<<endl;
            cout<<"\t\t Student Name is: "<<s12<<endl;
            cout<<"\t\t Student Father Name is: "<<s13<<endl;
            cout<<"\t\t Student Qualifiaaction is: "<<s14<<endl;
            cout<<"\t\t Student Phone Number is: "<<s15<<endl;
        }
};

int main()
{
    Linked_List obj;
    p:
    system("cls");
    int choice;
    cout<<"\n\n\t\t\t\t Welcome To Student Management System Application"<<endl;
    cout<<"\n\n\n\t\t\t\t---------Student Management System--------------"<<endl;
    cout<<"\n\t\t\t\t\t S.No      Function                   Description          "<<endl;
    cout<<"\n\t\t\t\t\t 1. \tInsert Record\t\t\tInsert Student Record"<<endl;
    cout<<"\n\t\t\t\t\t 2. \tSearch Record\t\t\tSearch Student Record"<<endl;
    cout<<"\n\t\t\t\t\t 3. \tCount Record\t\t\tCount Student Record"<<endl;
    cout<<"\n\t\t\t\t\t 4. \tUpdate Record\t\t\tUpdate Student Record"<<endl;
    cout<<"\n\t\t\t\t\t 5. \tDelete Record\t\t\tDelete Student Record"<<endl;
    cout<<"\n\t\t\t\t\t 6. \tShow All Record\t\t\tShow Student Record"<<endl;
    cout<<"\n\t\t\t\t\t 7. \tShow Record From File\t\t\tShow All Student Record From File"<<endl;
    cout<<"\n\t\t\t\t\t 8. \tExit"<<endl;
    cout<<"\n\t\t\t\t\t Enter Your Choice: \t"<<endl;

    cin>>choice;
    switch (choice)
    {
        case 1:
            system("cls");
            obj.Insert();
            break;
        case 2:
            system("cls");
            obj.Search();
            break;
        case 3:
            system("cls");
            obj.Count();
            break;
        case 4:
            system("cls");
            obj.Update();
            break;
        case 5:
            system("cls");
            obj.Delete();
            break;
        case 6:
            system("cls");
            obj.Show();
            break;
        case 7:
            system("cls");
            obj.ShowFile();
            break;
        case 8:
            exit(0);
        default:
                cout<<"\n\n\n Invalid Choice";
    }
    getch();
    goto p;
    
    return 0;
}
