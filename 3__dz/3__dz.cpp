#include <iostream>

int main(){
	int a[8], u=1;
	for (int i = 0; i < 8; i++) {
		a[i] = u;
		std::cout << a[i] << " ";
		u += 3;
	}
}