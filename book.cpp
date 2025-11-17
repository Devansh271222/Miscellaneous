#include<iostream>
using namespace std;
int main(){
	double n,m;
	cout<<"Welcome"<<endl;
	cout<<"Enter the pages you've read: ";
	cin>>n;
	cout<<"Enter the total pages in the book: ";
	cin>>m;
	double r = n/m;
	double result = r*100;
	cout<<"You have read "<<result<<"% of the book"<<endl<<"Happy Reading";
	
}
