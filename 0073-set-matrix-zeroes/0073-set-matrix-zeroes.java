class Solution {
    public void setZeroes(int[][] matrix) {

        int rows = matrix.length;
        int cols = matrix[0].length;

        int[][] copy = new int[rows][cols];

        for(int i = 0;i<rows;i++)
        {
            for(int j = 0; j<cols; j++)
            {
                copy[i][j] = matrix[i][j];
            }
        }

        //finding zeroes

        for(int i = 0;i<rows;i++)
        {
            for(int j = 0; j<cols; j++)
            {
                if(matrix[i][j] == 0)
                {
                    for(int k = 0;k<cols;k++)
                    {
                        copy[i][k] = 0;
                    }

                    for(int k = 0; k<rows; k++)
                    {
                        copy[k][j] = 0;
                    }
                }
            }
        }


        for(int i = 0;i<rows;i++)
        {
            for(int j = 0; j<cols; j++)
            {
                matrix[i][j] = copy[i][j];
            }
        }
    }

}