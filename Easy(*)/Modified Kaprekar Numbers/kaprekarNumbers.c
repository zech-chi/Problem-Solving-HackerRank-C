int pow_10(int n){
    if (n == 0){
        return 1;
    }
    return 10 * pow_10(n - 1);
}

void kaprekarNumbers(int64_t p, int64_t q) {
    int64_t found_one = 0;
    for (int64_t n = p; n <= q; n++){
        int64_t n_square = n * n;
        int64_t size = 0;
        int64_t x = 1;
        int64_t y = n_square / x;
        while (y) {
            size++;
            x *= 10;
            y = n_square / x;
        }
        
        int64_t right_part_size;
        if (size % 2){
            right_part_size = (size + 1) / 2;
        }
        else{
            right_part_size = size / 2;
        }
        
        int64_t divider = pow_10(right_part_size);
        int64_t div = n_square / divider;
        int64_t mod = n_square % divider;
        if ((div + mod) == n){
            if (found_one){
                printf(" %d", n);
            }
            else{
                printf("%d", n);
                found_one = 1;
            }
        }
    }
    
    if (found_one == 0){
        printf("INVALID RANGE");
    }
}
