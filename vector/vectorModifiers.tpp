#include "vector.hpp"

//assign
	template < class T, class Alloc>
	template <class InputIterator>
	void	ft::vector<T, Alloc>::assign(InputIterator first, InputIterator last)
	{
	}

	template < class T, class Alloc>
	void	ft::vector<T, Alloc>::assign(size_type n, const value_type& val)
	{
	}

//push_back
	template < class T, class Alloc>
	void	ft::vector<T, Alloc>::push_back(const value_type& val)
	{
	}

//pop_back
	template < class T, class Alloc>
	void	ft::vector<T, Alloc>::pop_back()
	{
	}

//insert
	template < class T, class Alloc>
	ft::vector<T, Alloc>::iterator	ft::vector<T, Alloc>::insert(iterator position, const value_type& val)
	{
	}
	template < class T, class Alloc>
	void		ft::vector<T, Alloc>::insert(iterator position, size_type n, const value_type& val)
	{
	}
	template < class T, class Alloc>
	template <class InputIterator>
	void		ft::vector<T, Alloc>::insert(iterator position, InputIterator first, InputIterator last)
	{
	}

//erase
	template < class T, class Alloc>
	ft::vector<T, Alloc>::iterator ft::vector<T, Alloc>::erase(iterator position)
	{
	}
	template < class T, class Alloc>
	ft::vector<T, Alloc>::iterator ft::vector<T, Alloc>::erase(iterator first, iterator last)
	{
	}

//swap
	template < class T, class Alloc>
	void ft::vector<T, Alloc>::swap(vector& source)
	{
	}

//clear
	template < class T, class Alloc>
	void ft::vector<T, Alloc>::clear()
	{
		for (size_type i = 0; i < this->_size; i++)
			this->_allocator.destroy(this->_storage + i);
		this->_size = 0;
	}
