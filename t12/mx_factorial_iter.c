int mx_factorial_iter(int n) {
    if (n < 0
        || n > 2147483647) {
        return 0; 
    }

    int factorial = 1;

    while (n > 0) {
        if (factorial > 2147483647 / n) {
            return 0;
        }
        factorial = factorial * n;
        n--;
    }
    
    return factorial;
}

