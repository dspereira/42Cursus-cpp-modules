#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

template<typename T>
void swap(T &a, T &b)
{
	T buf;

	buf = a;
	a = b;
	b = buf;
}

template<typename T>
const T& min(const T &a, const T &b)
{
	return (a < b ? a : b);
}

template<typename T>
const T& max(const T &a, const T &b)
{
	return (a > b ? a : b);
}

#endif