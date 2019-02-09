#include <iostream>
#include <conio.h>
using namespace std;
int increment(int);
int x=2;
int main(){
	x=increment(x);
	cout<<x<<endl;
		x=increment(x);
	cout<<x<<endl;
}
int increment(int i){
	static int a=i;
	return ++i;
}
