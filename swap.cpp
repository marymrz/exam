#include <iostream>
#include <conio.h>
using namespace std;
void swap (int a,int b){
	int c;
	c=a;
	a=b;
	b=c;
	cout<<a<<"="<<'a'<<"\n";
	cout<<b<<"="<<'b'<<"\n";
}
int main(){ 
int x=12,y=15;
swap(x,y);
}
