int ballcheck(int a1, int a2, int a3, int d1, int d2, int d3) {
	int cnt = 0;

	if (a1 == d2 || a1 == d3) {//a1�� d2�� d3�� ���� ��� ball�� 1���� ���ش�.
		cnt++;
	}
	if (a2 == d1 || a2 == d3) {//a2�� d2�� d3�� ���� ��� ball�� 1���� ���ش�.
		cnt++;
	}
	if (a3 == d1 || a3 == d2) {//a3�� d1�� d2�� ���� ��� ball�� 1���� ���ش�.
		cnt++;
	}
	return cnt;
}