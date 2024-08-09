#include <bits/stdc++.h>

using namespace std;

int main () 
{
    int N, soma;
    double porcent;


    cout << "Welcome to the registrador." << endl;
    cout << "how many people do you want registred ?" << endl;
    cin >> N;

    string Nome [N];
    int idade [N];
    double altura [N];

    for (int i = 0; i < N; i++) {
        cout << "Nome da " << i + 1 << " pessoa." << endl;
        cin.ignore(INT_MAX, '\n');
        getline(cin,Nome[i]);
        cout << "idade" << endl;
        cin >> idade [i];
        cout << "Altura" << endl;
        cin >> altura[i];
    }

    soma = 0;
    for (int i = 0; i < N; i++) {
        if (idade[i] < 16) {
            soma++;
        }
    }

    porcent = soma * 100.0 / N;

    
    for (int i = 0; i < N; i++) {
        if (idade[i] < 16) {
            cout << "Esta pessoas " << Nome[i] << " possui menos de 16 anos." << endl; 
        }
    }

    cout << "O percentual de menores de idade e de " << porcent << "%" << endl;

}