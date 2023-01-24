# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    vectorConstructor.tpp                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 17:49:37 by aweaver           #+#    #+#              #
#    Updated: 2023/01/24 17:51:51 by aweaver          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

//Constructors
		template <class T, class Alloc>
		explicit vector(const allocator_type& alloc = allocator_type()){}
		template <class T, class Alloc>
		explicit vector(size_t n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type()){}
		template <class InputIterator>
		vector(InputIterator first, InputIterator last, cocnst allocator_type& alloc = allocator_type()){}

//Destructor
		template <class InputIterator>
		vector<T, Alloc>::~vector();
