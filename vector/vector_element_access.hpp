/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_element_access.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:28:35 by aweaver           #+#    #+#             */
/*   Updated: 2023/01/23 15:38:07 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
