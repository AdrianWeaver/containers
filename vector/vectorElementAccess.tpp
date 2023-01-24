# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    vectorElementAccess.tpp                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 17:49:43 by aweaver           #+#    #+#              #
#    Updated: 2023/01/24 17:49:45 by aweaver          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

//Operator[]
	reference		operator[] (size_type n);
	const_reference	operator[] (size_type n) const;

//at
	reference at (size_type n);
	const_reference at	(size_type n) const;

//front
	reference	front();
	const_reference	front() const;

//back
	reference		back();
	const_reference	back();
