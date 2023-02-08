#include "vector.hpp"

//Constructors
		template <class T, class Alloc>
		ft::vector<T, Alloc>::vector(const allocator_type& alloc = allocator_type())
		{
			this->_allocator = alloc;
			this->_storage = NULL;
			this->_capacity = 0;
			this->_size = 0;
		}
		template <class T, class Alloc>
		ft::vector<T, Alloc>::vector(size_t n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type())
		{
			this->_allocator = alloc;
			this->_storage = this->_allocator(n);
			this->_capacity = n;
			this->_size = n;
			for (size_type i = 0; i < n; i++)
				this->_allocator.construct(this->_storage + i, val);
		}
		template <class InputIterator>
		ft::vector<T, Alloc>::vector(InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type())
		{
		}

//Destructor
		template <class InputIterator>
		ft::vector<T, Alloc>::~vector()
		{
			this->clear();
			this->_allocator.deallocate(this->_storage, this->capacity);
		}
