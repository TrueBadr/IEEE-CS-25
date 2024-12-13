#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int fibonacci(int n) 
{
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n; cin >> n;
    cout << fibonacci(n);
    return 0;
}

// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
