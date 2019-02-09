#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int n,a=0,b=0,i,grade;
cin>>n;
for(i=1 ; i<=n ; i++){
	cin>>grade;
	if(grade>=10 && grade<=20)
	a++;
	else
	b++;
}
cout<<a<<b;


}


