/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:11:54 by aweaver           #+#    #+#             */
/*   Updated: 2023/02/10 12:14:55 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_HPP
# define STACK_HPP

namespace ft
{
	template <class T, class Container = std::vector<T> >
	class	stack
	{
		public:
			explicit			stack(const Container& = Container());
			bool				empty() const { return c.empty(); }
			size_type			size() const { return c.size(); }
			value_type&			top() { return c.back(); }
			const value_type&	top() const { return c.back(); }
			void				push(const value_type& x) { c.push_back(x); }
			void				pop() { c.pop_back(); }

			typedef	typename	Container::value_type	value_type;
			typedef typename	Container::size_type	size_type;
			typedef	Container	container_type;

			//this is necessary to allow access to c outside of the class
			friend	bool	operator==(const stack<T, Container>& x, const stack<T, Container>& y);
			friend	bool	operator<(const stack<T, Container>& x, const stack<T, Container>& y);
		protected:
			Container	c;

	};
}

#endif
