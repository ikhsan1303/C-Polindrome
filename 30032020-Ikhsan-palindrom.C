#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];

    printf("Masukkan kata untuk mengecek apakah kata tersebut palindrome\n");
    gets(a); // input

    //start - Proses untuk membalik kata
    strcpy(b, a);  // duplikat input yang berada di variable a ke variable b
    strrev(b);  // membalik char array yang ada di b
    //end - Proses untuk membalik kata

    if (strcmp(a, b) == 0)  // membandingkan char array pada kedua variable
        printf("Kata tersebut adalah palindrome.\n");
    else{
        printf("Kata tersebut bukan palindrome. \n");
        printf("Kata %s tidak sama denganskata %s.\n",a,b);
    }

    getchar();
    return 0;
}