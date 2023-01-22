#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int check(float x) {
    int prev, cur, next;
    int integer, flag;

    x = fabs(x);
    integer = (int) x;
    flag = integer;
    while (integer != x) {
        x *= 10;
        integer = (int) x;
    }


    if (((x < 100) && (flag != 0)) || (x < 10)) {
        return 0;
    }

    else if ((x < 100) && (flag == 0)){
        prev = integer % 10;
        cur = integer / 10;
        next = 0;
        if ((prev - cur) != (cur - next)) {
            return 0;
	}
    }

    else { 
        prev = integer % 10;
        integer /= 10;
        cur = integer % 10;
        integer /= 10;
        next = integer % 10;
        integer /= 10;
        if ((prev - cur) != (cur - next)) {
            return 0;
        }

        while (integer > 0) {
            prev = cur;
            cur = next;
            next = integer % 10;
            integer /= 10;
            if ((prev - cur) != (cur - next)) {
                return 0;
            }
        }

        if (flag == 0) {
            prev = cur;
            cur = next;
            next = flag;
            if ((prev - cur) != (cur - next)) {
                return 0;
            }
        }
    }
    return 1;
}


int main() {
    float x;
    while (1) {
        scanf("%f", &x);
        printf("%d\n", check(x)); 
    }
}
