#include <bits/stdc++.h>

using namespace std;

int main () 
{
    int N;
    double media;


    cout << "Welcome to the registrador." << endl;
    cin >> N;

    string Nome [N];
    int idade [N];
    double altura [N];

    for (int i = 0; i < N; i++) {
        cout << "Nome da" << i + 1 << " pessoa." << endl;
        cin.ignore(INT_MAX, '\n');
        getline(cin,Nome[i]);
        cout << "idade";
        cin >> idade [i];
        cout << "Altura";
        cin >> altura[i];
        
        for (int i = 0; i < N; i++) {

        }

    }
}