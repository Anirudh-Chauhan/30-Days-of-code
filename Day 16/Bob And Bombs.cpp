/*
Bob and Khatu are brave soldiers in World War 3. They have spotted an enemy troop which is planting bombs. They sent message to the command centre containing characters W and B where W represents a wall and B represents a Bomb. They asked command to tell them how many walls will be destroyed if all bombs explode at once. One bomb can destroy 2 walls on both sides.

Input:

First line of input contains number of test cases T. Each test case contains a single string which contains two type of chars 'W' and 'B'.

Output:

For each test case print the total number of destroyed wall.

Constraints:

1 = T = 10
1 = |S| = 105

SAMPLE INPUT 
3
WBW
WWBWWBW
BWWWBWBWW
SAMPLE OUTPUT 
2
5
6
*/
#include <iostream>
using namespace std;
int main()
{
 int x, count,j;
 string s;
 cin >> x;
 while(x--)
{
    count=0;
    cin >> s;
    j=0;
    int l=s.length();
    while(j<l)
    {
     if((s[j]=='W') && ((j>0 && s[j-1]=='B') || (j>1 && s[j-2]=='B') || (j<l-1 && s[j+1]=='B') || (j<l-2 && s[j+2]=='B')) )
    count++;
    j++;
    }
   cout << count << endl;
 }

return 0;
}