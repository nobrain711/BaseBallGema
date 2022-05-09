int ballcheck(int a1, int a2, int a3, int d1, int d2, int d3) {
	int cnt = 0;

	if (a1 == d2 || a1 == d3) {//a1이 d2와 d3랑 같은 경우 ball을 1증가 해준다.
		cnt++;
	}
	if (a2 == d1 || a2 == d3) {//a2가 d2와 d3랑 같은 경우 ball을 1증가 해준다.
		cnt++;
	}
	if (a3 == d1 || a3 == d2) {//a3가 d1와 d2랑 같은 경우 ball을 1증가 해준다.
		cnt++;
	}
	return cnt;
}