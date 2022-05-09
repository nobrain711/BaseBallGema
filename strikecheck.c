int stireckeck(int a1, int a2, int a3, int d1, int d2, int d3) {
	int cnt = 0;//stire카운트

	//만약 공격수하고 방어수가 위치하고 숫자가 같으면 스트라이크 증가
	if (a1 == d1) {
		cnt++;
	}
	if (a2 == d2) {
		cnt++;
	}
	if (a3 == d3) {
		cnt++;
	}

	//스트라이크 수를 반환
	return cnt;
}