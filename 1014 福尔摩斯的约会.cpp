#include<bits/stdc++.h>
using namespace std;

int main(){
	map<char, string> day;
    day['A'] = "MON";
    day['B'] = "TUE";
    day['C'] = "WED";
    day['D'] = "THU";
    day['E'] = "FRI";
    day['F'] = "SAT";
    day['G'] = "SUN";
    
    string s[4];
    for (int i = 0; i < 4; i++){
        cin >> s[i];
    }
	
	int i;
	
	//第一个数据
    for(i = 0; i < s[0].length() && i < s[1].length(); i++){
        if ((s[0][i]>='A'&&s[0][i]<='G') && (s[0][i]==s[1][i])){
            cout << day[s[0][i]] << " ";
            break;
        }
    }
    
    //第二个数据
    ++i;
    for(; i < s[0].length() && i < s[1].length(); i++){
        if (s[0][i]==s[1][i]){
            if (s[0][i]>='0'&&s[0][i]<='9'){
                cout << '0' << (int)(s[0][i]-'0') << ":"; //字符转数字 
                break;
            }
            else if (s[0][i]>='A'&&s[0][i]<='N'){
                cout << (int)(s[0][i]-'A'+10) << ":";	  //字母转换成对应数字 
                break;
            }
        }
    }
	
	 //第三个数据
    for (i=0; i<s[2].length() && i<s[3].length(); i++){
        if ( ((s[2][i]>='a'&&s[2][i]<='z')||(s[2][i]>='A'&&s[2][i]<='Z'))
                && (s[2][i]==s[3][i]) ){
            cout << setw(2) << setfill('0') << i;   
            //setw方法设置一共输出两个位置
			//setfill方法，如果输出的两个位置没占满，就在没占的位置补上“0” 
            break;
        }
    }
    cout << endl;
    
	return 0;
}
