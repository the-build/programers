--Start C30_L59403
	--[SELECT] 동물의 아이디와 이름
	--링크: https://school.programmers.co.kr/learn/courses/30/lessons/59403
	--정답:
		SELECT ANIMAL_ID, NAME FROM ANIMAL_INS
		ORDER BY ANIMAL_ID ASC
--End C30_L59403

--Start C30_L59404
	--[SELECT]v여러 기준으로 정렬하기
	--링크: https://school.programmers.co.kr/learn/courses/30/lessons/59404
	--정답:
		SELECT ANIMAL_ID, NAME, DATETIME
		FROM ANIMAL_INS
		ORDER BY NAME ASC, DATETIME DESC;
--End C30_L59404
