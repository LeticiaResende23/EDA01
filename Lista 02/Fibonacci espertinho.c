long int fibonacci(int x){

    if(x == 1 || x == 2){
        return 1;
    }

    static long int y = 1, z = 1, j;
    static int l = 3;
    
    if(l <= x){
        j = y + z;
        y = z;
        z = j;
        l++;
        fibonacci(x);
    }

    return j;

}