#include<iostream>
using namespace std;
struct node
{
	int roll;
	char name[20];
	float total;
	node *next;
};
class stack
{
	node *top;
	public:
		stack()
		{
			top=NULL;
		}
		void push();
		void pop();
		void display();
};
void stack::push()
{
	node *temp;
	temp=new node;
	cout<<"Enter Roll Number: "<<endl;
	cin>>temp->roll;
	cout<<"Enter Name: "<<endl;
	cin>>temp->name;
	cout<<"Enter Total Marks: "<<endl;
	cin>>temp->total;
	temp->next=top;
	top=temp;
}
void stack::pop()
{
	if(top!=NULL)
	{
		node *temp=top;
		top=top->next;
		cout<<temp->roll<<temp->name<<temp->total<<"Deleted"<<endl;
		delete temp;
	}
	else
	cout<<"Stack is Empty !!!!"<<endl;
}
void stack::display()
{
	node *temp=top;
	while(temp!=NULL)
	{
		cout<<temp->roll<<temp->name<<temp->total<<" ";
		temp=temp->next;
	}
}

