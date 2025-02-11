#include<iostream>
#include<windows.h>
using namespace std;
#include<conio.h>
#include<math.h>
#include<fstream>

void gotoRowCol(int rpos, int cpos)
{
    COORD scrn;
    HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
    scrn.X = cpos;
    scrn.Y = rpos;
    SetConsoleCursorPosition(hOuput, scrn);
}
//print chess board on the screen
void print_chess_board(int dim, char a)
{
    for (int r = 0; r <=dim *6; r++)
    {
        for (int c = 0; c <=dim *12; c++)
        {
            if (r % 6== 0 || c % 12 == 0)
            {
                gotoRowCol(r, c);
                cout << a;
            }
        }
    }
}
//declare array
void declareArray(int dim, char A[])
{
    for (int i = 0; i <dim * dim; i++)
    {
        A[i] = ' ';
    }
}

void print_in_Array(int dim, char A[]) {
// Initialize the first two rows
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= dim; j++) {
            int a = (i - 1) * dim + (j - 1);
            if (i == 1) {
                if (j == 1 || j == 8)
                    A[a] = 'R';
                else if (j == 2 || j == 7)
                    A[a] = 'N';
                else if (j == 3 || j == 6)
                    A[a] = 'B';
                else if (j == 4)
                    A[a] = 'K';
                else if (j == 5)
                    A[a] = 'Q';
            }
             else  if (i==2)
            {
                A[a] = 'P';
            }
        }
    }

    // Initialize the last two rows
    for (int i = dim - 1; i <= dim; i++) {
        for (int j = 1; j <= dim; j++) {
            int a = (i - 1) * dim + (j - 1);
            if (i == dim)
            {
                if (j == 1 || j == 8)
                    A[a] = 'r';
                else if (j == 2 || j == 7)
                    A[a] = 'n';
                else if (j == 3 || j == 6)
                    A[a] = 'b';
                else if (j == 4)
                    A[a] = 'k';
                else if (j == 5)
                    A[a] = 'q';
            }
            else  if (i == dim-1)
            {
                A[a] = 'p';
            }
        }
    }
}
//print values stored in array on board.
void Print_on_board(int dim,char A[])
{
    int row=3;
    int col=6;
    for (int i = 1; i <= dim; i++)
    {
        for (int j = 1; j <= dim; j++)
        {
             int a = (i - 1) * dim + (j - 1);
             gotoRowCol(row+(i-1)*6, col+(j-1)*12);
              cout << A[a];

        }
    }

}
//display the updated array on the screen.
void display_Array(int i, int j, int rt, int ct, char A[], int dim)
{
        int row = 3 + (rt - 1) * 6;
        int col = 6 + (ct - 1) * 12;
    if (A[j] == 'R')
    {
       gotoRowCol(row, col);
        cout << A[j];
    }
   else if (A[j] == 'N')
    {
       gotoRowCol(row, col);
        cout << A[j];
    }
   else if (A[j] == 'P')
    {
       gotoRowCol(row, col);
        cout << A[j];
    }
   else if (A[j] == 'B')
    {
       gotoRowCol(row, col);
        cout << A[j];
    }
    else if (A[j] == 'K')
    {
       gotoRowCol(row, col);
        cout << A[j];
    }
    else if (A[j] == 'Q')
    {
       gotoRowCol(row, col);
        cout << A[j];
    }
    if (A[j] == 'r')
    {
       gotoRowCol(row, col);
        cout << A[j];
    }
   else if (A[j] == 'n')
    {
       gotoRowCol(row, col);
        cout << A[j];
    }
   else if (A[j] == 'p')
    {
       gotoRowCol(row, col);
        cout << A[j];
    }
   else if (A[j] == 'b')
    {
       gotoRowCol(row, col);
        cout << A[j];
    }
    else if (A[j] == 'k')
    {
       gotoRowCol(row, col);
        cout << A[j];
    }
    else if (A[j] == 'q')
    {
       gotoRowCol(row, col);
        cout << A[j];
    }
}

//update array after a valid move
void UpdateArray(int i, int j, int rt, int ct, char A[],int ri, int ci, int dim)
{
     int row = 3 + (ri - 1) * 6;
     int col = 6 + (ci - 1) * 12;

    if (A[i] == 'R')
    {
        A[j] = A[i];
        A[i] = ' ';
        gotoRowCol(row, col);
        cout <<A[i];
    }
    else if (A[i] == 'N')
    {
        A[j] = A[i];
        A[i] = ' ';
        gotoRowCol(row, col);
        cout <<A[i];
    }
     else if (A[i] == 'P')
    {
        A[j] = A[i];
        A[i] = ' ';
        gotoRowCol(row, col);
        cout <<A[i];
    }
     else if (A[i] == 'B')
    {
        A[j] = A[i];
        A[i] = ' ';
        gotoRowCol(row, col);
        cout <<A[i];
    }
     else if (A[i] == 'K')
    {
        A[j] = A[i];
        A[i] = ' ';
        gotoRowCol(row, col);
        cout <<A[i];
    }
    else if (A[i] == ' Q')
    {
        A[j] = A[i];
        A[i] = ' ';
        gotoRowCol(row, col);
        cout <<A[i];
    }

    if (A[i] == 'r')
    {
        A[j] = A[i];
        A[i] = ' ';
        gotoRowCol(row, col);
        cout <<A[i];
    }
    else if (A[i] == 'n')
    {
        A[j] = A[i];
        A[i] = ' ';
        gotoRowCol(row, col);
        cout <<A[i];
    }
     else if (A[i] == 'p')
    {
        A[j] = A[i];
        A[i] = ' ';
        gotoRowCol(row, col);
        cout <<A[i];
    }
     else if (A[i] == 'b')
    {
        A[j] = A[i];
        A[i] = ' ';
        gotoRowCol(row, col);
        cout <<A[i];
    }
    else if (A[i] == 'k')
    {
        A[j] = A[i];
        A[i] = ' ';
        gotoRowCol(row, col);
        cout <<A[i];
    }
    else if (A[i] == 'q')
    {
        A[j] = A[i];
        A[i] = ' ';
        gotoRowCol(row, col);
        cout <<A[i];
    }
}
//Legal move for rook 1.
int Rook1(int ri, int ci, int rt, int ct, int dim, char A[], int turn)
{
    int i = (ri - 1) * dim + (ci - 1);
    int j = (rt - 1) * dim + (ct - 1);

    if (ct == ci || rt == ri)
    {
        if (A[i] == 'R')
      {
        int rowDir = (rt - ri) / abs(rt - ri);
        int colDir = (ct - ci) / abs(ct - ci);

        int currRow = ri + rowDir;
        int currCol = ci + colDir;

        while (currRow != rt || currCol != ct)
        {
            int currIndex = (currRow - 1) * dim + (currCol - 1);

            if (A[currIndex] != ' ')
            {
                // There is a piece in the way
                turn = 1;
                return turn;
            }

            currRow += rowDir;
            currCol += colDir;
        }

            for (int k = 1; k <= dim - 1; k++)
            {
                int index = i + k * dim;

                if (index < 0 || index >= dim * dim)
                {
                    turn = 1;
                }
                else
                {
                    if (A[index] == ' ' || A[index] == 'p' || A[index] == 'r' || A[index] == 'n' || A[index] == 'q' || A[index] == 'k' || A[index] == 'b')
                    {
                        turn = 0;
                    }
                }
            }
        }
    }
    return turn;
}
int Rook2(int ri, int ci, int rt, int ct, int dim, char A[], int turn)
{
    int i = (ri - 1) * dim + (ci - 1);
    int j = (rt - 1) * dim + (ct - 1);

    if (ct == ci || rt == ri)
    {
        if (A[i] == 'r')
       {
        int rowDir = (rt - ri) / abs(rt - ri);
        int colDir = (ct - ci) / abs(ct - ci);

        int currRow = ri + rowDir;
        int currCol = ci + colDir;

        while (currRow != rt || currCol != ct)
        {
            int currIndex = (currRow - 1) * dim + (currCol - 1);

            if (A[currIndex] != ' ')
            {
                // There is a piece in the way
                turn = 1;
                return turn;
            }

            currRow += rowDir;
            currCol += colDir;
        }

            for (int k = 1; k <= dim - 1; k++)
            {
                int index = i + k * dim;

                if (index < 0 || index >= dim * dim)
                {
                    turn = 1;
                }
                else
                {
                    if (A[index] == ' ' || A[index] == 'p' || A[index] == 'r' || A[index] == 'n' || A[index] == 'q' || A[index] == 'k' || A[index] == 'b')
                    {
                        turn = 0;
                    }
                }
            }
        }
    }
    return turn;
}


 //Legal move of knights
int Knight(int ri,int ci,int rt,int ct)
{
     int turn;
     if ((abs(rt - ri) == 2 && abs(ct - ci) == 1) || (abs(rt - ri) == 1 && abs(ct - ci) == 2))
     {
       turn =0;  // Valid knight move
     }
     else
     {
        turn=1;//Invalid knight moves
     }
     return turn;

}

//Legal moves of pawn 1.
int Pawnmoves1(int ri, int ci, int dim, int rt, int ct, char A[], int& PawnCount, int turn)
{
    int i=(ri-1)*dim+(ci-1);

    if (A[i] == 'P')
    {
        // Check for valid pawn moves based on the first move or subsequent moves
        if (PawnCount == 0)
        {
            // First move, allow two steps forward
            if (ct == ci && (rt == ri + 1 || rt == ri + 2) && A[i + dim] == ' ' && A[i + 2 * dim] == ' ')
            {
                turn = 0;
                PawnCount=1; // Set PawnCount to 1 for subsequent moves
            }
            else
            {
                // Invalid move for the first move
                turn = 1;
            }
        }
        else
        {
            // After the first move, allow one step forward or capture diagonally
            if (ct == ci && rt == ri + 1 && A[i + dim] == ' ')
            {
                turn = 0;
            }
            // Capture diagonally
            if (rt == ri + 1 && (ct == ci + 1 || ct == ci - 1))
            {
                int capIndex = (rt - 1) * dim + (ct - 1);

                if (A[capIndex] != ' ')
                {
                    turn = 0;
                }
            }
        }
    }

    return turn;
}
int Pawnmoves2(int ri, int ci, int dim, int rt, int ct, char A[], int& PawnCount, int turn)
{
    int i = (ri - 1) * dim + (ci - 1);

    if (A[i] == 'p')
    {
        // Check for valid pawn moves based on the first move or subsequent moves
        if (PawnCount == 0)
        {
            // First move, allow two steps forward
            if (ct == ci && (rt == ri - 1 || rt == ri - 2) && A[i - dim] == ' ' && A[i - 2 * dim] == ' ')
            {
                turn = 0;
                PawnCount = 1; // Set PawnCount to 1 for subsequent moves
            }
            else
            {
                // Invalid move for the first move
                turn = 1;
            }
        }
        else
        {
            // After the first move, allow one step forward or capture diagonally
            if (ct == ci && rt == ri - 1 && A[i - dim] == ' ')
            {
                turn = 0;
            }
            // Capture diagonally
            if (rt == ri - 1 && (ct == ci + 1 || ct == ci - 1))
            {
                int capIndex = (rt - 1) * dim + (ct - 1);

                if (A[capIndex] != ' ')
                {
                    turn = 0;
                }
            }
        }
    }

    return turn;
}

//Legal move of bishops.
int Bishop1(int ri, int ci, int dim, int rt, int ct, char A[])
{
    int turn;
    // Check if the move is diagonal
    if(abs(rt-ri)==abs(ct-ci))
    {
        // Check if there is any piece in the way
        int rowDir = (rt - ri) / abs(rt - ri);
        int colDir = (ct - ci) / abs(ct - ci);

        int currRow = ri + rowDir;
        int currCol = ci + colDir;

        while (currRow != rt || currCol != ct)
        {
            int currIndex = (currRow - 1) * dim + (currCol - 1);

            if (A[currIndex] != ' ')
            {
                // There is a piece in the way
                turn = 1;
                return turn;
            }

            currRow += rowDir;
            currCol += colDir;
        }

        // Check if the destination square is empty or contains an opponent's piece
        int j= (rt - 1)* dim+(ct - 1);
        if (A[j]== ' ' || A[j] == 'p' || A[j] == 'n' || A[j] == 'q' || A[j] == 'r' || A[j] == 'b' || A[j] == 'k')
        {
            // Valid move
            turn = 0;
        }
        else
        {
            // Destination square is occupied by a friendly piece
            turn = 1;
        }
    }
    else
    {
        // Not a diagonal move
        turn = 1;
    }

    return turn;
}
int Bishop2(int ri, int ci, int dim, int rt, int ct, char A[])
{
    int turn;
    // Check if the move is diagonal
    if(abs(rt-ri)==abs(ct-ci))
    {
        // Check if there is any piece in the way
        int rowDir = (rt - ri) / abs(rt - ri);
        int colDir = (ct - ci) / abs(ct - ci);

        int currRow = ri + rowDir;
        int currCol = ci + colDir;

        while (currRow != rt || currCol != ct)
        {
            int currIndex = (currRow - 1) * dim + (currCol - 1);

            if (A[currIndex] != ' ')
            {
                // There is a piece in the way
                turn = 1;
                return turn;
            }

            currRow += rowDir;
            currCol += colDir;
        }

        // Check if the destination square is empty or contains an opponent's piece
        int j= (rt - 1)* dim+(ct - 1);
        if (A[j]== ' ' || A[j] == 'P' || A[j] == 'N' || A[j] == 'Q' || A[j] == 'R' || A[j] == 'B' || A[j] == 'K')
        {
            // Valid move
            turn = 0;
        }
        else
        {
            // Destination square is occupied by a friendly piece
            turn = 1;
        }
    }
    else
    {
        // Not a diagonal move
        turn = 1;
    }

    return turn;
}
// Legal move for king
int King(int ri, int ci, int rt, int ct)
{
    int turn;
    if (abs(rt - ri) <= 1 && abs(ct - ci) <= 1)
    {
        turn = 0; // Valid king move
    }
    else
    {
        turn = 1; // Invalid king move
    }
    return turn;
}
int Queen(int ri, int ci, int rt, int ct)
{
    // Check if the move is along a horizontal, vertical, or diagonal path
    if (ri == rt || ci == ct || abs(rt - ri) == abs(ct - ci))
    {
        return 0; // Valid move for the queen
    }
    else
    {
        return 1; // Invalid move for the queen
    }
}


//Getting input for the first  player to move
void Askformove1(int dim, char A[])
{
    int PawnCount = 0;
    int ri, ci, rt, ct;
    gotoRowCol(5, 98);
    cout << "PLAYER 1" << endl;

    gotoRowCol(8, 98);
    cout << "Enter row: ";
    cin >> ri;
    gotoRowCol(9, 98);
    cout << "Enter column: ";
    cin >> ci;

    gotoRowCol(10, 98);
    cout << "Enter row to move: ";
    cin >> rt;
    gotoRowCol(11, 98);
    cout << "Enter column to move: ";
    cin >> ct;

    if (ri > 0 && ci > 0 && ri <= dim && ci <= dim && rt > 0 && ct > 0 && rt <= dim && ct <= dim)
    {
        int i = (ri - 1) * dim + (ci - 1);
        int j = (rt - 1) * dim + (ct - 1);

        if (A[i] == 'R')
        {
            int turn = Rook1(ri, ci, dim, rt, ct, A, turn);
            if (turn == 0)
            {
                UpdateArray(i, j, rt, ct, A, ri, ci, dim);
                display_Array(i, j, rt, ct, A, dim);
            }
            else
            {
                gotoRowCol(12, 98);
                cout << "Rook cannot move from here" << endl;
            }
        }
        else if (A[i] == 'N')
        {
            int turn = Knight(ri, ci, rt, ct);
            if (turn == 0)
            {
                UpdateArray(i, j, rt, ct, A, ri, ci, dim);
                display_Array(i, j, rt, ct, A, dim);
            }
            else
            {
                gotoRowCol(12, 98);
                cout << "Knight cannot move from here" << endl;
            }
        }
        else if (A[i] == 'P')
        {
            int turn = Pawnmoves1(ri, ci, dim, rt, ct, A, PawnCount, turn);
            if (turn == 0)
            {
                UpdateArray(i, j, rt, ct, A, ri, ci, dim);
                display_Array(i, j, rt, ct, A, dim);
            }
            else
            {
                gotoRowCol(12, 98);
                cout << "Pawn cannot move from here" << endl;
            }
        }
        else if (A[i] == 'B')
        {
            int turn = Bishop1(ri, ci, dim, rt, ct, A);
            if (turn == 0)
            {
                UpdateArray(i, j, rt, ct, A, ri, ci, dim);
                display_Array(i, j, rt, ct, A, dim);
            }
            else
            {
                gotoRowCol(12, 98);
                cout << "Bishop cannot move from here" << endl;
            }
        }
        else if (A[i] == 'K')
        {
            int turn = King(ri, ci, rt, ct);
            if (turn == 0)
            {
                UpdateArray(i, j, rt, ct, A, ri, ci, dim);
                display_Array(i, j, rt, ct, A, dim);
            }
            else
            {
                gotoRowCol(12, 98);
                cout << "king cannot move from here" << endl;
            }
        }
        else if (A[i] == 'Q')
        {
            int turn = Queen(ri, ci, rt, ct);
            if (turn == 0)
            {
                UpdateArray(i, j, rt, ct, A, ri, ci, dim);
                display_Array(i, j, rt, ct, A, dim);
            }
            else
            {
                gotoRowCol(12, 98);
                cout << "Queen cannot move from here" << endl;
            }
        }
    }
    else
    {
        gotoRowCol(12, 98);
        cout << "Invalid input. Try Again!" << endl;
    }
}
void Askformove2(int dim, char A[])
{
    int PawnCount=0;
    int ri, ci, rt, ct;
    gotoRowCol(43, 98);
    cout << "PLAYER 2" << endl;

    gotoRowCol(44, 98);
    cout << "Enter row: ";
    cin >> ri;
    gotoRowCol(45, 98);
    cout << "Enter column: ";
    cin >> ci;

    gotoRowCol(46, 98);
    cout << "Enter row to move: ";
    cin >> rt;
    gotoRowCol(47, 98);
    cout << "Enter column to move: ";
    cin >> ct;

    if (ri > 0 && ci > 0 && ri <= dim && ci <= dim && rt > 0 && ct > 0 && rt <= dim && ct <= dim)
    {

        int i = (ri - 1) * dim + (ci - 1);
        int j = (rt - 1) * dim + (ct - 1);

        if (A[i] == 'r')
        {
            int turn = Rook2(ri, ci, dim, rt, ct, A,turn);
            if (turn == 0)
            {
                UpdateArray(i, j, rt, ct, A, ri, ci, dim);
                display_Array(i, j, rt, ct, A, dim);
            }
            else
            {
                gotoRowCol(48, 98);
                cout << "Rook cannot move from here" << endl;
            }
        }
        else if (A[i] == 'n')
        {

            int turn = Knight(ri, ci, rt, ct);
            if (turn == 0)
            {
                UpdateArray(i, j, rt, ct, A, ri, ci, dim);
                display_Array(i, j, rt, ct, A, dim);
            }
            else
            {
                gotoRowCol(48, 98);
                cout << "Knight cannot move from here" << endl;
            }
        }
        else if (A[i] == 'p')
        {

            int turn = Pawnmoves2(ri, ci, dim, rt, ct, A, PawnCount, turn);
            if (turn == 0)
            {
                UpdateArray(i, j, rt, ct, A, ri, ci, dim);
                display_Array(i, j, rt, ct, A, dim);
            }
            else
            {
                gotoRowCol(50, 98);
                cout << "Pawn cannot move from here" << endl;
            }
        }
        else if (A[i] == 'b')
        {

            int turn = Bishop2(ri, ci, dim, rt, ct, A);
            if (turn == 0)
            {
                UpdateArray(i, j, rt, ct, A, ri, ci, dim);
                display_Array(i, j, rt, ct, A, dim);
            }
            else
            {
                gotoRowCol(48, 98);
                cout << "Bishop cannot move from here" << endl;
            }
        }
         else if (A[i] == 'k')
        {

            int turn = King(ri, ci, rt, ct);
            if (turn == 0)
            {
                UpdateArray(i, j, rt, ct, A, ri, ci, dim);
                display_Array(i, j, rt, ct, A, dim);
            }
            else
            {
                gotoRowCol(48, 98);
                cout << "king cannot move from here" << endl;
            }
        }
        else if (A[i] == 'q')
        {

            int turn = Queen(ri, ci, rt, ct);
            if (turn == 0)
            {
                UpdateArray(i, j, rt, ct, A, ri, ci, dim);
                display_Array(i, j, rt, ct, A, dim);
            }
            else
            {
                gotoRowCol(48, 98);
                cout << "queen cannot move from here" << endl;
            }
        }
    }
    else
    {
        gotoRowCol(48, 98);
        cout << "Invalid input. Try Again!" << endl;
    }
}
void save_game(char A[])
{
   ofstream save("file.txt");
   for(int row=1;row<=8;row++)
   {
       for(int col=1;col<=8;col++)
       {
               save<<A[(row-1)*8+(col-1)];
       }
       save<<endl;
   }
}
void load_game(char A[])
{
   ifstream load("file.txt");
   for(int row=1;row<=8;row++)
   {
       for(int col=1;col<=8;col++)
       {
               load>>A[(row-1)*8+(col-1)];
               if(A[(row-1)*8+(col-1)]=='-')
               {
                 A[(row-1)*8+(col-1)]=' ';
               }

       }
    load.close();
   }
}

int main()
{
    int dim = 8;
    char ch;
    char A[dim * dim];
    print_chess_board(dim, 219);
    declareArray(dim, A);
    print_in_Array(dim, A);
    Print_on_board(dim,A);
    do
    {
         Askformove1(dim,A);
         save_game(A);
         Askformove2(dim,A);
         save_game(A);
         gotoRowCol(25,98);
         cout<<"Do you want to load the saved game?"<<endl;
         gotoRowCol(26,98);
         cin>>ch;
         if(ch=='y')
         {
             load_game(A);
         }
         else
         {
             gotoRowCol(27,98);
             cout<<"Your demand is invalid"<<endl;
         }
    }
      while(true);
    getch();
    return 0;
}
