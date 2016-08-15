import java.util.Scanner;

public class TimeLoop
{
	public static void main(String[]args)
	{
		Scanner in = new Scanner(System.in);
		String s = "Abracadabra";
		int n = in.nextInt();
		for(int i=1; i<=n; ++i) System.out.println(i + " " + s);
	}
}