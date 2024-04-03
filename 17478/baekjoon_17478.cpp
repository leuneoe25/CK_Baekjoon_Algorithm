#include <iostream>
#include <vector>
using namespace std;

void indent(int m)
{
	for (int i = 0; i < m; i++)
	{
		cout << "____";
	}
}

void recursion(int now, int count)
{
	indent(now);
	cout << "\"����Լ��� ������?\"" << endl;
	if (count == now)
	{
		indent(now);
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << endl;
		indent(now);
		cout << "��� �亯�Ͽ���." << endl;
		return;
	}

	
	indent(now);
	cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << endl;
	indent(now);
	cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << endl;
	indent(now);
	cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << endl;

	recursion(now+1, count);

	indent(now);
	cout << "��� �亯�Ͽ���." << endl;
}


int main()
{
	int N;
	cin >> N;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << endl;
	recursion(0, N);
}