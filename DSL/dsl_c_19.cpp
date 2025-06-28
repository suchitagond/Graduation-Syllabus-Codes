#include <iostream>
using namespace std;
class node
{
    friend class list;
    int prn;
    string name;
    node *next;

public:
    node(int p, string n)
    {
        prn = p;
        name = n;
        next = NULL;
    }
};
class list
{
    node *head;

public:
    list()
    {
        head = NULL;
    }
    void insert_member();
    void insert_president();
    void insert_secretary();
    void create_node();
    void delete_node();
    void delete_member();
    void delete_president();
    void delete_secretary();
    void concatenate(list, list);
    void count();
    void display();
};
void list::display()
{
    node *temp;
    temp = head;
    while (temp->next != NULL)
    {
        cout << temp->prn << "\t" << temp->name << endl;
        temp = temp->next;
    }
    cout << temp->prn << "\t" << temp->name << endl;
}
void list::insert_president()
{
    node *temp;
    int prn;
    string name;
    cout << "enter prn ";
    cin >> prn;
    cout << "enter name ";
    cin >> name;
    temp = new node(prn, name);
    temp->next = head;
    head = temp;
}
void list::insert_secretary()
{
    node *temp, *ptr;
    int prn;
    string name;
    cout << "enter prn ";
    cin >> prn;
    cout << "enter name ";
    cin >> name;
    temp = new node(prn, name);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void list::insert_member()
{
    node *temp, *ptr;
    int Prn, p;
    string Name;
    cout << "enter prn ";
    cin >> Prn;
    cout << "enter name ";
    cin >> Name;
    temp = new node(Prn, Name);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        ptr = head;
        cout << "enter prn after which you want to add new node ";
        cin >> p;
        while (ptr->prn != p)
        {
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
}
void list::create_node()
{
    int ch;
    char ch1;
    do
    {
        cout << "1)insert president\n2)insert member\n3)insert secretary" << endl;
        cout << "enter choice ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            insert_president();
            break;
        case 2:
            insert_member();
            break;
        case 3:
            insert_secretary();
            break;
        default:
            cout << "invalid choice";
            break;
        }
        cout << "do you want to continue(y/n) : ";
        cin >> ch1;
    } while (ch1 == 'y' || ch1 == 'Y');
}
void list::delete_president()
{
    node *temp;
    temp = head;
    head = temp->next;
}
void list::delete_secretary()
{
    node *temp, *prev;
    temp = head;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
}
void list::delete_member()
{
    int p;
    cout << "enter prn that you want to delete ";
    cin >> p;
    node *temp, *prev;
    temp = head;
    while (temp->prn != p)
    {
        prev = temp;
        temp = temp->next;
    }
    cout << temp->prn << " deleted " << endl;
    prev->next = temp->next;
}
void list::delete_node()
{
    int ch;
    char ch1;
    do
    {
        cout << " 1)delete president\n 2)delete member\n 3)delete secretary " << endl;
        cout << "enter your choice ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            delete_president();
            break;
        case 2:
            delete_member();
            break;
        case 3:
            delete_secretary();
            break;
        default:
            cout << "enter valid choice ";
            break;
        }
        cout << "do you want to continue(y/n) : ";
        cin >> ch1;
    } while (ch1 == 'y' || ch1 == 'Y');
}
void list::concatenate(list s1, list s2)
{
    node *temp;
    temp = s1.head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = s2.head;
    s1.display();
}
void list::count()
{
    int total = 1;
    node *temp;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        total++;
    }
    cout << "total nodes " << total;
}
int main()
{
    list o1, o2;
    int ch;
    char ch1;
    do
    {
        cout << " 1)create node\n 2)delete node\n 3)display\n 4)count node\n 5)concatenete list " << endl;
        cout << "enter your choice ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            o1.create_node();
            break;
        case 2:
            o1.delete_node();
            break;
        case 3:
            o1.display();
            break;
        case 4:
            o1.count();
            break;
        case 5:
            o2.create_node();
            o1.concatenate(o1, o2);
            break;
        default:
            cout << "enter valid choice ";
            break;
        }
        cout << "do you want to cotinue(y/n) : ";
        cin >> ch1;
    } while (ch1 == 'y' || ch1 == 'Y');
}