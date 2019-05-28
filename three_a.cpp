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
