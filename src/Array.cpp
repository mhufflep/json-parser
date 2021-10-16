#include "Array.hpp"

namespace JSON {

	Array::Array(const string &rawjson) : AType("array", rawjson) {}

	Array::Array(void) : AType("array", "") {}

	Array::~Array(void) {}

	Array::Array(const Array &other) {
		*this = other;
	}

	Array &Array::operator=(const Array &other) { 
		if (this != &other) {
			this->operator=(other);
			_arr = other._arr;
		}
		return *this;
	}

	void Array::parse(void) {
	}
}