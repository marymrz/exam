#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int a,b,c,max;
	cin>>a>>b>>c;
	max=a;
	if(max<b)
	max=b;
    if(max<c)
	max=c;
	if(max<a)
	max=a;
	cout<<max<<"="<<"max"<<endl;
	getch();
}
