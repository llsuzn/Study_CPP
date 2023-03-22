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
	using Hybrid::HybFunc; // Hybrid 네임스페이스 안에 있는 HybFunc를 사용하겠다
	HybFunc(); // 함수 이름만으로도 사용이 가능하다

	return 0;
}