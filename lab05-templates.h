// lab05-templates.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once

#include <utility>
#include <queue>

template<typename T>
struct foo {
	template<typename U>
	struct minimum {
		static int my_min(int a, int b);
	};

	template <typename F>
	struct queue {
	private:
		T* uk;
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

	/*template<typename F>
	struct queue {
	private:
		std::queue<F> digits;
		int N;
	public:
		queue(int m) {
			digits.push(m);
			N = m;
		}

		friend queue& operator>>(queue& value, F i) {
			if (value.digits.size() < 2) {
				value.digits.push(i);
				return value;
			}
			else {
				return value;
			}
		}

		friend queue& operator<<(queue& value, F i) {
			if (value.digits.top()) {
				i = value.digits.front();
				value.digits.pop();
				return value;
			}
			else {
				return value;
			}
		}
	};*/

};