///IDEA IS SIMPLE: TRANSPOSE AND REVERSE
//1.TRANSPOSE THE ENTIRE MATRIX
//2.REVERSE EACH ROW

class Solution {
    private void swap(int arr[][], int a , int b)
    {
        int temp = arr[a][b];
        arr[a][b] = arr[b][a];
        arr[b][a] = temp;
    }

    public void rotate(int[][] matrix) 
    {
        
        int n = matrix.length;

        //THE TRANSPOSE PART
        for(int i = 0; i<n; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                swap(matrix, i, j);
            }
        }

        //REVERSE PART

        int rows = matrix.length;
        for(int i = 0; i<rows ; i++)
        {
            int l = 0;
            int r = n-1;

            while(l<r)
            {

                int temp = matrix[i][l];
                matrix[i][l] = matrix[i][r];
                matrix[i][r] = temp;

                l++;
                r--;

            }
        }

    }
}