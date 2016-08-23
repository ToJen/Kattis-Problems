/**
 ** @author TOMISIN JENROLA
 ** @date   23-AUG-2016
 */

import java.util.Scanner;

public class Spavanac
{
	public static void main(String[] args) {

		// long startTime = System.nanoTime();

		Scanner in = new Scanner(System.in);
		int h = in.nextInt();
		int m = in.nextInt();

		if(m<45) {
			if(h==0) h = 24;
			System.out.println( --h + " " + (60-(45-m)) );
		}
		else {
			System.out.println( h + " " + (m-45) );
		}


		// long endTime = System.nanoTime();
		// System.out.println("That took " + ((endTime - startTime)/1000000) + " milliseconds");
		// // long duration = (endTime - startTime);


	}
}