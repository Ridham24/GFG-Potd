vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        vector<int> v;
        for(int i=0;i<matrix[0].size();i++)
        {
            int c=i;
            for(int j=0;j<matrix.size();j++)
            {
                if(c<0)
                break;
                v.push_back(matrix[j][c]);
                c--;
            }
        }
        for(int i=1;i<matrix.size();i++)
        {
            int c=i;
            for(int j=matrix[0].size()-1;j>=0;j--)
            {
                if(c==matrix.size())
                break;
                v.push_back(matrix[c][j]);
                c++;
            }
        }
        return v;
    }