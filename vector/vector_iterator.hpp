/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_iterator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:22:33 by aweaver           #+#    #+#             */
/*   Updated: 2023/01/23 15:27:42 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
