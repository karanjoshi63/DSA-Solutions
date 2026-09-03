/*
In this question whay we have to do is we have to return the element of the array which is appearing more then n/2 time
here n is the size of array 

first solution:-
-> the first solution we can think about is definataly tha brute force solution 
   Brute force:- In this approach we are doing nesting of loops so that we can caout occurence of the a element 
    Time complexity:- O(n^2)
    Space complexity:- O(1);

Second solution:-
-> in second solution we can think is better one , about a data structure which can hold the frequency of each elelment
 so we can use map here to store elements frequency we can easily caluculate whether the element is appearing more then n/2 times or not.
   Time complexity :- O(n);
   Space complexity:- O(n)

Third solution (Optimal):-
-> for the most optimal solution there is a algorithm called Moore's voting algorith.
this algo says when the same element appears then plus the count if its not the same element then  decreaase the count
if count becomes 0 then make element = arr[i] and count = 1,


Intiution:-
if there is a majority element in the array then its count can never be 0
that's why we are using this algo.
which element remains then count its frequency if it is more then n/2 then this is the ans.

*/

class Solution {
public:
    int majorityElement(vector<int>& arr) {

        int n = arr.size();
        int ele;
        int count = 0;

        for(int i = 0; i<n; i++)
        {
            if(count ==0)
            {
                ele = arr[i];
                count = 1;
            }

            else if(ele == arr[i])
            {
                count++;
            }

            else
            {
                count--;
            }
        }

        int count_ele = 0;

        for(int i = 0; i<n; i++)
        {
            if(arr[i] == ele)
            {
                count_ele++;
            }
        }

        if(count_ele > (n/2))
        return ele;


        return -1;
        
     
    }
};
