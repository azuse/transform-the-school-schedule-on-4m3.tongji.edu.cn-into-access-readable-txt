#include <fstream>  
#include <string>  
#include <string.h>
#include <iostream>  
using namespace std;

int main()
{
	ifstream in("D://1.txt");
	string filename;
	string line;
	string target;
	int i = -1,n=0;
	string td = "		<td>";
	string td2 = "</td>";
	ofstream out("D://2.txt");
	if (in) // 有该文件  
	{
		while (getline(in, line)) // line中不包括每行的换行符  
		{	
			n++;
			if (line == "	<tr>")i = 0;
			while (i <= 14)
			{
				getline(in, target);
				n++;
				if (target == "	</tr>")break;
				if (i == 1|| i == 11 || i == 12 || i == 10)
				{
					target.erase(0, 30);
				}
				else
				{
					target.erase(0, 6);
				}
				int length = target.size();
				target.erase(length - 5);
				//basic_string<char>target = target.substr(, 7);
				out << target << ",";
				i++;
			}
			out << endl;
			//cout << line << endl;
		}
	}
	else // 没有该文件  
	{
		cout << "no such file" << endl;
	}
	system("pause");
	return 0;
}