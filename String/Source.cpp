#include<iostream>
#include<string> // библиотека строк с++

int main() {
	int n;

	// Символьный массив из языка C
	/*char c_str[]{'H','i','!','\0'}; // \0 - нуль терминатор
	for (int i = 0; i < 3; i++)
		std::cout << c_str[i];
	std::cout << std::endl;

	std::cout << c_str << std::endl;

	char c_str2[]{"Hello world!"};
	std::cout << c_str2 << std::endl;
	*/

	// Строки из языка C++
	
	// Строка-объект класса string
	/*
	std::string str;// объект str
	std::cout << str << std::endl;// пустая строка
	str = "Hello world!";
	std::cout << str << std::endl;
	str = "Bye world!";
	std::cout << str << std::endl;
	
	str += "!!!! :("; //Кокатинация с присваиванием, добавление текста в конец строки
	std::cout << str + " ..." << std::endl;// str не меняется Bye world!!!!! :( ...
	std::cout << str << std::endl; // Bye world!!!!! :(
	*/

	// Ввод строки
	/*
	std::cout << "Hello what are your name? \nName -> ";
	std::string name;
	std::cin >> name;
	std::cout << "Hi, " << name <<" !" << std::endl;

	std::cin.ignore();

	std::cout << "What are your post?\nEnter -> ";
	std::string job;
	std::getline(std::cin, job);
	std::cout << "Ohh, " << job << "? Cool!\n";

	std::cout << "What are your age?\n Enter -> ";
	int age;
	std::cin >> age;
	std::cout << "Good age " << age << std::endl;
	*/
	// Методы строк
	/*
	std::string my_str = "Hello world!";

	// Методы length and size, возвращающие  
	//std::cout << my_str.length() << std::endl;// возвращает длину строки 12
	//std::cout << my_str.size() << std::endl;// возвращает длину строки 12 тоже самое как length

	// Метод insert
	//my_str.insert(3, "WWW");//вставляет значение в строку, функция void HelWWWlo world!
	 
	// Метод replace
	//my_str.replace(3, 5, "WWW");// HelWWWrld!
	//std::cout << my_str << std::endl;

	// Метод find, возвращает первое вхождение подстроки в строку
	//std::cout << my_str.find("l") << std::endl;// 2
	//std::cout << my_str.find("l",5) << std::endl;// 9
	// Метод rfind  возвращает позицию последнего вхождения 
	//std::cout << my_str.rfind("o") << std::endl;// 7
	//std::cout << my_str.rfind("o", 5) << std::endl;// 4
	// Метод substr, возвращает подстроку из строки
	//std::cout << my_str.substr(4) << std::endl;// o world!
	//std::cout << my_str.substr(4,5) << std::endl;// o wor
	*/

	// Функции для работы со строками
	// Функция to_string возращающая результат перевода  числа в строку
	int num = 123;
	std::string num_str = std::to_string(num);// "123"
	num_str += '!';
	std::cout << "num_str = " << num_str << std::endl;
	
	//
	num_str = "1234";
	num = std::stoi(num_str);//stod (double) stof(float)
	num++;
	std::cout << "num = " << num << std::endl;

	

	return 0;
}