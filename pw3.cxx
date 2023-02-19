#include <iostream>

using namespace std;

int main(){
    
  {int sum =0;
for (int i=1;i<=5;i++){
	sum=sum+i;
	
}//1+2+3+4+5
	
	cout<< sum; //15
int ans=0;
int p=1;
for (;sum>0;){
	int pa=sum%2;  // 1
	ans += p*pa;       //1+
	p *= 10;
	sum /=2;
	
}
cout <<ans<<endl;}
// output. 151111

{//qsn2
int n;
int cnt=0;
cout <<"enter the number:";
cin>> n;
while(n>0){ 
int pa = n%2;
if( pa==0){ 
cnt++;}
{ n/=2;}}

 cout<<"The number of zeroes is:"<<cnt<<endl;
 }
 //qsn3
 {
 
 int num1 ;
 int num2; 
 cout<<"Enter the two binary numbers:";
 cin >>num1>> num2;
 int pe=1;
 int d1 = 0;
 int d2=0;
 while(num1>0){
 	int u_d= num1*10;
 	d1 += pe* u_d;
 	num1 /=10;
 	pe*=2;}
  while(num2>0){
 	int u_d= num1*10;
 	d1 += pe* u_d;
 	num1/=10;
 	pe*=2;}
 	 
 	 //compare
 	 if (d1>d2){  cout <<" greater number is "<< d1;}
 	 else {   cout <<" greater number is "<< d2;}
 	 
 }}