//		Hybrid inheritance        
#include<iostream>
using namespace std;
class parent{
	public:int a = 1;
	};
class child1 : public parent{
	public:int b = 3;
	};
class child2 : public parent{
	public:int c = 5;
	};
class GrChild : public child1 , public child2{
	public:int d=5;
	};
int main(){
	child1 c1;
	child2 c2;
	GrChild gc;
	cout<<c2.c<<endl;
	cout<<c1.b<<endl;
	cout<<c2.a<<endl;	
	cout<<c1.a<<endl;
	cout<<gc.d<<endl;
	cout<<gc.c<<endl;
	cout<<gc.b<<endl;
	return 0;
}

