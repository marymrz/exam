#include <iostream>
#include <conio.h>
using namespace std;
void print(string , string);
void print (string);
int main(){
	
	string firstname,lastname;
	cin>>firstname>>lastname;
print (firstname,lastname);
print(lastname);

}
void print( string strFname ,string strLname){
	cout<<strFname<<'\t'<<strLname<<'\n';
	
}
void print(string strLname){
	cout<<strLname;
}
