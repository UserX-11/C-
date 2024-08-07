#include <bits/stdc++.h>

using namespace std;

int main ()
{
    
    int a, b, c, menor;

    cout << " Menor que " << endl;
    cout << "Digite o primeiro numero" << endl;
    cin >> a;

    cout << "Digite o Segundo numero" << endl;
    cin >> b;

    cout << "Digite o Terceiro numero" << endl;
    cin >> c;

    if (a < b && a < c) {
        menor = a;
    }
    else if (b < c)
    {
        menor = b;
    }
    else {
        menor = c;
    }

    cout << "O menor numero digitado foi = " << menor << endl;

    return 0;
    
}