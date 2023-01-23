/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:21:59 by aweaver           #+#    #+#             */
/*   Updated: 2023/01/23 16:20:09 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP

namespace ft
{
	template < class T, class Alloc = allocator<T> >
	class vector
	{
		public:
			#include "vector_constructor.hpp"
			#include "vector_operator.hpp"
			#include "vector_iterator.hpp"
			#include "vector_capacity.hpp"
			#include "vector_element_access.hpp"
			#include "vector_modifiers.hpp"
			#include "vector_allocator.hpp"

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
	};
}

#endif
