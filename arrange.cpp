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
	
	for(int k=0;k<i;k++){
		for(int j=1;j<i;j++){
			if(list[j]<list[j-1]){
				num=list[j];
				list[j]=list[j-1];
				list[j-1]=num;
			}

		}
	}
}
	for(int j=0;j<sizeof(list);j++){
	cout<<(list[j]);

}
}
