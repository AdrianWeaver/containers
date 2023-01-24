# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    vectorCapacity.tpp                                 :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 17:49:30 by aweaver           #+#    #+#              #
#    Updated: 2023/01/24 17:54:46 by aweaver          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

//size
	template <class T, class Alloc>
	size_type ft::vector<T, Alloc>::size() const;

//max_size
	template <class T, class Alloc>
	size_type	ft::vector<T, Alloc>::max_size() const;

//resize
	template <class T, class Alloc>
	void	ft::vector<T, Alloc>::resize(size_type n, value_type val = value_type());

//capacity
	template <class T, class Alloc>
	size_type	ft::vector<T, Alloc>::capacity() const;

//empty
	template <class T, class Alloc>
	bool ft::vector<T, Alloc>::empty() const;

//reserve
	template <class T, class Alloc>
	void	ft::vector<T, Alloc>::reserve(size_type n);
