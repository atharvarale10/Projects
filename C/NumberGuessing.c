import java.util.*;

public class NumberGuessing {

	public static void main(String[] args) {
		
		Random rand = new Random();
		Scanner scanner = new Scanner(System.in);

		int randomNumber = rand.nextInt(100) + 1;
		while(true) {
			System.out.println("Enter your guess (1-100): ");

			int playerGuess = scanner.nextInt();

			if(playerGuess == randomNumber) {
				System.out.println("Correct!! You Win!!");
				break;
			}
			else if(randomNumber > playerGuess) {
				System.out.println("Your guess is Lower. Guess again!" );
			}
			else {
				System.out.println("Your guess is Higher. Guess again!" );
			}
		}
	}

}
