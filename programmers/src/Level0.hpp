#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

class Level0
{
public:
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
};

