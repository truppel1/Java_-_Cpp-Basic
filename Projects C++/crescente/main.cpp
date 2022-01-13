#include <iostream>

using namespace std;

int main()
{
    int loop;

    while (loop != 0)
    {

        int x, y;

        cout << "Digite dois numeros: \n";
        cin >> x;
        cin >> y;

        if ( x > y ){
            cout << "DECRESCENTE!\n";
        }
        else if (x < y){
            cout << "CRESCENTE!\n";
        }

        if ( x == y){
            loop = 0;
        }
    }

    cout << "\n FIM \n";

    return 0;
}
