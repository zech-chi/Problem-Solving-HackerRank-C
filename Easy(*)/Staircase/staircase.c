void printspace(int x){
    for (int i = 0; i < x; i++){
        printf(" ");
    }
}

void printsymbol(int y){
    for (int i = 0; i < y; i++){
        printf("#");
    }
}

void staircase(int n) {
    for (int i = 0; i < n - 1; i++){
        printspace(n - 1 - i);
        printsymbol(i + 1);
        printf("\n");
    }
    printsymbol(n);

}
