#include <bits/stdc++.h>

using namespace std;

int main()
{

    double base, altura, area, perimetro, raiz, diagonal;

    cout << "Base do retangulo: ";
    cin >> base;

    cout << "Altura do retangulo: ";
    cin >> altura;

    area = 0;
    perimetro = 0;
    diagonal = 0;
    raiz = 0;

    area = base * altura;
    perimetro = (base + altura) * 2;
    raiz = pow(base, 2.0) + pow(altura, 2.0);
    diagonal = sqrt(raiz);

    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;
    cout << "PERIMETRO = " << perimetro << endl;
    cout << "DIAGONAL = " << diagonal << endl;



    return 0;
}
