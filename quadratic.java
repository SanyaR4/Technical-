import java.util.*;
public class Main
{
    static int a;
    static int b;
    static int c;
    static int quadratic()
    {
        float d=((b*b)-(4*a*c));
        double x1=((-b)+(Math.sqrt(d)/(2*a)));
        double x2=((-b)+(Math.sqrt(d)/(2*a)));
        System.out.println(x1);
        System.out.println(x2);
        if(d==0)
        System.out.println("Real and Equal roots");
        else if(d>0)
        System.out.println("Real and Distinct roots");
        else
        System.out.println("Imaginary roots");
        return 0;
    }
	public static void main(String[] args) 
	{
	    Scanner scan =new Scanner(System.in);
	    a=scan.nextInt();
	    b=scan.nextInt();
	    c=scan.nextInt();
	    quadratic();
	}
}
