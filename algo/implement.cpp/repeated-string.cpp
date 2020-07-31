#include<bits/stdc++.h>

long repeatedString(string s, long n) {
    long count = 0;
    int strlen = s.length();
    for(int i=0; i<strlen; i++){
        if(s[i]=='a') count++;
    }
    int rem = n%strlen;
    long n1 = n-rem;
    /*
    to avoid overflow. we should divide the
            hightest number first by another number then multiply
    count = (count/(float)strlen)*n1  => my wrong.
    */
    count = (n1/strlen)*count;

    queue<char> q;
    for(int i=0; i<strlen; i++){
        q.push(s[i]);
    }
    char curr;
    while(rem--){
        curr = q.front();
        q.pop();
        if(curr == 'a') count++;
        q.push(curr);
    }
    return count;
}
