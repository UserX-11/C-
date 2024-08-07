#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string nome1, nome2;
    int idade1, idade2;
    double media;


    cout << "Insira dados das pessoas a baixo" << endl;
    cout << "Nome da primeira pessoa" << endl;
    getline(cin, nome1);
    cout << "Agora insira a idade da primeira pessoa" << endl;
    cin >> idade1;
    cout << "Agora o nome da segunda pessoa" << endl;
    cin.ignore(INT_MAX, '\n');
    getline(cin,nome2);
    cout << "Idade da segunda pessoa" << endl;
    cin >> idade2;

    media = (double) (idade1 + idade2) / 2.0;


    cout << fixed << setprecision(1);
    cout << "A media de idade entre " << nome1 <<  " e " << nome2 << " e de " << media << " anos " << endl;
    
    return 0;

}