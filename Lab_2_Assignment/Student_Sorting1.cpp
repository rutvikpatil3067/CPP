#include <iostream>
#include<istream>
#include<sstream>     
using  namespace std;  
#include<string.h>
class date
{
	int date,month,year;
	public:
		void get()
		{
			cout<<"enter date\n";
			cin>>date>>month>>year;
		}
		void put()
		{
			cout<<"\t"<<date<<"/"<<month<<"/"<<year<<endl;
		}
};
class student
{
	int rno;
	char nm[10];
	int mark;
	char add[15];
	date d;
	public:
		void get()
		{
			cout<<"Enter student name\n";
			cin>>nm;
			cout<<"Enter rollno\n";
			cin>>rno;
			cout<<"Enter address\n";
			cin>>add;
			cout<<"Enter student marks\n";
			cin>>mark;
			d.get();
		}
		void put()
		{
			istringstream str(" ");
			int rno;
			string nm;
			int mark;
	        getline(int>>ws,rno);
	        getline(str>>ws,nm);
	        getline(int>>ws,mark);
	        cout << "rno" << "nm "<<" mark "<< endl;
			d.put();
		}
		int getrollno()
		{
			return rno;
		}
		char* getname()
		{
			return nm;
		}
		char* getaddress()
		{
			return add;
		}
		int getmarks()
		{
			return mark;
		}
		void setname(char* n)
		{
			strcpy(nm,n);
		}
		void setrollno(int r)
		{
			rno=r;
		}
		void setaddress(char* a)
		{
			strcpy(add,a);
		}
		void setmarks(int m)
		{
			mark=m;
		}
		
		
};
int main()
{
	student s[10],temp;
	int i,n,j;
	cout<<"enter value of n\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].get();
		
	}
	for(i=0;i<n;i++)
	{
		s[i].put();
		
	}
	cout<<"sort information\n";
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].getmarks()>s[j].getmarks())
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++)
	s[i].put();
}
