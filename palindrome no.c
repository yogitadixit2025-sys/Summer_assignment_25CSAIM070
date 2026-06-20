#include <stdio.h> 
int isPalindrome(int num) {
    int original = num;
        int reversed = 0;
            int remainder;

                if (num < 0) return 0; 

                    while (num != 0) {
                            remainder = num % 10;
                                    reversed = reversed * 10 + remainder;
                                            num /= 10;
                                                }

                                                    return original == reversed;
                                                    }

                                                    int main() {
                                                        int num = 121;
                                                            if (isPalindrome(num)) {
                                                                    printf("%d is a palindrome.\n", num);
                                                                        } else {
                                                                                printf("%d is not a palindrome.\n", num);
                                                                                    }
                                                                                        return 0;
                                                                                        }
