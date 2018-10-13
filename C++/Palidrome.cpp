#include <iostream>
using namespace std;

int main()
{
    int a,num,b,rev=0;
    cout << "\nPlease enter a number";
    cin >> num;
    b = num;
    while( num > 0)
    {
    a = num % 10;
     rev = (rev * 10) + a;
    num= num / 10;
   
    }
   
    if( b == rev){
    cout << "\nit is a palindrome" << endl;
    }
    else{
    cout << "\nit is not a palindrome" << endl;
    }
    return 0;
}
