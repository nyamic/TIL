#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    
    int i=0; // k=0, i=3, answer="92"
    
    while (k>0 && i<number.size()) {
        if (answer == "") {
            answer += number[i];
            i++;
        }
        else if (answer.back() < number[i]) 
        {
            answer.pop_back();
            k--;
        } 
        else 
        {
            answer += number[i];
            i++;
        }
        
    }
    
    // i는 다 검사했는데 k가 남을 때
    for (int j=0; j<k; j++) {
        answer.pop_back();
    }
    
    // k가 일찍 없어졌을 때
    while (i<number.size()) {
        answer += number[i];
        i++;
    }
    
    return answer;
}

// <이중반복문>
// 현재인덱스i vs 현재인덱스i+n(길이:1~k)까지 다 비교해 보고
// 1) i < i+n이면 --> 저장 안 하고, i++ k--
// 2) i >= i+n이면 --> answer+=number[i] 저장하고, i++
// 3) i+k >= number.size() --> 여기서 멈추기
// 시간 초과가 왜 날까 --> 최악의 경우에 시간복잡도 O(N^2)이라서

// <stack> - x
// stack에 숫자 끝자리부터 push
// i = number.size()-stack.size()+1 ~ number.size()-1까지 검사 (i>=top인지)
// 1) number.size()-1까지 검사가 걍 끝나면 --> answer+=top, pop
// 2) 중간에 멈추면 --> k++, pop
// stack.size() <= k일 경우: 모두 pop
// k==0이면: answer+=top, pop을 stack.size()만큼 반복

// <stack>
// 오히려 단순하게 생각해야 . . .
// top < number[i] --> pop, k--
// top >= number[i] --> push