#include<iostream>
using namespace std;
class complex
{
	int real,img;
public:
	complex(int,int);
	void display();
	
	complex operator++();
	 complex operator--(int);
	 complex();
};
complex::complex()
{
	real=img=0;
}
complex::complex(int real,int img)
{
	this->real=real;
	this->img=img;
}
void complex::display()
{
	if(img>0)
	cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;
	else
	cout<<"complex number is "<<real<<img<<"i"<<endl;
}

complex complex::operator++()
{
	++this->real;
	++this->img;
	return (*this);
}
complex complex::operator--(int)
{
	complex temp= (*this);
	--this->real;
	--this->img;
	return temp;
}
int main()
{
	complex c1(2,5);
	complex c2=++c1;
	c1.display();
	c2.display();


}
