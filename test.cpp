#include<iostream>
using namespace std;
class base
{
	int x;
	int y;
	public:
	base(){
		cout << "Base Class Constructor"<< endl;
	}
	base(int i,int j):x(i),y(j){
		cout << "Parameterized Constructor X: " << x << " Y: " << y << endl;
	}
	void sum_i(int i,int j)
	{
		cout <<"Integer Addition: " << i+j << endl;
	}
	void sum_f(float i,float j)
	{

		cout <<"float Addition: " << i+j << endl;

	}
	void sum_i_f(int i,float j)
	{
		cout <<"Integer Flaot Addition: " << i+j << endl;
	}
	friend void access_data(base &obj);
};
class derived{
	int a;
	int b;
	public: 
	derived(){}
};
void access_data(base &obj)
{
cout << "In Friend Class: " << obj.x << " " << obj.y << endl;
}
int main()
{
	cout << "Hello World" << endl;
	//base obj(10,20);
	base ob(10,20);
	//obj.sum_i(10,20);
	//obj.sum_f(10.20,20.20);
	//obj.sum_i_f(10,10.20);
	access_data(ob);
}
