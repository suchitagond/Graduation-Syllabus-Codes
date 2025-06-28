#include <iostream>
using namespace std;
#define size 10
class queue
{
    int f = -1, e = -1;
    string x;
    string q[size];

public:
    int isempty()
    {
        if (e == -1 or f > e)
            return 1;
        else
            return 0;
    }
    int isfull()
    {
        if (e >= 10)
            return 1;
        else
            return 0;
    }
    void enqueue()
    {
        int n;
        cout << "no. of jobs you want to add ";
        cin >> n;

        if (isfull() == 1)
            cout << "job queue is full" << endl;
        else
        {
            if (f == -1)
                f++;
            for (int i = 0; i < n; i++)
            {
                if (e < size - 1)
                {
                    e++;
                    cout << "enter job ";
                    cin >> x;
                    q[e] = x;
                }
                else
                    cout << "job queue is full..." << endl;
            }
        }
    }
    void dequeue()
    {
        if (isempty() == 1)
            cout << "job queue is empty" << endl;
        else
        {
            int m;
            cout << "no. of jobs you want to delete ";
            cin >> m;

            for (int i = 0; i < m; i++)
            {
                if (f <= e)
                {
                    cout << "deleted job is " << q[f] << endl;
                    f++;
                }
                else
                    cout << "job queue is empty..." << endl;
            }
        }
    }
    void display()
    {
        for (int i = f; i <= e; i++)
            cout << q[i] << "  ";
        cout << "\n";
    }
};
int main()
{
    queue a;
    int ch;
    char c;
    /*
    a.enqueue();
    a.display();
    a.dequeue();
    a.display();
    */
    cout << "\n 1)enqueue opration\n 2)dequeue opration\n 3)display opration\n";
    do
    {
        cout << "\nenter your choice ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            if (ch == 1)
                a.enqueue();
        case 2:
            if (ch == 2)
                a.dequeue();
        case 3:
            a.display();
        }
        cout << "you want to continue y/n : ";
        cin >> c;
    } while (c == 'y');

    return 0;
}