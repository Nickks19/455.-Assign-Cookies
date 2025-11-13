class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        sort(g.begin(),g.end()); //Sorting Vector
        sort(s.begin(),s.end()); //Sorting Vector

        int i = 0; //Point to Child
        int j = 0; //Point to Cookie

        while (i < g.size() && j < s.size()) //While we are still within the vector
        {
            if (s[j] >= g[i]) //If cookie size = or is greater than child greed
            {
                i++; //add 1 to satisfied child
            }
            
                j++; //Move on to the next cookie
        
        }

        return i; //Return amount of satisfied chidren


        
    }
};

/* Example 1:

Input: g = [1,2,3], s = [1,1]
Output: 1
Explanation: You have 3 children and 2 cookies. The greed factors of 3 children are 1, 2, 3. 
And even though you have 2 cookies, since their size is both 1, you could only make the child whose greed factor is 1 content.
You need to output 1.
Example 2:

Input: g = [1,2], s = [1,2,3]
Output: 2
Explanation: You have 2 children and 3 cookies. The greed factors of 2 children are 1, 2. 
You have 3 cookies and their sizes are big enough to gratify all of the children, 
You need to output 2.
 

Constraints:

1 <= g.length <= 3 * 104
0 <= s.length <= 3 * 104
1 <= g[i], s[j] <= 231 - 1 */