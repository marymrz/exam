#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int num;
cout<<"enter number to show the month:";
cin>>num;
switch(num){
	case 1: cout<<"it is farvardin";
	break;
	case 2: cout<<"it is ordibehesht";
	break;
	case 3: cout<<"it is khordad";
	break;
	case 4: cout<<"it is tir";
	break;
	case 5: cout<<"it is mordad";
	break;
	case 6: cout<<"it is shahrivar";
	break;
	case 7: cout<<"it is mehr";
	break;
	case 8: cout<<"it is aban";
	break;
	case 9: cout<<"it is azar";
	break;
	case 10: cout<<"it is dey";
	break;
	case 11: cout<<"it is bahman";
	break;
	case 12: cout<<"it is esfand";
	break;
	default:cout<<"it is wrong number";
}
getch();
}
