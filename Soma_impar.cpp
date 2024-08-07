#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int x, y, soma, troca;

    cout << "Enter two numbers" << endl;
    cin >> x >> y;

    if (x > y) {
        troca = x;
        x = y;
        y = troca;
    }

    soma = 0;
    for (int i = x+1; i < y; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }
    
    cout << "A soma dos numeros impares e de " << soma << endl;
}