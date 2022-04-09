#include "lab05-templates.h"
#include "lab05-templates.cpp"

int main() {
	int a;
	queue q(10);
	while (std::cin >> a) {
		try {
			q.push(a);
			std::cout << "\n";
		}
		catch (std::exception& e) {
			std::cout << e.what() << "\n";
		}
	}
}