#include<iostream>
using namespace std;

class Animal {
	public:
    void name()
    {
    	cout<<"\nName Given";
		}
    void sleep()
	{
		cout<<"\nSlepping";
		}
};

class Dog : public Animal {
	public:
    void bark()
    {
    	cout<<"\nWoff!! Woff!!";
		}
		
};

int main()
{
	Dog d;
	d.bark();
	d.name();
	d.sleep();
	return 0;
}