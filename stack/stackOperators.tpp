#include "stack.hpp"

namespace ft
{
	template <class T, class Container>
	bool	operator==(const stack<T, Container>& lhs, const stack<T, Container>& rhs)
	{
		return (lhs.c == rhs.c);
	}
	template <class T, class Container>
	bool	operator<(const stack<T, Container>& lhs, const stack<T, Container>& rhs);
	{
		return (lhs.c < rhs.c);
	}
	template <class T, class Container>
	bool	operator!=(const stack<T, Container>& lhs, const stack<T, Container>& rhs)
	{
		return !(lhs == rhs);
	}
	template <class T, class Container>
	bool	operator>(const stack<T, Container>& lhs, const stack<T, Container>& rhs);
	{
		return (rhs.c < lhs.c);
	}
	template <class T, class Container>
	bool	operator>=(const stack<T, Container>& lhs, const stack<T, Container>& rhs);
	{
		return !(rhs.c < lhs.c);
	}
	template <class T, class Container>
	bool	operator<=(const stack<T, Container>& lhs, const stack<T, Container>& rhs);
	{
		return !(lhs.c < rhs.c);
	}
}

#endif
