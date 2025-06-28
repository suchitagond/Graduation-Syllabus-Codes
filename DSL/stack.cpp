#include<iostream>
using namespace std;
#define size 10
class operations
{
public:
	int s[size],top;
	operations()
	{
		top=-1;
	}
	int isfull()
	{
		if(top==size-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int isempty()
	{
		if(top==-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	void push()
	{	
		int x;
		if(isfull()==1)
		{
			cout<<"stack overflow"<<endl;
		}
		else
		{
			cout<<"enter element ";
			cin>>x;
			top++;
			s[top]=x;
		}
	}
	void pop()
	{
		if(isempty()==1)
		{
			cout<<"stack underflow"<<endl;
		}
		else
		{
			cout<<"the deleted element is "<<s[top]<<endl;
			top--;
		}
	}
	void display()
	{
		for(int i=0;i<=top;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<"\n";
	}
};

int main()
{
	int ch;
	char c;
	operations obj;
	cout<<" 1)push\n 2)pop\n 3)dispay\n";
	do
	{
	cout<<"enter your choice";
	cin>>ch;
	switch(ch)
	{
		case 1:
			if(ch==1)
			{
				int n;
				cout<<"no. of element you want to push ";
				cin>>n;
				for(int i=0;i<n;i++)
				{
					obj.push();
				}
			}
		case 2:
			if(ch==2)
			{
				int m;
				cout<<"no. of element you want to pop ";
				cin>>m;
				for(int i=0;i<m;i++)
				{
					obj.pop();
				}
			}
		case 3:
			obj.display();
	}
	cout<<"do you want to continue ";
	cin>>c;
	}while(c=='y');
	return 0;
}	
	/*
	int n;
	cout<<"no. of element you want to push ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		obj.push();
	}
	obj.display();
	int m;
	cout<<"no. of element you want to pop ";
	cin>>m;
	for(int i=0;i<m;i++)
	{
		obj.pop();
	}
	obj.display();
	*/
















