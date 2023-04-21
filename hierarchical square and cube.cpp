#include <iostream>
using namespace std;

class baseNumber {
public:
	 int num;
    void getNumber()
    {
        cout << "Enter  number: ";
        cin >> num;
    }
};

class Square : public baseNumber {
	
public:
	int sqr;

    void getSquare()
    { 
        sqr = num * num;
     cout<<"square of the number is : "<<sqr<<endl;
    }
};

class Cube : public baseNumber {
public:
	int cube;


    void getCube()
    {
        cube = num * num * num;
      cout<<"cube of the number is  : "<<cube<<endl;
    }
};

int main(){

    Square s;
    Cube q;
    
    s.getNumber();
    s.getSquare();


    q.getNumber();
    q.getCube();


    return 0;
}

