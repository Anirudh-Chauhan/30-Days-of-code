'''
KODY AND MESSAGING
Kody gave up playing among us since he was not becoming the imposter at all. Kody was also a doctor, therefore he then decided to cure some people in his hospital, since Kody was no ordinary simp, he decided to simp for only smart people, therefore he decided to text people who only could decode his smart message, the message was "covid". Now with all that thought, Kody decided to text a message, and he wants to check if the message can be converted to the text "covid" by deleting some letters.

Kody now thinks you are not smart at all, would you like to prove Kody wrong by checking if the string can be converted to his secret message by deleting unrequired letters.

NOTE: You cannot rearrange the letters, you can simply delete any letters to convert it into the required message.

INPUT FORMAT: The First line will contain an Integer N. Followed by N lines containing a single string S.

OUTPUT FORMAT: Output either "YES" or "NO", without the double quotes. "YES" if the string can be converted into the secret message. "NO" if the string cannot be converted into the secret message.

CONSTRAINTS:

N <= 60

Length of (S) < 100

S will contain only lower case letters.

SAMPLE INPUT 
SAMPLE INPUT:

4
nockfofvdaijgd
dovci
ccccooooovvvviiiidddd
csooddivd
SAMPLE OUTPUT 
SAMPLE OUTPUT:

YES
NO
YES
NO
Explanation
For TestCase 1: In the string "nockfofvdaijgd", we can convert it into covid by: removing the letter number 1,2,4,5,7,8,9,10,12,13. which finally convert it into "covid".

For TestCase 2: In the string "dovci", we cannot convert it into "covid" by deleting any letter.

For TestCase 3: We can remove the extra words in between to convert it into the word "covid". For TestCase 4: We cannot convert the string to "covid", by deleting any letter in between.

'''

n=int(input())
for x in range(0,n):
    s=input()
    s1=list(s)
    a=[]
    st=[]
    i=0
    c=['c','o','v','i','d']
    #print(s1)
    k=0
    for i in range(len(s)):
        if s[i] == c[k]:
            k+=1
            a.append(i)
            st.append(s[i])
            if(k>=5):break
        else:
            pass
    l=len(a)
    #print(a)
    #print(st)
    if l == 5:
        b = sorted(a)
        #print(b)
        if a==b:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")











