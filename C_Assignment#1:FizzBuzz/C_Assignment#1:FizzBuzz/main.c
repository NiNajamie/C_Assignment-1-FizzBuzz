
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num = 0;
    for (int i = 0; i < 100; i++) {
        num++;
        if (num % 3 == 0) {
            printf("Fizz\n");
        }else if (num % 5 == 0) {
            printf("Buzz\n");
        }else if ((num % 3 == 0) && (num % 5 == 0)) {
            printf("FizzBuzz\n");
        }else {
            printf("%d\n", num);
        }
    }return 0;
}
