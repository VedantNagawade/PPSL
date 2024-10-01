#include <iostream>
using namespace std;

int main() {
int n,sum=0;

//Input the value of n frome the user 
cout <<"Enter a positive integer :"<<endl;
cin>>n;

//calculate the sum of natural number from 1ton
for (int i=1; i<=n; i++)
{
  sum +=i ;
}

//Display the result 
cout <<"The sum of nutural from 1 to " <<n <<" is: "<<
sum  <<endl;

    
return 0;
}