#include <stdio.h>

void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm, i;

        if (n <= 0) return;

            for (i = 1; i <= n; ++i) {
                    printf("%d ", t1);
                            nextTerm = t1 + t2;
                                    t1 = t2;
                                            t2 = nextTerm;
                                                }
                                                    printf("\n");
                                                    }

                                                    int main() {
                                                        int terms = 8;
                                                            printFibonacci(terms);
                                                                return 0;
                                                                }
                                                                