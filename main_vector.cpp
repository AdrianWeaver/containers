#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
#if CUSTOMSCOPE == 0 //CREATE A REAL STL EXAMPLE
	#include <map>
	#include <stack>
	#include <vector>
	namespace ft = std;
#else
	#include "map.hpp"
	#include "stack.hpp"
	#include "vector.hpp"
	#include "ft_containers.hpp"
#endif

#include <stdlib.h>

#define TEST_ASSIGN 0
#define TEST_AT 0
#define TEST_BACK 0
#define TEST_BEGIN 0
#define TEST_CAPACITY 0
#define TEST_CLEAR 1
#define TEST_EMPTY 0
#define TEST_END 0
#define TEST_ERASE 0
#define TEST_FRONT 0
#define TEST_GET_ALLOCATOR 0
#define TEST_INSERT 0
#define TEST_MAX_SIZE 0
#define TEST_OPERATOR_BRACKET 0
#define TEST_OPERATOR_EQUAL 0
#define TEST_POP_BACK 0
#define TEST_PUSH_BACK 0
#define TEST_RBEGIN 0
#define TEST_REND 0
#define TEST_RESERVE 0
#define TEST_RESIZE 1
#define TEST_SIZE 0
#define TEST_SWAP 0

#if TEST_OPERATOR_EQUAL
void print(auto const comment, auto const& container)
{
	auto size = std::size(container);
	std::cout << comment << "{ ";
	for (auto const& element: container)
		std::cout << element << (--size ? ", " : " ");
	std::cout << "}\n";
}
#endif

#if TEST_INSERT
void print(int id, const std::vector<int>& container)
{
	std::cout << id << ". ";
	for (const int x: container)
		std::cout << x << ' ';
	std::cout << '\n';
}
#endif

#if TEST_ERASE
void print_container(const std::vector<int>& c)
{
	for (int i : c)
		std::cout << i << " ";
	std::cout << '\n';
}
#endif

#if TEST_POP_BACK
template<typename T>
void print(T const & xs)
{
	std::cout << "[ ";
	for(auto const & x : xs) {
		std::cout << x << ' ';
	}
	std::cout << "]\n";
}

#endif

#if TEST_RESERVE
template<class Tp>
struct NAlloc
{
	typedef Tp value_type;

	NAlloc() = default;
	template<class T>
		NAlloc(const NAlloc<T>&) {}

	Tp* allocate(std::size_t n)
	{
		n *= sizeof(Tp);
		Tp* p = static_cast<Tp*>(::operator new(n));
		std::cout << "allocating " << n << " bytes @ " << p << '\n';
		return p;
	}

	void deallocate(Tp* p, std::size_t n)
	{
		std::cout << "deallocating " << n * sizeof *p << " bytes @ " << p << "\n\n";
		::operator delete(p);
	}
};

template<class T, class U>
bool operator==(const NAlloc<T>&, const NAlloc<U>&) { return true; }

template<class T, class U>
bool operator!=(const NAlloc<T>&, const NAlloc<U>&) { return false; }template<class Tp>
#endif
#if TEST_SWAP
template<class Os, class Co>
Os& operator<<(Os& os, const Co& co)
{
	os << "{";
	for (auto const& i : co)
		os << ' ' << i;
	return os << " } ";
}
#endif
int main()
{
#if TEST_ASSIGN
	{
		 std::vector<char> characters;

	auto print_vector = [&]()
	{
		for (char c : characters)
			std::cout << c << ' ';
		std::cout << '\n';
	};

	characters.assign(5, 'a');
	print_vector();

	const std::string extra(6, 'b');
	characters.assign(extra.begin(), extra.end());
	print_vector();

	characters.assign({'C', '+', '+', '1', '1'});
	print_vector();
	}
#endif
#if TEST_AT
	{
		 std::vector<int> data = { 1, 2, 4, 5, 5, 6 };

	// Set element 1
	data.at(1) = 88;

	// Read element 2
	std::cout << "Element at index 2 has value " << data.at(2) << '\n';

	std::cout << "data size = " << data.size() << '\n';

	try {
		// Set element 6
		data.at(6) = 666;
	} catch (std::out_of_range const& exc) {
		std::cout << exc.what() << '\n';
	}

	// Print final values
	std::cout << "data:";
	for (int elem : data)
		std::cout << " " << elem;
	std::cout << '\n';
	}
#endif
#if TEST_BACK
	{
		 std::vector<char> letters {'a', 'b', 'c', 'd', 'e', 'f'};

	if (!letters.empty()) {
		std::cout << "The last character is '" << letters.back() << "'.\n";
	}
	}
#endif
#if TEST_BEGIN
	{
			std::vector<int> nums {1, 2, 4, 8, 16};
	std::vector<std::string> fruits {"orange", "apple", "raspberry"};
	std::vector<char> empty;
 
	// Print vector.
	std::for_each(nums.begin(), nums.end(), [](const int n) { std::cout << n << ' '; });
	std::cout << '\n';
 
	// Sums all integers in the vector nums (if any), printing only the result.
	std::cout << "Sum of nums: "
			  << std::accumulate(nums.begin(), nums.end(), 0) << '\n';
 
	// Prints the first fruit in the vector fruits, checking if there is any.
	if (!fruits.empty())
		std::cout << "First fruit: " << *fruits.begin() << '\n';
 
	if (empty.begin() == empty.end())
		std::cout << "vector 'empty' is indeed empty.\n";
	}
#endif
#if TEST_CAPACITY
	{
			int sz = 100;
	std::vector<int> v;

	auto cap = v.capacity();
	std::cout << "Initial size: " << v.size() << ", capacity: " << cap << '\n';

	std::cout << "\nDemonstrate the capacity's growth policy."
				 "\nSize:  Capacity:  Ratio:\n" << std::left;
	while (sz-- > 0) {
		v.push_back(sz);
		if (cap != v.capacity()) {
			std::cout << std::setw( 7) << v.size()
					  << std::setw(11) << v.capacity()
					  << std::setw(10) << v.capacity() / static_cast<float>(cap) << '\n';
			cap = v.capacity();
		}
	}

	std::cout << "\nFinal size: " << v.size() << ", capacity: " << v.capacity() << '\n';
	}
#endif
#if TEST_CLEAR
	{
		std::vector<int> container{1, 2, 3};

		auto print = [](const int& n) { std::cout << " " << n; };

		std::cout << "Before clear:";
		std::for_each(container.begin(), container.end(), print);
		std::cout << "\nSize=" << container.size() << ", Capacity=" << container.capacity() << '\n';

		std::cout << "Clear\n";
		container.clear();

		std::cout << "After clear:";
		std::for_each(container.begin(), container.end(), print);
		std::cout << "\nSize=" << container.size() << ", Capacity=" << container.capacity() << '\n';
	}
#endif
#if TEST_EMPTY
	{
		std::cout << std::boolalpha;
	std::vector<int> numbers;
	std::cout << "Initially, numbers.empty(): " << numbers.empty() << '\n';

	numbers.push_back(42);
	std::cout << "After adding elements, numbers.empty(): " << numbers.empty() << '\n';
	}
#endif
#if TEST_END
	{
		std::vector<int> nums {1, 2, 4, 8, 16};
		std::vector<std::string> fruits {"orange", "apple", "raspberry"};
		std::vector<char> empty;

		// Print vector.
		std::for_each(nums.begin(), nums.end(), [](const int n) { std::cout << n << ' '; });
		std::cout << '\n';

		// Sums all integers in the vector nums (if any), printing only the result.
		std::cout << "Sum of nums: "
			<< std::accumulate(nums.begin(), nums.end(), 0) << '\n';

		// Prints the first fruit in the vector fruits, checking if there is any.
		if (!fruits.empty())
			std::cout << "First fruit: " << *fruits.begin() << '\n';

		if (empty.begin() == empty.end())
			std::cout << "vector 'empty' is indeed empty.\n";
	}
#endif
#if TEST_ERASE
	{
		std::vector<int> c{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		print_container(c);

		c.erase(c.begin());
		print_container(c);

		c.erase(c.begin() + 2, c.begin() + 5);
		print_container(c);

		// Erase all even numbers
		for (std::vector<int>::iterator it = c.begin(); it != c.end();)
		{
			if (*it % 2 == 0)
				it = c.erase(it);
			else
				++it;
		}
		print_container(c);
	}
#endif
#if TEST_FRONT
	{
		std::vector<char> letters {'o', 'm', 'g', 'w', 't', 'f'};

		if (!letters.empty())
		{
			std::cout << "The first character is '" << letters.front() << "'.\n";
		}
	}
#endif
#if TEST_GET_ALLOCATOR
	{

	}
#endif

#if TEST_INSERT
	{
		std::vector<int> c1(3, 100);
		print(1, c1);

		auto it = c1.begin();
		it = c1.insert(it, 200);
		print(2, c1);

		c1.insert(it, 2, 300);
		print(3, c1);

		// `it` no longer valid, get a new one:
		it = c1.begin();

		std::vector<int> c2(2, 400);
		c1.insert(std::next(it, 2), c2.begin(), c2.end());
		print(4, c1);

		int arr[] = {501, 502, 503};
		c1.insert(c1.begin(), arr, arr + std::size(arr));
		print(5, c1);

		c1.insert(c1.end(), {601, 602, 603});
		print(6, c1)
	}
#endif
#if TEST_MAX_SIZE
	{
		std::vector<char> q;
		std::cout.imbue(std::locale("en_US.UTF-8"));
		std::cout << "Maximum size of a std::vector is " << q.max_size() << '\n';
	}
#endif
#if TEST_OPERATOR_BRACKET
	{
		std::vector<int> numbers {2, 4, 6, 8};

		std::cout << "Second element: " << numbers[1] << '\n';

		numbers[0] = 5;

		std::cout << "All numbers:";
		for (auto i : numbers) {
			std::cout << ' ' << i;
		}
		std::cout << '\n';
	}
#endif
#if TEST_OPERATOR_EQUAL
	{
		std::vector<int> x { 1, 2, 3 }, y, z;
		const auto w = { 4, 5, 6, 7 };

		std::cout << "Initially:\n";
		print("x = ", x);
		print("y = ", y);
		print("z = ", z);

		std::cout << "Copy assignment copies data from x to y:\n";
		y = x;
		print("x = ", x);
		print("y = ", y);

		std::cout << "Move assignment moves data from x to z, modifying both x and z:\n";
		z = std::move(x);
		print("x = ", x);
		print("z = ", z);

		std::cout << "Assignment of initializer_list w to z:\n";
		z = w;
		print("w = ", w);
		print("z = ", z);
	}
#endif

#if TEST_POP_BACK
	{
		std::vector<int> numbers;

		print(numbers);

		numbers.push_back(5);
		numbers.push_back(3);
		numbers.push_back(4);

		print(numbers);

		numbers.pop_back();

		print(numbers);
	}
#endif
#if TEST_PUSH_BACK
	{
		std::vector<std::string> letters;

		letters.push_back("abc");
		std::string s{"def"};
		letters.push_back(std::move(s));

		std::cout << "std::vector `letters` holds: ";
		for (auto&& e : letters) std::cout << std::quoted(e) << ' ';

		std::cout << "\nMoved-from string `s` holds: " << std::quoted(s) << '\n';
	}
#endif
#if TEST_RBEGIN
	{
		std::vector<int> nums {1, 2, 4, 8, 16};
		std::vector<std::string> fruits {"orange", "apple", "raspberry"};
		std::vector<char> empty;

		// Print vector.
		std::for_each(nums.rbegin(), nums.rend(), [](const int n) { std::cout << n << ' '; });
		std::cout << '\n';

		// Sums all integers in the vector nums (if any), printing only the result.
		std::cout << "Sum of nums: "
			<< std::accumulate(nums.rbegin(), nums.rend(), 0) << '\n';

		// Prints the first fruit in the vector fruits, checking if there is any.
		if (!fruits.empty())
			std::cout << "First fruit: " << *fruits.rbegin() << '\n';

		if (empty.rbegin() == empty.rend())
			std::cout << "vector 'empty' is indeed empty.\n";
	}
#endif
#if TEST_REND
	{
		std::vector<int> nums {1, 2, 4, 8, 16};
		std::vector<std::string> fruits {"orange", "apple", "raspberry"};
		std::vector<char> empty;

		// Print vector.
		std::for_each(nums.rbegin(), nums.rend(), [](const int n) { std::cout << n << ' '; });
		std::cout << '\n';

		// Sums all integers in the vector nums (if any), printing only the result.
		std::cout << "Sum of nums: "
			<< std::accumulate(nums.rbegin(), nums.rend(), 0) << '\n';

		// Prints the first fruit in the vector fruits, checking if there is any.
		if (!fruits.empty())
			std::cout << "First fruit: " << *fruits.rbegin() << '\n';

		if (empty.rbegin() == empty.rend())
			std::cout << "vector 'empty' is indeed empty.\n";
	}
#endif
#if TEST_RESERVE
	{
		constexpr int max_elements = 32;

		std::cout << "using reserve: \n";
		{
			std::vector<int, NAlloc<int>> v1;
			v1.reserve(max_elements); // reserves at least max_elements * sizeof(int) bytes

			for (int n = 0; n < max_elements; ++n)
				v1.push_back(n);
		}

		std::cout << "not using reserve: \n";
		{
			std::vector<int, NAlloc<int>> v1;

			for (int n = 0; n < max_elements; ++n)
			{
				if (v1.size() == v1.capacity())
					std::cout << "size() == capacity() == " << v1.size() << '\n';
				v1.push_back(n);
			}
		}
	}
#endif
#if TEST_RESIZE
	{
		std::vector<int> c = {1, 2, 3};
		std::cout << "The vector holds: ";
		for (const auto& el: c) std::cout << el << ' ';
		std::cout << '\n';

		c.resize(5);
		std::cout << "After resize up to 5: ";
		for (const auto& el: c) std::cout << el << ' ';
		std::cout << '\n';

		c.resize(2);
		std::cout << "After resize down to 2: ";
		for (const auto& el: c) std::cout << el << ' ';
		std::cout << '\n';

		c.resize(6, 4);
		std::cout << "After resize up to 6 (initializer = 4): ";
		for (const auto& el: c) std::cout << el << ' ';
		std::cout << '\n';
	}
#endif
#if TEST_SIZE
	{
		std::vector<int> nums {1, 3, 5, 7};

		std::cout << "nums contains " << nums.size() << " elements.\n";
	}
#endif
#if TEST_SWAP
	{
		std::vector<int> a1{1, 2, 3}, a2{4, 5};

		auto it1 = std::next(a1.begin());
		auto it2 = std::next(a2.begin());

		int& ref1 = a1.front();
		int& ref2 = a2.front();

		std::cout << a1 << a2 << *it1 << ' ' << *it2 << ' ' << ref1 << ' ' << ref2 << '\n';
		a1.swap(a2);
		std::cout << a1 << a2 << *it1 << ' ' << *it2 << ' ' << ref1 << ' ' << ref2 << '\n';

	}
#endif
}
