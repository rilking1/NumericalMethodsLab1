#include<iostream>
#include<cmath>
#include<numbers>
#include<iomanip>
#include"function.h"

const auto PI = std::numbers::pi;

using namespace function;

namespace test1 {
	T F(T x) {
		return x * x * x + 3 * x * x - x -3;
	}
	T dF(T x) {
		return 3 * x * x + 6 * x -1;
	}
	T ddF(T x) {
		return 6 * x + 6;
	}
	const auto seg = std::make_pair(0.9999, 1.1);
}

using namespace test1;

int main() {
	std::cerr << "Xn\t\tf(Xn)\t\tacc\n";
	std::cout << std::fixed << std::setprecision(8);
	std::cerr << std::fixed << std::setprecision(8);
	//auto res = chillzone_metod(F, dF, seg, 0.000001);
	auto res = Newton(F, dF, ddF, seg, 0.0001);
	for (const auto& x : res) {
		std::cout << x.first << '\t' << F(x.first) << '\t' << x.second << '\n';
	}
}