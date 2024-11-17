#include <stdio.h>
#include <stdlib.h>

char arr[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void showBoard();
int checkForWin();

int main()
{
    int player = 1;
    int choice, i;
    char mark;

    do
    {
        showBoard();
        player = (player % 2) ? 1 : 2;
        printf("Player %d's turn: ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice >= 1 && choice <= 9 && arr[choice] == (char)(choice + '0')) {
            arr[choice] = mark;
        } else {
            printf("Invalid move! The position is either occupied or out of range.\n");
            player--;
        }

        i = checkForWin();
        player++;
    } while (i == -1);

    showBoard();

    if (i == 1)
        printf("Player %d wins!\n", player - 1);
    else
        printf("It's a draw!\n");

    return 0;
}

void showBoard()
{
    system("cls");
    printf("\tTIC TAC TOE\n");
    printf("       |       |      \n");
    printf("   %c   |   %c   |   %c   \n", arr[1], arr[2], arr[3]);
    printf("-------|-------|-------\n");
    printf("       |       |      \n");
    printf("   %c   |   %c   |   %c   \n", arr[4], arr[5], arr[6]);
    printf("-------|-------|-------\n");
    printf("       |       |      \n");
    printf("   %c   |   %c   |   %c   \n", arr[7], arr[8], arr[9]);
    printf("       |       |      \n");
}

int checkForWin()
{
    if (arr[1] == arr[2] && arr[2] == arr[3]) return 1;
    if (arr[4] == arr[5] && arr[5] == arr[6]) return 1;
    if (arr[7] == arr[8] && arr[8] == arr[9]) return 1;
    if (arr[1] == arr[4] && arr[4] == arr[7]) return 1;
    if (arr[2] == arr[5] && arr[5] == arr[8]) return 1;
    if (arr[3] == arr[6] && arr[6] == arr[9]) return 1;
    if (arr[1] == arr[5] && arr[5] == arr[9]) return 1;
    if (arr[3] == arr[5] && arr[5] == arr[7]) return 1;

    for (int i = 1; i <= 9; i++) {
        if (arr[i] == (char)(i + '0'))
            return -1;
    }
    return 0;
}
