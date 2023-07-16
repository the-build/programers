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


            //���� ª�� �� ���ϱ�
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
            if (x <= 1) // x�� 0,1 �� ���� ���̻� ������ �� ����.
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
    ��Ȯ��  �׽�Ʈ
        �׽�Ʈ 1 ��	��� (0.01ms, 3.6MB)
        �׽�Ʈ 2 ��	��� (0.01ms, 4.18MB)
        �׽�Ʈ 3 ��	��� (0.01ms, 4.18MB)
        �׽�Ʈ 4 ��	��� (0.01ms, 3.61MB)
        �׽�Ʈ 5 ��	��� (0.01ms, 4.12MB)
        �׽�Ʈ 6 ��	��� (0.01ms, 4.18MB)
        �׽�Ʈ 7 ��	��� (0.01ms, 4.18MB)
        �׽�Ʈ 8 ��	��� (0.01ms, 3.61MB)
        �׽�Ʈ 9 ��	��� (0.01ms, 4.18MB)
        �׽�Ʈ 10 ��	��� (0.01ms, 3.56MB)
        �׽�Ʈ 11 ��	��� (0.01ms, 4.15MB)
        �׽�Ʈ 12 ��	��� (0.01ms, 4.18MB)
        �׽�Ʈ 13 ��	��� (0.01ms, 3.64MB)
        �׽�Ʈ 14 ��	��� (0.01ms, 3.51MB)
        �׽�Ʈ 15 ��	��� (0.01ms, 3.61MB)
        �׽�Ʈ 16 ��	��� (0.01ms, 3.6MB)
        �׽�Ʈ 17 ��	��� (0.01ms, 3.59MB)
        �׽�Ʈ 18 ��	��� (0.01ms, 4.12MB)
    ȿ����  �׽�Ʈ
        �׽�Ʈ 1 ��	��� (0.01ms, 3.82MB)
        �׽�Ʈ 2 ��	��� (0.01ms, 3.84MB)
        �׽�Ʈ 3 ��	��� (0.01ms, 3.82MB)
        �׽�Ʈ 4 ��	��� (0.01ms, 3.78MB)
        �׽�Ʈ 5 ��	��� (0.01ms, 3.8MB)
        �׽�Ʈ 6 ��	��� (0.01ms, 3.83MB)
    ä�� ���
        ��Ȯ��: 75.0
        ȿ����: 25.0
        �հ�: 100.0 / 100.0
    */
};

