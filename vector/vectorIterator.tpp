# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    vectorIterator.tpp                                 :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 17:49:48 by aweaver           #+#    #+#              #
#    Updated: 2023/01/24 17:49:49 by aweaver          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

//begin
	iterator begin();
	const iterator begin() const;

//end
	iterator end();
	const iterator end() const;

//rbegin
	reverse_iterator	rbegin();
	const_reverse_iterator	rbegin() const;

//rend
	reverse_iterator	rend();
	const_reverse_iterator	rend() const;
