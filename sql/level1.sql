--Start Cource30_Lesson59403
	--Title: 동물의 아이디와 이름
	--Link: https://school.programmers.co.kr/learn/courses/30/lessons/59403
	--정답:
		SELECT ANIMAL_ID, NAME FROM ANIMAL_INS
		ORDER BY ANIMAL_ID ASC
--End Cource30_Lesson59403

--Start Cource30_Lesson59404
	--Title: 여러 기준으로 정렬하기
	--Link: https://school.programmers.co.kr/learn/courses/30/lessons/59404
	--정답:
		SELECT ANIMAL_ID, NAME, DATETIME
		FROM ANIMAL_INS
		ORDER BY NAME ASC, DATETIME DESC;
--End Cource30_Lesson59404

--Start Cource30_Lesson151136
	--Title: 평균 일일 대여 요금 구하기
	--Link: https://school.programmers.co.kr/learn/courses/30/lessons/151136
SELECT ROUND(SUM(DAILY_FEE)/COUNT(DAILY_FEE),0) AS AVERAGE_FEE
FROM CAR_RENTAL_COMPANY_CAR
WHERE CAR_TYPE = 'SUV';
--End Cource30_Lesson151136
