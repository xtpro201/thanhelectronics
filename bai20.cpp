//code by xtpro
#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n == 1 || n == 0 || n == 2 || n == 3) return n;
    return fibonacci(n - 2) + fibonacci(n - 1);
}
int main()
{
    int i, n, d = 0;
        cout << "n = ";
        cin >> n;
        for (i = 0; i <= n; i++)
            if (n == fibonacci(i))
            {
                d++;
            }
        if (d == 1) cout << n << " thuoc day fibonacci";
        else cout << " khong thuoc day fibonacci";
}