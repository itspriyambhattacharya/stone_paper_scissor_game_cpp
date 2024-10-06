# Stone Paper Scissors Game

This is a simple command-line Stone-Paper-Scissors game implemented in C++. It allows the user to compete against the computer, which generates random moves each round. The game continues until either the user or the computer reaches the specified max score.

## Features

- **Single-player Mode**: Play against the computer with randomized moves.
- **Scoring System**: The game keeps track of scores for both the player and the computer.
- **Win or Lose Outcome**: A congratulatory message is displayed if the user wins, and a message of encouragement is displayed if the user loses.

## Game Rules

1. **Stone vs Scissors**: Stone wins.
2. **Scissors vs Paper**: Scissors win.
3. **Paper vs Stone**: Paper wins.
4. If both user and computer choose the same, it's a **draw**.

## How to Play

1. Clone this repository to your local machine.
2. Compile the code using a C++ compiler.
   ```bash
   g++ stone_paper_scissors.cpp -o stone_paper_scissors
   ```
3. Run the executable.
   ```bash
   ./stone_paper_scissors
   ```
4. Enter the maximum score for the game.
5. Choose your move:
   - Enter `1` for Stone.
   - Enter `2` for Paper.
   - Enter `3` for Scissors.
6. The computer will then make its move, and the result of each round will be displayed.
7. The game continues until the player or computer reaches the max score.

## Code Overview

- The `srand(time(0))` function seeds the random number generator, allowing the computer's choice to be randomized.
- The game loop continues until either the user's score or the computer's score reaches the max score.
- A series of `if` statements evaluate the moves and update the score accordingly.
- After a short pause, the final result is displayed based on the score comparison.

## Requirements

- **Operating System**: Windows (for `system("cls")` and `Sleep()` functions).
- **Compiler**: Any C++ compiler (e.g., GCC).

## Future Enhancements

- Adding support for a two-player mode.
- Improving the game UI for better player experience.
- Adding difficulty levels for a more challenging gameplay experience.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.
