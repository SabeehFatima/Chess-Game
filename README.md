
## About
This is a simple console-based Chess Game implemented in C++ using the Code::Blocks IDE. The game features an interactive chessboard display and supports basic chess moves, including legal move validation for different pieces. Players can play in a turn-based manner and save/load their progress.

## Features
- Displays an interactive chessboard using ASCII characters.
- Implements move validation for all chess pieces.
- Supports saving and loading game states.
- Two-player turn-based gameplay.

## Main Functions Overview

### `print_chess_board(int dim, char a)`
Prints the chessboard on the console with a given character for borders.

### `declareArray(int dim, char A[])`
Initializes an array to store the chessboard state.

### `print_in_Array(int dim, char A[])`
Fills the array with initial chess piece positions following standard chess rules.

### `Print_on_board(int dim, char A[])`
Displays the chess pieces on the board according to the array.

### `display_Array(int i, int j, int rt, int ct, char A[], int dim)`
Updates the display after a move is made.

### `UpdateArray(int i, int j, int rt, int ct, char A[], int ri, int ci, int dim)`
Updates the internal board state after a move is made.

### `Rook1(int ri, int ci, int rt, int ct, int dim, char A[], int turn)` and `Rook2(...)`
Validates legal moves for the rooks.

### `Knight(int ri, int ci, int rt, int ct)`
Validates legal moves for the knights.

### `Pawnmoves1(...)` and `Pawnmoves2(...)`
Validates legal moves for pawns, including their initial double-step move.

### `Bishop1(...)` and `Bishop2(...)`
Validates legal moves for bishops.

### `King(int ri, int ci, int rt, int ct)`
Validates legal moves for the king.

### `Queen(int ri, int ci, int rt, int ct)`
Validates legal moves for the queen.

### `Askformove1(int dim, char A[])` and `Askformove2(int dim, char A[])`
Handles player moves, including user input and move validation.

### `save_game(char A[])`
Saves the current game state to a file.

### `load_game(char A[])`
Loads a previously saved game state from a file.

### `main()`
The entry point of the program, handling game initialization, player turns, and game saving/loading.

## How to Run the Project
1. Open the project in Code::Blocks.
2. Compile and run `main.cpp`.
3. Follow on-screen instructions to play.

## How to Push to GitHub
```sh
# Initialize a Git repository
git init

# Add files to the repository
git add .

# Commit the files
git commit -m "Initial commit: Chess Game"

# Create a new repository on GitHub and copy its URL

# Link your local repository to GitHub
git remote add origin <your-repository-url>

# Push the files to GitHub
git push -u origin main
```
```

