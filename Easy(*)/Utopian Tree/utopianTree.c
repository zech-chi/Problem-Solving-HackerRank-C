int utopianTree(int n) {
    if (n == 0){
        return 1;
    }
    else if (n % 2){
        return 2 * utopianTree(n - 1);
    }
    else{
        return utopianTree(n - 1) + 1;
    }
}
