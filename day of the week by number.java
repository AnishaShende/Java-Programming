/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number : ");
		int a = sc.nextInt();
		switch (a) {
		case 1:
		   System.out.println("Monday");
		   break;
		case 2:
		    System.out.println("Tuesday");
		    break;
		case 3:
		    System.out.println("Wednesday");
		    break;
		case 4:
		    System.out.println("Thrusday");
		    break;
		case 5:
		    System.out.println("Friday");
		    break;
		case 6:
		    System.out.println("Saturday");
		    break;
		case 7:
		    System.out.println("Sunday");
		    break;
		}
	}
}
