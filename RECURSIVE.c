#include <stdio.h>

void close()
{
    system("cls");
    printf("\n\t==============================");
    printf("\n\t|     Terimakasih telah      |");
    printf("\n\t|   menggunakan program ini  |");
    printf("\n\t==============================");
    printf("\n\n");
    exit(0);
}

int fib(int n) 
{   
    if(n == 0)
        return 0; 
    else if(n == 1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}

void rekursif()
{
    int opt;
    int n;
    do{
    system("cls");
    printf("=====================================\n");
    printf("|          METODE REKURSIF          |\n");
    printf("=====================================\n\n");

    printf("     Masukan panjang deret : ");
    while (scanf("%d", &n) == 0 || n < 0)
    {
        printf("   # Invalid input . . .\n\n");
        printf("     Masukan panjang deret : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\n");
    printf("FIBONACCI : ");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", fib(i));
    }
    if(n == 0)
    printf("-");

    printf("\n\n=====================================\n");
    printf("|     [1] Ulangi    [2] Kembali     |\n");
    printf("=====================================\n");
    printf(">> ");
    while (scanf("%d", &opt) == 0 || opt < 1 || opt > 2)
    {
        printf("Invalid input . . .\n");
        printf("\n>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    } while(opt != 2);
}

void iteratif()
{
    int opt;
    int a, b, n, fib;
    do{
    system("cls");
    printf("=====================================\n");
    printf("|          METODE ITERATIF          |\n");
    printf("=====================================\n\n");
    printf("     Masukan bilangan ke-1 : ");
    while (scanf("%d", &a) == 0 || a < 0)
    {
        printf("   # Invalid input . . .\n\n");
        printf("     Masukan bilangan ke-1 : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    printf("     Masukan bilangan ke-2 : ");
    while (scanf("%d", &b) == 0 || b < 0)
    {
        printf("   # Invalid input . . .\n\n");
        printf("     Masukan bilangan ke-2 : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    printf("     Masukan panjang deret : ");
    while (scanf("%d", &n) == 0 || n < 3)
    {
        printf("   # Panjang deret minimal adalah 3 . . .\n\n");
        printf("     Masukan panjang deret : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\nFIBONACCI : %d %d ", a, b);
    for(int i = 2; i < n; i++)
    {
        fib = a + b;
        printf("%d ", fib);

        a = b;
        b = fib;
    }

    printf("\n\n=====================================\n");
    printf("|     [1] Ulangi    [2] Kembali     |\n");
    printf("=====================================\n");
    printf(">> ");
    while (scanf("%d", &opt) == 0 || opt < 1 || opt > 2)
    {
        printf("Invalid input . . .\n");
        printf("\n>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    } while(opt != 2);

}

int main()
{
    int opt;
    do{
    system("cls");
    printf("=====================================\n");
    printf("|           DERET FIBONACCI         |\n");
    printf("=====================================\n\n");
    printf("     [1] Metode Rekursif\n");
    printf("     [2] Metode Iteratif\n\n");
    printf("     [3] Keluar\n\n");
    printf("=====================================\n");
    printf(">> ");
    while (scanf("%d", &opt) == 0 || opt < 1 || opt > 3)
    {
        printf("Invalid input . . .\n");
        printf("\n>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    if(opt == 1)
        rekursif();
    else if(opt == 2)
        iteratif();
    } while(opt != 3);
    close();


    return 0;
}