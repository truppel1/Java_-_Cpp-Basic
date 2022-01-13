#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

        int i, n;

        cout << "Quantas pessoas serao digitadas? ";
        cin >> n;

        string nome[n];
        double idade[n];
        double altura[n];


    for ( i = 0; i < n; i++) {
            cout << "Dados da " << i+1 << "a pessoa:" << endl;
            cout << "Nome: ";
            cin.ignore(INT_MAX, '\n');
            getline(cin, nome[i]);
            cout << "Idade: ";
            cin >> idade[i];
            cout << "Altura: ";
            cin >> altura[i];
    }


    double media, soma, conta, perc;
    media, soma, conta, perc = 0;

    for ( i = 0; i < n; i++) {
        soma = altura[i] + soma;
    }

    media = soma / n;

    cout << "\nAltura media: " << fixed << setprecision(2) << media << endl;

    for ( i = 0; i < n; i++) {
        if (idade[i] < 16){
            conta = conta + 1;
        }
    }

    perc = conta * 100 / n;

    cout << "Pessoas com menos de 16 anos: " << fixed << setprecision(1) << perc << "%" << endl;

    for (i = 0; i < n; i++) {
        if (idade[i] < 16){
        cout << nome[i] << endl;
        }
    }


    return 0;
}
