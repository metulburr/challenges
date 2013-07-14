#include <iostream>
#include <string>

using namespace std;

string flop_ascii(string s, int step){
	char ch;
	int num;
	string s2;
	
	for (int i=0; i<s.length(); i++){
		num = (int)s[i] + step;
		//cout << num << endl;
		if (num >= 97 && num <= 122){
			s2 += (char)num;
		}
		else if (num == 34){
			s2 += " ";
		}
		else if (num > 122){
			s2 += ((char)num - 26);
		}
		else if (num == 48){
			s2 += ".";
		}
	}
	return s2;
}

int main(){
	string s = "g fmnc wms bgblr rpylqjyrc gr zw fylb. rfyrq ufyr amknsrcpq ypc dmp. bmgle gr gl zw fylb gq glcddgagclr ylb rfyr'q ufw rfgq rcvr gq qm jmle. sqgle qrpgle.kyicrpylq() gq pcamkkclbcb. lmu ynnjw ml rfc spj.";
	cout << s << '\n' << endl;
	cout << flop_ascii(s, 2) << '\n';
	string url = "map";
	cout << flop_ascii(url, 2);

}
