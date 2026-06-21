#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    
    int n = numbers.size();
    vector<string> numbers_st(n);
    for (int i=0; i<n; i++) {
        numbers_st[i] = to_string(numbers[i]);
    }
    
    sort(numbers_st.begin(), numbers_st.end(), [](string a, string b) {
        return a+b > b+a;
    });
    
    bool zero = true;
    for (int i=0; i<n; i++) {
        answer += numbers_st[i];
        
        if (numbers_st[i] != "0") {
            zero = false;
        }
    }
    
    if (zero) 
        answer = "0";
        
    return answer;
}


// 220 22 --> 22220
// 225 23 --> 225 23 / 23 225
// 앞자리부터 비교, 내림차순 정렬해서 합치기