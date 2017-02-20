#include <iostream>

using namespace std;

int silnia(int n){
    if(n==1) return 1;
    return n*silnia(n-1);
}

int main()
{
    int n;
    cout << "Podaj n: ";
    cin >> n;
    cout << "n!: " << silnia(n);
    return 0;
}
