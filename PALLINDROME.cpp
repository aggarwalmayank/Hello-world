#include<iostream.h>
using namespace std;
int main()
{
  int num;
  cin>>num;
  int r,n,sum=0;
  n=num;
  while(num!=0)
  {
    r=n%10;
    n=n/2;
    sum=(10*sum)+r;
  }
  if(sum==n)
    cout<<"number is pallindrome";
  return 0;
}
