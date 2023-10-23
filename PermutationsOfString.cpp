#include<iostream>
using namespace std;

void permutate(string &s, int start, int end)
{
    if (start == end)
        cout << s << endl;
    else
        for (int i = start; i <= end; i++) {
            swap(s[i], s[start]);
            permutate(s, start + 1, end);
            swap(s[i], s[start]);
        }

}


int main()
{
    string s;
    cin>>s;
    permutate(s, 0, s.length()-1);
}