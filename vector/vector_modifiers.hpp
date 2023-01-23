/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_modifiers.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:38:38 by aweaver           #+#    #+#             */
/*   Updated: 2023/01/23 15:47:13 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//assign
	template <class InputIterator>
		void	assign (InputIterator first, InputIterator last);
	void assign (size_type n, const value_type& val);

//push_back
	void	push_back(const value_type& val);

//pop_back
	void pop_back();

//insert
	iterator	insert(iterator position, const value_type& val);
	void		insert(iterator position, size_type n, const value_type& val);
	template <class InputIterator>
	void		insert(iterator position, InputIterator first, InputIterator last);

//erase
	iterator erase(iterator position);
	iterator erase(iterator first, iterator last);

//swap
	void swap(vector& source);

//clear
	void clear();
