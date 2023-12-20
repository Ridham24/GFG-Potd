int findWinner(int n, int A[]){
        int x=0;
        for(int i=0;i<n;i++)
        x^=A[i];
        if(x==0)
        return 1;
        return n%2+1;
    }