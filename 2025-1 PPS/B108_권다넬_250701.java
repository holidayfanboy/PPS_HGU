import java.util.*;

public class B108_권다넬_250701 {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        Hashtable<String, String> table = new Hashtable<>();
        int N = scanner.nextInt();
        int M = scanner.nextInt();
        scanner.nextLine(); 

        int match = 0;
        for (int i = 0; i < N; i++) {
            String input = scanner.nextLine();
            table.put(input, input);
        }

        for (int i = 0; i < M; i++) {
            String input = scanner.nextLine();
            if (table.containsKey(input)) {
                match++;
            }
        }

        System.out.println(match);
        scanner.close();
    }
}
