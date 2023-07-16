#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

class Level0
{
public:
    // URL: https://school.programmers.co.kr/learn/courses/30/lessons/120812
    // Title: ÃÖºó°ª ±¸ÇÏ±â(ÃÖºó, °¡Àå ºó¹øÇÏ°Ô ³ª¿À´Â ¼ö)
    int courses_30_lessons_120812(std::vector<int> arr) {
        int answer = -1;
        std::map<int, int> intMap;

        if (arr.size() == 1)
            return *arr.begin();

        for (auto i : arr) {
            intMap[i]++;
        }
        std::vector<pair<int, int>> a(intMap.begin(), intMap.end());
        sort(a.begin(), a.end(),
            [](pair<int, int>& x, pair<int, int>& y) {
                return x.second > y.second;
            }
        );

        auto it = a.begin();
        int aFirst = it->second;
        it++;
        int aSecond = it->second;
        if (aFirst == aSecond) {
            return -1;
        }

        answer = (a.begin()->first);

        return answer;
    }

    // URL: https://school.programmers.co.kr/learn/courses/30/lessons/120808
    // Title: ºÐ¼öÀÇ µ¡¼À
public:
    std::vector<int> courses_30_lessons_120808(int denum1, int num1, int denum2, int num2) {
        std::vector<int> answer;
        if (num1 < num2) {

        }
        else if (num1 > num2) {

        }
        else {

        }
        return answer;
    }
};

