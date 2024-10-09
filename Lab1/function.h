#pragma once
#include <string>
#include <vector>
#include <utility>

namespace function {
	using T = double;
	using segment_t = std::pair<T, T>;
	using val_and_acc_t = std::pair<T, T>;
	typedef T (*func_t) (T);

	std::vector<val_and_acc_t> chillzone_metod(func_t func, func_t deriv, segment_t seg, T acc);
	std::vector<val_and_acc_t> Newton(func_t func, func_t deriv, func_t second_deriv, segment_t seg, T acc);
}