#include <iostream>
#include <deque>
#include <queue>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

struct ArrIndex {
	int index, value;
	ArrIndex(int _index, int _value) : index(_index), value(_value) {}    // ������ ����

	// �׳� ������ ��� ���� �й����� �й��� �������� Top �� ���� �Ѵ�
	bool operator<(const ArrIndex arr) const {
		return this->value > arr.value;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, L;
	cin >> N>> L;
	vector<int> A;
	deque<int> D;
	priority_queue <ArrIndex> pq;
	
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		A.push_back(num);
	}
	vector<int> answer;
	
	for (int i = 0; i < N; i++)
	{
		pq.push(ArrIndex(i,A[i]));

		while (pq.top().index <= (i-L))
		{
			if(!pq.empty())
				pq.pop();
		}

		answer.push_back(pq.top().value);
	}

	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << " ";
	}
}