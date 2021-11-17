//using just 3 varibles

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* write the fibonacci function here*/
long long fibonacci(int n)
{
            long long a=0,b=1,f=0;
            if (n == 0) return 0; //To return the first Fibonacci number   
            if (n == 1) return 1; //To return the second Fibonacci number   
   
   
            for (int i = 2; i <= n; i++)  
            {  
                f = a + b;  
                a = b;  
                b = f;  
            }  
   
            return f;  
}


int main() {
    int n;
  	cin>>n;
  	cout<<fibonacci(n)<<endl;
    return 0;
}
