#include <iostream>

using namespace std;

int main()
{

    int x, y, a, menor, loop;
    menor = 0;

    while ( loop != 0){

    cout << "Primeiro valor: ";
    cin >> x;
    cout << "Segundo valor: ";
    cin >> y;
    cout << "Terceiro valor: ";
    cin >> a;

    menor = a;

    if ( x < y && x < a ) {
        menor = x;
    }
    else if ( y < menor ) {
        menor = y;
    }
    else {
        menor = a;
    }

    cout << "MENOR = " << menor << endl;

    }

    return 0;
    }
