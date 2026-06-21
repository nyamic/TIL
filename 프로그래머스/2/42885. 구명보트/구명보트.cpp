#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end()); 
    // [50, 70, 80]
    //  i        j
    
    int i=0, j=people.size()-1;
    while (i<=j) {
        if (people[i]+people[j] <= limit) 
        {
            answer++;
            i++;
            j--;
        } 
        else 
        {
            answer++;
            j--; 
        }
        
        if (i==j) {
            answer++;
            j--;
        }
    }
    
    return answer;
}

//오름차순 정렬
//가장작음+젤마지막부터순회해서ㄱㄴ뜨면 한팀으로

// 50 50 50 190 200 240 (240)
// 
