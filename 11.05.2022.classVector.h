#include <iostream>

constexpr auto PAGE_SIZE = 5;
constexpr auto MAX_ELEM_PER_PAGE(size_t tsize) { return (tsize / PAGE_SIZE + 1) * PAGE_SIZE; }

template <class T>
class MyVector
{
private:
	T* array_buffer;
	size_t size;
public:
	//Конструкторы
	MyVector();
	MyVector(const size_t size);
	// Копирование
	MyVector(const MyVector& obj);
	MyVector<T>& operator= (const MyVector<T>& obj);
	// Перенос
	MyVector(const MyVector&& obj);
	MyVector<T>& operator= (MyVector<T>&& obj);

	MyVector<T>& operator+= (MyVector<T>& obj);
	T operator[](size_t count);

	bool empty() const; // Проверяет заполнен ли вектор.
	const size_t csize() const; // Возвращает количество данных.
	size_t max_size() const; // Возвращает количество данных до перевыделения памяти.
	void resize(const size_t size); // Изменяет размер массива и данных.
	void erase(); // Очищает данные из массива.
	void swap(MyVector<T>& obj); // Обменивает данные в объектах.

	void push_back(const T& data); // Добавления нового элемента в конец вектора
	void pop_back(); // Удалить последний элемент

	void push_front(const T& data); // Добавления нового элемента в начало вектора
	void pop_front(); // Удалить первый элемент

	// Оператор потока
	template <class U>
	friend std::ostream& operator<< (std::ostream& os, const MyVector<U>& obj);

	~MyVector(); // Деструктор
};


template<class T>
inline MyVector<T>::MyVector()
{
	size = 0;
}

template<class T>
inline MyVector<T>::MyVector(const size_t size)
{
	array_buffer = new int[size];
	size = PAGE_SIZE;
}

template<class T>
inline const size_t MyVector<T>::csize() const
{
	return size;
}

template<class T>
inline size_t MyVector<T>::max_size() const
{
	int count = 0;
	while (array_buffer[count] != nullptr)
	{
		count++;
	}
	return size - count;
}

template<class T>
inline void MyVector<T>::erase()
{
	PAGE_SIZE = 0;
}

template<class T>
inline void MyVector<T>::swap(MyVector<T>& obj)
{
	T* temparr = new T[size];
	for (size_t i = 0; i < size; i++)
		temparr[i] = this->array_buffer[i];
	for (size_t i = 0; i < size; i++)
		this->array_buffer[i] = obj.array_buffer[i];
	for (size_t i = 0; i < size; i++)
		obj.array_buffer[i] = temparr[i];
	delete[] temparr;
}

template<class T>
inline void MyVector<T>::push_back(const T& data)
{	
	for (size_t i = 0; i < size; i++)
	{
		if (array_buffer[i] == nullptr)
			array_buffer[i] = data;
		else
		{
			T* temparr = new int[size];
			int newsize = size + ((size / 5) + 1);

			for (size_t j = 0; j < size; j++)
				temparr[j] = array_buffer[j];

			array_buffer = new int[newsize];
			for (size_t j = 0; j < newsize; j++)
				array_buffer[j] = temparr[j];

			for (size_t j = 0; j < newsize; j++)
			{
				if (array_buffer[j] == nullptr)
					array_buffer[j] = data;
			}
			delete[] temparr;
			size = newsize;
		}
	}
}

template<class T>
inline void MyVector<T>::pop_back()
{
	size - 1;
}

template<class T>
inline MyVector<T>::~MyVector()
{
	delete[] array_buffer;
}
