using System;

namespace menor_de_tres {
    class Program {
        static void Main(string[] args) {

            int x, y, z, menor;
            menor = 0;

            Console.Write("Primeiro Valor: ");
            x = int.Parse(Console.ReadLine());

            Console.Write("Segundo Valor: ");
            y = int.Parse(Console.ReadLine());

            Console.Write("Terceiro Valor: ");
            z = int.Parse(Console.ReadLine());

            if (x < y && x < z) {
                menor = x;
            }
            else if (y < z) {
                menor = y;
            }
            else {
                menor = z;
            }

            Console.WriteLine("MENOR = " + menor);


        }
    }
}
