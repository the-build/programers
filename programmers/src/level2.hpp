#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


class Level2
{
public:
    // Quiz = https://school.programmers.co.kr/learn/courses/30/lessons/60057
    int courses_30_lessons_60057(string s) {
        int answer = 0;
        int maxCnt = s.length() / 2;

		for (int i = 0; i < maxCnt; i++) {
			int tmpAns = 0;


            //가장 짧은 수 구하기
            if (answer > tmpAns) {
                answer = tmpAns;
            }
        }

        return answer;
    }

    // Quiz = https://school.programmers.co.kr/learn/courses/30/lessons/12924
    int courses_30_lessons_12924(int n) {
        int answer = 0;
        int x = 0;

        if (n > 10000)
            return answer;

        for (int i = 1; x != 1; i++) {
            int base = (n - fibonacci(i - 1));
            int mok = base / i;
            int nam = base % i;
            x = mok;
            if (nam == 0) {
                answer++;
            }
            if (x <= 1) // x가 0,1 일 때는 더이상 연산할 수 없다.
                break;
        }
        return answer;
    }

    int fibonacci(int m) {
        int val = 0;
        for (int i = 1; i < (m + 1); i++) {
            val += i;
        }
        return val;
    }
    /*
    정확성  테스트
        테스트 1 〉	통과 (0.01ms, 3.6MB)
        테스트 2 〉	통과 (0.01ms, 4.18MB)
        테스트 3 〉	통과 (0.01ms, 4.18MB)
        테스트 4 〉	통과 (0.01ms, 3.61MB)
        테스트 5 〉	통과 (0.01ms, 4.12MB)
        테스트 6 〉	통과 (0.01ms, 4.18MB)
        테스트 7 〉	통과 (0.01ms, 4.18MB)
        테스트 8 〉	통과 (0.01ms, 3.61MB)
        테스트 9 〉	통과 (0.01ms, 4.18MB)
        테스트 10 〉	통과 (0.01ms, 3.56MB)
        테스트 11 〉	통과 (0.01ms, 4.15MB)
        테스트 12 〉	통과 (0.01ms, 4.18MB)
        테스트 13 〉	통과 (0.01ms, 3.64MB)
        테스트 14 〉	통과 (0.01ms, 3.51MB)
        테스트 15 〉	통과 (0.01ms, 3.61MB)
        테스트 16 〉	통과 (0.01ms, 3.6MB)
        테스트 17 〉	통과 (0.01ms, 3.59MB)
        테스트 18 〉	통과 (0.01ms, 4.12MB)
    효율성  테스트
        테스트 1 〉	통과 (0.01ms, 3.82MB)
        테스트 2 〉	통과 (0.01ms, 3.84MB)
        테스트 3 〉	통과 (0.01ms, 3.82MB)
        테스트 4 〉	통과 (0.01ms, 3.78MB)
        테스트 5 〉	통과 (0.01ms, 3.8MB)
        테스트 6 〉	통과 (0.01ms, 3.83MB)
    채점 결과
        정확성: 75.0
        효율성: 25.0
        합계: 100.0 / 100.0
    */
};

