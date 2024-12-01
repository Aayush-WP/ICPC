#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string hour_temp=s.substr(0,2), mode=s.substr(8,2);
    int hour=stoi(hour_temp);
    string new_time;
    if (mode=="PM"){
        if (hour==12){
            new_time=s.substr(0,8);
        }
        else{
            string new_hour=to_string(hour+12);
            new_time=new_hour+s.substr(2,6);
        }
    }
    else {
        if(hour==12){
            new_time="00"+s.substr(2,6);
        }
        else{
            new_time=s.substr(0,8);
        }
    }
    return new_time;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
