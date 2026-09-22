/*
Problem

Given a matrix, print all its elements in spiral order.

For example:

text
1  2  3
4  5  6
7  8  9


The spiral order will be:-


1 2 3 6 9 8 7 4 5


Approach:-

I used four boundaries to keep track of the part of the matrix that is still left to print:
top → first row
bottom → last row
left → first column
right → last column

Then I print the matrix in four directions:

1. Left to Right → print the top row.
2. Top to Bottom → print the right column.
3. Right to Left → print the bottom row.
4. Bottom to Top → print the left column.

After printing each boundary, I move it inward because that row or column is already processed.

I continue this process until all elements of the matrix are printed.

 Time Complexity

O(m × n)

Every element of the matrix is visited exactly once.

 Space Complexity

O(1)

Only a few variables like top, bottom, left, and right are used. No extra matrix is created.
  */


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();

        int row_top = 0;
        int row_bottom = n-1;
        int col_left = 0;
        int col_right = m-1;

        vector<int>ans;
    
        while(row_top<=row_bottom && col_left<=col_right)
        {
            for(int i = col_left; i<=col_right; i++)
            {

                ans.push_back(matrix[row_top][i]);

            }
            row_top++;

            for(int i = row_top; i<=row_bottom; i++)
            {
                ans.push_back(matrix[i][col_right]);
            }

            col_right--;

            if(row_top<=row_bottom)
            {

            for(int i = col_right; i>=col_left; i--)
            {
                ans.push_back(matrix[row_bottom][i]);
            }

            row_bottom--;
            }

            if(col_left<=col_right)
            {

            for(int i = row_bottom; i>=row_top; i--)
            {
                ans.push_back(matrix[i][col_left]);
            }

            col_left++;
            }


        }

        return ans;

    
        }
};
