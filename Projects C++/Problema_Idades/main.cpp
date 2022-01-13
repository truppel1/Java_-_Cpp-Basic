#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string nome1, nome2;
    double idade1, idade2, media;
    media = 0;

    cout << "Dados da primeira pessoa: \n";
    cout << "Nome: ";
    getline(cin, nome1);
    cout << "Idade: ";
    cin >> idade1;

    cout << "Dados da segunda pessoa: \n";
    cout << "Nome: ";
    cin.ignore(INT_MAX, '\n'); // ------------- limpeza de buffer
    getline(cin, nome2);
    cout << "Idade: ";
    cin >> idade2;

    media = (idade1 + idade2) / 2;

    cout << "A idade media de " << nome1 << " e " << nome2 << " e de " << media << " anos" << endl;

    return 0;
}
