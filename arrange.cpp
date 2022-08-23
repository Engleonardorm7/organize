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
    string list;
    getline(cin, list);
   int num;

for(int i=0;i<sizeof(list);i++){
	int pos=i;
	num=list[i];
	
	while((pos>0)&&list[pos-1]>num){
		list[pos]=list[pos-1];
		pos--;
	}
	list[pos]=num;
}
	for(int j=0;j<sizeof(list);j++){
	cout<<(list[j]);

}
}
