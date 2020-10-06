#include <iostream>
#include<string>
using namespace std;
void binprint(int n,string& A )
{
    if (n<1)
    {
      cout<<A<<endl;
    }
    else
    {
        A[n-1]='0';
        binprint(n-1,A);
        A[n-1]='1';
        binprint(n-1,A);
    }
}

int main()
{   int n;
    cin>>n;
    string A(n,'0');
    binprint(n,A);
	return 0;
}
