# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    vectorAllocator.tpp                                :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 18:00:55 by aweaver           #+#    #+#              #
#    Updated: 2023/01/24 18:00:58 by aweaver          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

//get_allocator
	template <class T, class Alloc>
	allocator_type ft::vector<T, Alloc>get_allocator() const;
