#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num;
        int temp = num;
            int sum = 0;
                int digits = 0;
                    int remainder;

                        while (temp != 0) {
                                digits++;
                                        temp /= 10;
                                            }

                                                temp = num;
                                                    while (temp != 0) {
                                                            remainder = temp % 10;
                                                                    sum += round(pow(remainder, digits)); 
                                                                            temp /= 10

                                                                                    return sum == original;
                                                                                    }

                                                                                    int main() {
                                                                                        int num = 153;
                                                                                            if (isArmstrong(num)) {
                                                                                                    printf("%d is an Armstrong number.\n", num);
                                                                                                        } else {
                                                                                                                printf("%d is not an Armstrong number.\n", num);
                                                                                                                    }
                                                                                                                        return 0;
                                                                                                                        }
                                                                                                                        v