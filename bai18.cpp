//code by xtpro
#include<iostream>
using namespace std;
bool check(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n) return true; 
    return false;
}
int main() {
    int n;
    while (true)
    {
        cout << "\nNhap n: ";
        cin >> n;
        if (check(n))
            cout << n << " la so hoan hao.";
        else
            cout << n << " khong la so hoan hao.";
    }
    return 0;
}