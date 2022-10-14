#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main() {
	srand(time(0));
	int a,b,c;
	a=rand()%100;
	b=rand()%100;
    c=rand()%100;
 int R=a+b-c;
 cout <<" a= "<< a << " b= " << b << " c= " << c << " a+b-c"<<R<<endl;
 if( a% 2==0) a++;
 if( b%2!=0)  b++;
 if( c%2==0) c++;
  cout <<" a= "<< a << " b= " << b << " c= " << c << " a+b-c"<<R<<endl;
 int x=10,y=5;
 if( a>y || a<x) {
 	a=rand()%x+y;

 }
 cout <<" a  = "<< a<<endl;
 	if( (b >=10 && b <20 ) || (b>=-10 && b <=0 ) || (b>=30 && b<=40 ) ) {
 		
 		b=rand()%10;
 
	 }
	 		cout <<" b= "<< b << endl;
	 	
 if(c%2==0 && c>10 || c%2!=0 && c < 10 ) {
 	c=rand()%10+10;
 	
 }
 cout <<" c= "<< c << endl;
	return 0;
}

