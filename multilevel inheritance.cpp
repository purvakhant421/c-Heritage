#include<iostream>

using namespace std;

class a{
		public:
		int id;
		char name[100];
		char role[100];
		int salary;
		int experience;
		char comp_name[100];
		char address[100];
		char email[100];
		int contact;
	void setter(){
		cout<<"Enter employee id :  ";	
		cin>>id;
		cout<<"Enter employee name :  ";
		cin>>name;
		cout<<"Enter employee role :  ";
		cin>>role;
	}
};
class b:public a{
	
	public:
		void setter(){
		cout<<endl<<"Enter employee salary :  ";
		cin>>salary;
		cout<<"Enter employee experience :  ";
		cin>>experience;
	}
};
class c:public b{
	public:
		void setter(){
		cout<<"Enter employee comp_name :  ";
		cin>>comp_name;
		cout<<"Enter employee address :  ";
		cin>>address;
		}
		void getter(){
		cout<<endl<<"employee name : "<<name;
		cout<<endl<<"employee role : "<<role;
		cout<<endl<<"employee salary : "<<salary<<endl;
		}
};
class d:public c{
	public:
	void setter(){
		cout<<"Enter employee email :  ";
		cin>>email;
		cout<<"Enter employee contact :  ";
		cin>>contact;
	}
	void getter(){
		cout<<endl<<"employee id : "<<id;
		cout<<endl<<"employee name : "<<name;
		cout<<endl<<"employee role : "<<role;
		cout<<endl<<"employee salary : "<<salary;
		cout<<endl<<"employee experience : "<<experience;
		cout<<endl<<"employee comp_name : "<<comp_name;
		cout<<endl<<"employee address : "<<address;
		cout<<endl<<"employee email : "<<email;
		cout<<endl<<"employee contact5 : "<<contact<<endl;
	}
};




int main(){
	
	d obj;
	obj.a::setter();
	obj.b::setter();
	obj.c::setter();
	obj.d::setter();
	obj.c::getter();
	obj.getter();
	
	
	return 0;
}