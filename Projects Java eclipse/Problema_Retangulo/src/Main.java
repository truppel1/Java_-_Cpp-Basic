import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in); 
	
		double base, altura, area, perimetro, diagonal, raiz;
		
	System.out.print("Base do retangulo: ");
	base = sc.nextDouble();
	
	System.out.print("Altura do retangulo: ");
	altura = sc.nextDouble(); 
	
	area = base * altura;
	perimetro = base + base + altura + altura;
	raiz = (base * base) + (altura * altura);
	diagonal = Math.sqrt(raiz);
			
	System.out.println("AREA = " + String.format("%.4f", area));
	System.out.println("PERIMETRO = " + String.format("%.4f", perimetro));
	System.out.println("DIAGONAL = " + String.format("%.4f", diagonal));
				
	
		sc.close();

	}
	}
