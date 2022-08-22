#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string s;
    getline(cin, s);
   int num;

for(int i=0;i<sizeof(s);i++){
	
//for(int k=0;k<i;k++){
for(int j=1;j<i;j++){
if(s[j]<s[j-1]){
num=s[j];
s[j]=s[j-1];
s[j-1]=num;
}

}
}
for(int j=0;j<sizeof(s);j++){
printf("%c",s[j]);

}
}
