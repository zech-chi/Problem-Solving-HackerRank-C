int findDigits(int n) {
    int div = n;
    int ans = 0;
    while (div != 0){
        int mod = div % 10;
        if (mod && !(n % mod)){
            ans++;
        }
        div = div / 10;
    }
    return ans;
}
