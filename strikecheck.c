int stireckeck(int a1, int a2, int a3, int d1, int d2, int d3) {
	int cnt = 0;//stireī��Ʈ

	//���� ���ݼ��ϰ� ������ ��ġ�ϰ� ���ڰ� ������ ��Ʈ����ũ ����
	if (a1 == d1) {
		cnt++;
	}
	if (a2 == d2) {
		cnt++;
	}
	if (a3 == d3) {
		cnt++;
	}

	//��Ʈ����ũ ���� ��ȯ
	return cnt;
}