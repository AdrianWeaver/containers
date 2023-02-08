/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:21:59 by aweaver           #+#    #+#             */
/*   Updated: 2023/02/08 18:14:05 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP
# include <iostream>
# include <memory>
# include <stdexcept>

namespace ft
{
	template < class T, class Alloc = std::allocator<T> >
	class vector
	{
		public:
		//Constructors
			explicit vector(const allocator_type& alloc = allocator_type());
			explicit vector(size_t n, const value_type& val = value_type(),
					const allocator_type& alloc = allocator_type());
			template <class InputIterator>
			vector(InputIterator first, InputIterator last,
					const allocator_type& alloc = allocator_type());
		//Destructor
			~vector();
		//Operator=
			vector& operator=(const vector & source);
		//iterators
			iterator begin();
			const iterator begin() const;

			iterator end();
			const iterator end() const;

			reverse_iterator	rbegin();
			const_reverse_iterator	rbegin() const;

			reverse_iterator	rend();
			const_reverse_iterator	rend() const;
		//capacity
			size_type size() const;
			size_type	max_size() const;
			void	resize (size_type n, value_type val = value_type());
			size_type	capacity() const;
			bool empty() const;
			void	reserve(size_type n);
		//element_access
			reference		operator[] (size_type n);
			const_reference	operator[] (size_type n) const;
			reference at (size_type n);
			const_reference at	(size_type n) const;
			reference	front();
			const_reference	front() const;
			reference		back();
			const_reference	back();
		//modifiers
			template <class InputIterator>
			void	assign (InputIterator first, InputIterator last);
			void	assign (size_type n, const value_type& val);
			void	push_back(const value_type& val);
			void	pop_back();
			iterator	insert(iterator position, const value_type& val);
			void		insert(iterator position, size_type n, const value_type& val);
			template <class InputIterator>
			void		insert(iterator position, InputIterator first, InputIterator last);

			iterator erase(iterator position);
			iterator erase(iterator first, iterator last);
			void swap(vector& source);
			void clear();

			typedef T									value_type;
			typedef Alloc								allocator_type;
			typedef T&									reference;
			typedef const T&							const_reference;
			typedef T*									pointer;
			typedef const T*							const_pointer;
			typedef T*									iterator;
			typedef const T*							const_iterator;
			typedef reverse_iterator<iterator>			reverse_iterator;
			typedef reverse_iterator<const_iterator>	const_reverse_iterator;
			typedef ptrdiff_t							difference_type;
			typedef size_t								size_type;
		private:
			size_type		_capacity;
			size_type		_size;
			value_type		*_storage;
			allocator_type	_allocator

	};
}

#endif


