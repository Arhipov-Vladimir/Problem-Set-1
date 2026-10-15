#include <stdio.h>

int main() {
int number;
printf("Введите высоту пиромиды: "); 
       scanf("%d", &number);
if (number <= 8) {

       for (int i = 0; i < number; i++) {
           for (int j = 0; j < number - i - 1; j++) {
               printf(" ");
           }
           for (int k = 0; k < 2 * i + 1; k++) {
               printf("#");
           }
           printf("\n");
       } 
    }
    else {
        printf("Дурик это больше 8.\n");
    }
}