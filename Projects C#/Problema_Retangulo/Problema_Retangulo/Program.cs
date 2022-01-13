using System;
using System.Globalization;

namespace Problema_Retangulo {
    class Program {
        static void Main(string[] args) {
            CultureInfo CI = CultureInfo.InvariantCulture;

            double b, altura, area, perimetro, diagonal, raiz;

            Console.Write("Base do retangulo: ");
            b = double.Parse(Console.ReadLine(), CI);

            Console.Write("Altura do retangulo: ");
            altura = double.Parse(Console.ReadLine(), CI);

            area = b * altura;
            perimetro = (b * 2) + (altura * 2);
            raiz = (b * b) + (altura * altura);
            diagonal = Math.Sqrt(raiz);

            Console.WriteLine("AREA = " + area.ToString("F4", CI));
            Console.WriteLine("PERIMETRO = " + perimetro.ToString("F4", CI));
            Console.WriteLine("DIAGONAL = " + diagonal.ToString("F4", CI));

        }
    }
}
