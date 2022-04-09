// lab05-templates.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once

#include <utility>
#include <queue>
#include <cassert>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

template<typename T>
T min_my(const T& a, const T& b) {
	if (a < b) {
		a;
	}
	else {
		return  b;
	}
}

template <typename F>
struct queue {
private:
	F* uk;
	const int size;
	int top;
public:
	queue<F>::queue(int maxSize) : size(maxSize)
	{
		uk = new F[size];
		top = 0;
	}
	void push(const F&);
	void pop();
};

struct queue_overflow : std::runtime_error {
	queue_overflow()
		: std::runtime_error("the queue is full: ") {}
};

struct empty_queue : std::runtime_error {
	empty_queue()
		: std::runtime_error("the queue is empty: ") {}
};

template <typename F>
void queue<F>::push(const F& value) {
	if (top < size) {
		throw queue_overflow();
	}
	uk[top++] = value;
}

template <typename F>
void queue<F>::pop() {
	if (top == 0) {
		throw empty_queue();
	}
	uk[top--];
}
