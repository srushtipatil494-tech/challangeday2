#include <iostream>
#include <vector>
#include <string>
using namespace std;

string name(vector<string>& str) 
{
    if (str.empty()) return "";

    string prefix = str[0]; 

    for (int i = 1; i < str.size(); i++) 
	{
        while (str[i].find(prefix) != 0) 
		{
            prefix = prefix.substr(0, prefix.size() - 1);
            if (prefix.empty()) return "";
        }
    }
    return prefix;
}

int main() {
	
    string arr[] = {"flower", "flow", "flight"};
    vector<string> str(arr, arr + 3); 

    cout << name(str) << endl; 
    return 0;
}
