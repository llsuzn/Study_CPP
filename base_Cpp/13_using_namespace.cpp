#include <iostream>

using namespace std;

namespace Hybrid
{
	void HybFunc() {
		cout << "So Simple Function!" << endl;
		cout << "In Namespace Hybrid!" << endl;
	}
}

int main() {
	using Hybrid::HybFunc; // Hybrid ���ӽ����̽� �ȿ� �ִ� HybFunc�� ����ϰڴ�
	HybFunc(); // �Լ� �̸������ε� ����� �����ϴ�

	return 0;
}