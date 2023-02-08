//size
	template <class T, class Alloc>
	ft::vector<T, Alloc>::size_type ft::vector<T, Alloc>::size() const
	{
	}

//max_size
	template <class T, class Alloc>
	ft::vector<T, Alloc>::size_type	ft::vector<T, Alloc>::max_size() const
	{
	}

//resize
	template <class T, class Alloc>
	void	ft::vector<T, Alloc>::resize(size_type n, value_type val = value_type())
	{
	}

//capacity
	template <class T, class Alloc>
	ft::vector<T, Alloc>::size_type	ft::vector<T, Alloc>::capacity() const
	{
	}

//empty
	template <class T, class Alloc>
	bool ft::vector<T, Alloc>::empty() const
	{
	}

//reserve
	template <class T, class Alloc>
	void	ft::vector<T, Alloc>::reserve(size_type n)
	{
		if (n > this->allocator.max_size())
			throw (std::length_error());
		if (this->_capacity < n)
		{
			value_type *tmp;
			tmp = this->_allocator.allocate(n);
			for (size_type i = 0; i < size; i++)
			{
				this->_allocator.construct(tmp + i, this->_storage[i]);
				this->_allocator.destroy(this->_storage[i]);
			}
			this->_allocator.deallocate(this->_storage, this->capacity);
			this->_storage = tmp;
			this->_capacity = n;
		}
	}
