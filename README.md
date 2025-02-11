
# Chess Game (C++)

## About
This is a simple console-based Chess Game implemented in C++ using the Code::Blocks IDE. It features an interactive ASCII chessboard and allows two players to play with proper move validation, saving, and loading functionality.

## Features
- 🎨 Displays an ASCII chessboard.
- ✅ Validates moves for all chess pieces.
- 💾 Save & Load game progress.
- 👫 Two-player mode.

## Main Functions
- **print_chess_board(dim, a)** - Draws the chessboard.
- **print_in_Array(dim, A)** - Initializes the board with pieces.
- **Print_on_board(dim, A)** - Displays the board on-screen.
- **UpdateArray(i, j, rt, ct, A, ri, ci, dim)** - Updates board state after a move.
- **Askformove1(dim, A) / Askformove2(dim, A)** - Takes input for each player's move.
- **save_game(A) / load_game(A)** - Handles game save/load.
- **main()** - Runs the game loop, handles player turns and saving/loading.

## How to Run
1. Open in Code::Blocks.
2. Compile & run `main.cpp`.
3. Follow on-screen prompts to play.

## Push to GitHub
```sh
# Initialize repo
git init

# Add files
git add .

# Commit changes
git commit -m "Initial commit: Chess Game"

# Link to GitHub
git remote add origin <your-repo-url>

# Push to GitHub
git push -u origin main
```
♟️ Enjoy your game! 🚀

