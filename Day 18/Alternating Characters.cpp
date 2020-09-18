#include <bits/stdc++.h>

using namespace std;

int alternatingCharacters(string s) {
    int n = s.length();
    int count=0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
