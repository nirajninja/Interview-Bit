   bool issafe(vector<vector<char>>& board, int i, int j,char val)
    {
        for(int row=0;row<board.size();row++)
        {
            if(board[row][j]==val && row!=i)
            {
                return false;
            }
        }
        
        for(int col=0;col<board[0].size();col++)
        {
            if(board[i][col]==val && col!=j)
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
                if(board[x+ni][y+nj]==val && (ni+x!=i && nj+y!=j ))
                   
                   {
                       return false;
                   }
            }
        }
                   
    return true;
    }
    
    bool solve(vector<vector<char>>& board, int i, int j)
    {
        
        if(i==board.size())
        {
            return true;
        }
        int ni=0;
        int nj=0;
        if(j==board[0].size())
        {
            ni=i+1;
            nj=0;
        }
        else{
            ni=i;
            nj=j+1;
        }
        
        if(board[i][j]!='.')
        {
            return solve(board,ni,nj);
        }
        else{
            for(char po='1';po<='9';po++)
            {
                if(issafe(board,i,j,po))
                {
                    board[i][j]=po;
                    if(solve(board,ni,nj))
                    {
                        return true;
                    }
                    board[i][j]='.';
                }
            }
        }
        return false;
    }
        
       
void Solution::solveSudoku(vector<vector<char> > &board) {
    
    
    solve(board,0,0);
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
