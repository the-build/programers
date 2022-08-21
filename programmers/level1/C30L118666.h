#pragma once
//level 1, https://school.programmers.co.kr/learn/courses/30/lessons/118666?language=cpp
#include <iostream>
#include <string>
#include <vector>
#include <map>
class C30L118666 {
public:
	void makeScore(std::string& type, int& score) {
		if (score == 4)	return;		//It doesn't make any sense.

		int tempScore = 0;
		std::string tempType("");
		if (score >= 1 && score <= 3) {
			tempType = type.substr(0, 1);
			if (score == 1)
				tempScore = 3;
			else if (score == 2)
				tempScore = 2;
			else if (score == 3)
				tempScore = 1;
		}
		else if (score >= 5 && score <= 7) {
			tempType = type.substr(1, 1);
			if (score == 7)
				tempScore = 3;
			else if (score == 6)
				tempScore = 2;
			else if (score == 5)
				tempScore = 1;
		}
		table[tempType] += tempScore;
	}

	std::string solution(std::vector<std::string> survey, std::vector<int> choices) {
		std::string answer = "";

		if (survey.size() <= 1000) {	//One of the limitations
			for (int i = 0; i < survey.size(); i++) {
				makeScore(survey[i], choices[i]);
			}
		}

		if (table["R"] < table["T"]) { answer += "T"; }		else { answer += "R"; }
		if (table["C"] < table["F"]) { answer += "F"; }		else { answer += "C"; }
		if (table["J"] < table["M"]) { answer += "M"; }		else { answer += "J"; }
		if (table["A"] < table["N"]) { answer += "N"; }		else { answer += "A"; }

		std::cout << "Answer: " << answer << std::endl;
        return answer;
    }
private:
    std::map<std::string, int> table;
};
