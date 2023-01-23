/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_capacity.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:28:52 by aweaver           #+#    #+#             */
/*   Updated: 2023/01/23 15:32:33 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//size
	size_type size() const;

//max_size
	size_type	max_size() const;

//resize
	void	resize (size_type n, value_type val = value_type());

//capacity
	size_type	capacity() const;

//empty
	bool empty() const;

//reserve
	void	reserve(size_type n);
