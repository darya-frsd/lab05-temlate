#include "lab05-templates.h"
#include <queue>
#include <cassert>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

template<typename T>
template<typename U>
int foo<T>::minimum<U>::my_min(int a, int b) {
	if (a < b) {
		return { a };
	}
	else {
		return { b };
	}
}

struct queue_overflow : std::runtime_error {
	queue_overflow()
		: std::runtime_error("the queue is full: ") {}
};

struct empty_queue : std::runtime_error {
	empty_queue()
		: std::runtime_error("the queue is empty: ") {}
};


template <typename F>
void foo<T>::queue<F>::push(const F& value) {
	if (top < size) {
		throw queue_overflow();
	}
	uk[top++] = value;
}

template <typename F>
void foo<T>::queue<F>::pop() {
	if (top == 0) {
		throw empty_queue();
	}
	uk[top--];
}
