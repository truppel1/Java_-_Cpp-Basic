using System;
using System.Globalization;

namespace Boletim
{
    internal class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            double birth;
            double height;
            double wheight;
            double BMI;

            Console.Write("Birth year: ");
            birth = double.Parse(Console.ReadLine(), CI);
            Console.Write("Enter your current height in meters: ");
            height = double.Parse(Console.ReadLine(), CI);
            Console.Write("Enter your current wheight in kilograms: ");
            wheight = double.Parse(Console.ReadLine(), CI);

            double age = 2022 - birth;
            BMI = wheight / (Math.Pow(height, 2));
           

            if (BMI < 18.5) {
                Console.WriteLine("\nResult = You are " + age + " years old and your BMI is " + BMI.ToString("F1", CI) + ". you are thinness.");
            }
            else if (BMI > 18.5 && BMI < 24.9)
            {
                Console.WriteLine("\nResult = You are " + age + " years old and your BMI is " + BMI.ToString("F1", CI) + ". Congratulations you're fine, normal BMI.");
            }
            else if (BMI > 25.0 && BMI < 29.9)
            {
                Console.WriteLine("\nResult = You are " + age + " years old and your BMI is " + BMI.ToString("F1", CI) + ". You are overweight.");
            }
            else if (BMI > 30.0 && BMI < 39.9)
            {
                Console.WriteLine("\nResult = You are " + age + " years old and your BMI is " + BMI.ToString("F1", CI) + ". You are with obesity.");
            }
            else
            {
                Console.WriteLine("\nResult = You are " + age + " years old and your BMI is " + BMI.ToString("F1", CI) + ". You are with severe obesity.");
            }

            Console.WriteLine("\nBMI reference range below: ");
            Console.WriteLine("\nIf your BMI is less than 18.5, it falls within the underweight range." +
                " If your BMI is 18.5 to 24.9, it falls within the normal or Healthy Weight range. If your " +
                " BMI is 25.0 to 29.9, it falls within the overweight range. If your BMI is 30.0" +
                " or higher, it falls within the obese range.");
        }
    }
}
