import java.util.*;

public class A1620_권다넬_250703 {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        Hashtable<String, Integer> table = new Hashtable<>();
        int N = scanner.nextInt();
        int M = scanner.nextInt();
        String[] Pokemon = new String[N+1];
        scanner.nextLine(); 

        for (int i = 1; i <= N; i++) {
            String input = scanner.nextLine();
            table.put(input, i);
            Pokemon[i] = input;
        }

        for (int k = 0; k < M; k++) {
            String input = scanner.nextLine();
            try {
                int A = Integer.parseInt(input);
                System.out.println(Pokemon[A]);
            } catch(NumberFormatException e) {
                int result = table.get(input);
                System.out.println(result);                
            }
        }

        scanner.close();
    }
}
