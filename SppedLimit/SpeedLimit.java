import java.util.Scanner;

public class SpeedLimit
{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n, s, t, old=0, sum=0;
		n = in.nextInt();
		while(n != -1) {
			for(int i=0; i<n; ++i) {
				s = in.nextInt();
				t = in.nextInt();
				int tmp = t;
				t -= old;
				sum = sum + (s*t);
				old = tmp;
			}
			System.out.println(sum + " miles");
			old = 0;
			sum = 0;
		n = in.nextInt();
		}
	}
}