#include<iostream>
using namespace std;

class publication
{
    string title;
    float price;
    public:
    void add()
    {
        cout<<"enter title : ";
        cin>>title; 
        cout<<"enter price : ";
        cin>>price;
    }
    void display()
    {
        cout<<"title of publication is "<<title<<endl;
        cout<<"price of publication is "<<price<<endl;
    }
};
class book:public publication
{
    int page;
    public:
    void book_add()
    {
        cout<<"enter data for book class :"<<endl;
        add();
        cout<<"enter page count : ";
        cin>>page;
        if(page<0)
        {
            cout<<"invalid entry"<<endl;
            page=0;
        }
        cout<<"\n"<<endl;
    }
    void book_display()
    {
        cout<<"display data for book class :"<<endl;
        display();
        cout<<"page count is "<<page<<endl;
        cout<<"\n************x************"<<endl;
    }
};
class tape:public publication
{
    float time;
    public:
    void tape_add()
    {
        cout<<"enter data for tape class :"<<endl;
        add();
        cout<<"enter playing time : ";
        cin>>time;
        if(time<0)
        {
            cout<<"invalid entry"<<endl;
            time=0;
        }
        cout<<"\n"<<endl;
    }
    void tape_display()
    {
        cout<<"display data for tape class :"<<endl;
        display();
        cout<<"playing time is "<<time<<endl;
        cout<<"\n************x************"<<endl;
    }
};
int main()
{
    book b1;
    tape t1;
    b1.book_add();
    b1.book_display();
    t1.tape_add();
    t1.tape_display();
    return 0;
}




//     cout<<"1) add information of books : "<<endl;
//     cout<<"2) add information of tapes : "<<endl;
//     cout<<"3) display information of books : "<<endl;
//     cout<<"4) display information of tapes : "<<endl;
//     cout<<"5) exit "<<endl;

//     cout<<"\n"<<endl;
//     char c;
//     int ch;
//     do
//     {
//         cout<<"enter choice : ";
//         cin>>ch;
//         switch (ch)
//         {
//         case 1:
//             b1.book_add();
//             break;
//         case 2:
//             t1.tape_add();
//             break;
//         case 3:
//             b1.book_display();
//             break;
//         case 4:
//             t1.tape_display();
//             break;
//         case 5:
//             cout<<"do you want to exit (y/n) : ";
//             cin>>c;
//             cout<<"\n"<<endl;
//         }

//     } while (c !='y');
//     return 0;
// }
