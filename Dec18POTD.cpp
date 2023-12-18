int gameOfXor(int N , int A[]) {
        int c=0,x=N;
        for(int i=0;i<N;i++)
        {
            int a=x*(i+1);
            if(a%2==1)
            c^=A[i];
            x--;
        }
        return c;
    }