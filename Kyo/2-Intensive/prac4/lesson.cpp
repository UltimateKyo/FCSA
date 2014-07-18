#include <iostream>
using namespace std;
//pointer; dynamic memory
//& memory address operator.

void increase(int &);
void incr(int);
void swap(int& a, int& b);
void swap2(int a, int b);
void sort(int& a, int& b, int& c);
int main()
{
	int num = 9;
	/*cout <<"num is " << num<<endl;
	cout <<"address of num if "<<&num<<endl;

	int * v; //v is a pointer to an int value;
	cout << "Address of v is : "<<&v<<endl;
	v = &num;
	cout << "Content of v is " <<v<<endl;
	cout << "Pointer of v is : " <<*v<<endl;
	
	incr(num);
	cout <<"Num is "<<num<<endl;
	increase(num);
	cout <<"Num is "<<num<<endl;
	*/
	
	int x = 2, y = 3;
	cout <<"x is " <<x <<"y is " <<y <<endl;
	swap(x,y);
	cout <<"x is " <<x <<"y is " <<y <<endl;
	int z = 6;
	sort (x,y,z);
}

void sort(int &a, int & b, int &c)
{
	if (a > b) swap(a,b);
	if (a > c) swap(a,c);
	if (b > c) swap(b,c);
}
void swap (int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void increase(int & a)
{
	a++;
}

void incr(int a)
{
	a++;
}

void 
