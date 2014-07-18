#include <iostream>
using namespace std;

//pointer;
// & memory address operator


void increase(int &);
void incr(int);

void swap(int& a, int& b); // with memory address

void swap2(int a, int b);

void sort(int&a, int&b, int&c);

int main(){

	int num = 9;
/*
	int x=2, y=3;
	cout<<"x is "<< x << "y is "<< y <<endl;

	swap(x,y);

	cout<<"x is "<< x << "y is "<< y <<endl;

	cout<<"x is "<< x << "y is "<< y <<endl;

	swap2(x,y);

	cout<<"x is "<< x << "y is "<< y <<endl;


	int z=1;
	sort(x,y,z);
	cout<< x << " "<< y < " "<< z <<endl;

	*/
	// only value is pass in (content of value)
	incr(num);
	cout<<"Num is "<< num <<endl;

	// only value location is pass in (address of num)
	increase(num);
	cout<<"Num is "<< num <<endl;

	
	cout<<"num is "<< num <<endl;
	cout<<"address of num is "<< &num <<endl;

	int * v; // v refer to a pointer to an int value
	cout<<"Address of v is "<< &v <<endl;

	//v = num; cannot work, cos different datatype, v= pointer num = int
	v = &num; //can work, same type
	cout<<"content of v is "<< v <<endl;

	
	cout<<"V points to int value "<< *v <<endl;

	num++;
	//* = pointer (point to v); de-reference
	cout<<" v points to int value "<< *v << endl;

	
}

void sort(int&a, int&b, int&c){

	if (a > b) swap(a,b);
	if (a > c) swap(a,c);
	if (b > c) swap(b,c);

}

void swap(int a, int b){

	int tmp = a;
	a=b;
	b=tmp;

}

void swap(int& a, int& b){
	
	/* different datatype
	int tmp = a;
	a=b;
	b=tmp; */

	int tmp = a;
	a=b;
	b=tmp;

}

void increase(int & a) {

	a++;

}

void incr(int a) {

	a++;
}
