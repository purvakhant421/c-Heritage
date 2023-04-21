#include<iostream>

using namespace std;

class animal {
	private:
		char name[100]="eagle";
		int age=20;
	public:
	void set_value(){
		cout<<name<<endl;
		cout<<age;
	}
};
class Zebra  : public animal{
	public:
		void set_value(){
		cout<<endl<<"Zebra class"<<endl<<endl;
	}
};
class Dolphin  : public animal{
	public:
		void set_value(){
		cout<<endl<<"Dolphin animal";
	}
};


int main(){
       Zebra obj;
       Dolphin obj1;
       
       obj.animal::set_value();
       obj.set_value();
       
       obj1.animal::set_value();
       obj1.set_value();
	
	
	return 0;
}