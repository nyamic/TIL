// #1764
/*
    겹치는 이름 찾기

    가장쉬운건... 다 비교하는 거긴 한데
    a[0]과 b[0-n]까지 다 비교하는 작업을 n번하기
    n^2
    시간땜에 불가능

    둘을 집합에 넣으면... 겹치는 애들만 빠지겠지
    그 겹치는 애들이 뭔지만 검사할 수 있나
    하나의 맵or배열?에 듣도/보도 둘 다 쭉 적고
    얘를 셋으로 변환하면 중복된 애들이 빠질 거 아냐
    빠진 번호를 조사해서 중복된애들 이름 찾으면 안 되나?

    **
    set.insert함수의 반환값
    first: 삽입된 위치의 iterator,
    second: 삽입 성공 여부 (bool)
*/

#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    set<string> s;

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        s.insert(x);
    }

    int count = 0;
    set<string> ans;

    for (int i = 0; i < m; i++)
    {
        string x;
        cin >> x;
        auto res = s.insert(x);

        if (res.second == false) {
            count++;
            ans.insert(x);
        }
    }

    cout << count << "\n";
    for (const auto& x : ans) {
        cout << x << "\n";
    }
    
    return 0;
}