bool isvalid(int i, int j,const vector<string> &A, char val)
{
    for(int row=0;row<A.size();row++)
    {
        if(A[row][j]==val && row!=i)
        {
            return false;
        }
    }
    
    for(int col=0;col<A.size();col++)
    {
        if(A[i][col]==val && col!=j)
        {
            return false;
        }
    }
    
    int ni=3*(i/3);
    int nj=3*(j/3);
    
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            if(A[x+ni][y+nj]==val && ( x+ni!=i && y+nj!=j))
            {
                return false;
            }
        }
    }
    
    
    return true;
}

int Solution::isValidSudoku(const vector<string> &A) {

        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<A[0].size();j++)
            {
                if(A[i][j]!='.')
                {
                    if(!isvalid(i,j,A,A[i][j]))
                    {
                        return 0;
                    }
                }
            }
        }
        
        return 1;
    
    
}
