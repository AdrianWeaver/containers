#include "vector.hpp"

//Operator[]
	template < class T, class Alloc >
	ft::vector<T, Alloc>::reference		ft::vector<class T, class Alloc>::operator[] (size_type n)
	{
	}
	template < class T, class Alloc >
	ft::vector<T, Alloc>::const_reference	ft::vector<T, Alloc>::operator[] (size_type n) const
	{
	}

//at
	template < class T, class Alloc >
	ft::vector<T, Alloc>::reference ft::vector<T, Alloc>::at(size_type n)
	{
	}
	template < class T, class Alloc >
	ft::vector<T, Alloc>::const_reference ft::vector<T, Alloc>::at(size_type n) const
	{
	}

//front
	template < class T, class Alloc >
	ft::vector<T, Alloc>::reference	ft::vector<T, Alloc>::front();
	template < class T, class Alloc >
	ft::vector<T, Alloc>::const_reference	ft::vector<T, Alloc>::front() const;

//back
	template < class T, class Alloc >
	ft::vector<T, Alloc>::reference		ft::vector<T, Alloc>::back();
	template < class T, class Alloc >
	ft::vector<T, Alloc>::const_reference	ft::vector<T, Alloc>::back();
