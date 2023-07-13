#include <stdio.h>
#include <string.h>
#ifdef _WIN32
#include <windows.h>

char getch() {
    HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
    INPUT_RECORD input;
    DWORD count;
    char ch;

    SetConsoleMode(hStdin, 0);
    ReadConsoleInput(hStdin, &input, 1, &count);
    ch = input.Event.KeyEvent.uChar.AsciiChar;

    SetConsoleMode(hStdin, ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT);
    return ch;
}

#else

#include <termios.h>
#include <unistd.h>

char getch() {
    char ch;
    struct termios oldAttr, newAttr;

    tcgetattr(STDIN_FILENO, &oldAttr);
    newAttr = oldAttr;
    newAttr.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newAttr);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldAttr);

    return ch;
}

#endif

int main() {
    char ch;
    char pass[20];
    char saved_pass[20];
    int i = 0;

    printf("Enter password: ");

    while (1) {
        ch = getch();

        if (ch == '\n' || ch == '\r') {
            pass[i] = '\0';
            break;
        } else {
            pass[i++] = ch;
            printf("*");
        }
    }

    printf("\nYou entered: %s\n", pass);

    FILE* ptr;
    ptr = fopen("password.txt", "r");
    if (ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fscanf(ptr, "%s", saved_pass);

    fclose(ptr);

    printf("Saved password: %s\n", saved_pass);

    int l = strcmp(pass, saved_pass);
    if (l == 0) {
        printf("LOGIN SUCCESSFUL\n");
    } else {
        printf("INCORRECT PASSWORD\n");
    }

    return 0;
}
