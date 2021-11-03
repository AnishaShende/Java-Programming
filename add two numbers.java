/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	    //int a;
	    Scanner sc = new Scanner(System.in);
	    System.out.println("Enter a number : ");
	    int a = sc.nextInt();
	    System.out.println("Enter another number : ");
	    int b = sc.nextInt();
	    int c = a+b;
		System.out.println("Addition is "+c".");
	}
}
