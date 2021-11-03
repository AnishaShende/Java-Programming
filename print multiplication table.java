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
		
		for (int i = 1; i <= 10; i++) {
		    System.out.println(a+" x "+i+"="+i*a);
		}
	}
}
