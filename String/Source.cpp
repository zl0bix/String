#include<iostream>
#include<string> // ���������� ����� �++

int main() {
	int n;

	// ���������� ������ �� ����� C
	/*char c_str[]{'H','i','!','\0'}; // \0 - ���� ����������
	for (int i = 0; i < 3; i++)
		std::cout << c_str[i];
	std::cout << std::endl;

	std::cout << c_str << std::endl;

	char c_str2[]{"Hello world!"};
	std::cout << c_str2 << std::endl;
	*/

	// ������ �� ����� C++
	
	// ������-������ ������ string
	/*
	std::string str;// ������ str
	std::cout << str << std::endl;// ������ ������
	str = "Hello world!";
	std::cout << str << std::endl;
	str = "Bye world!";
	std::cout << str << std::endl;
	
	str += "!!!! :("; //����������� � �������������, ���������� ������ � ����� ������
	std::cout << str + " ..." << std::endl;// str �� �������� Bye world!!!!! :( ...
	std::cout << str << std::endl; // Bye world!!!!! :(
	*/

	// ���� ������
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
	// ������ �����
	/*
	std::string my_str = "Hello world!";

	// ������ length and size, ������������  
	//std::cout << my_str.length() << std::endl;// ���������� ����� ������ 12
	//std::cout << my_str.size() << std::endl;// ���������� ����� ������ 12 ���� ����� ��� length

	// ����� insert
	//my_str.insert(3, "WWW");//��������� �������� � ������, ������� void HelWWWlo world!
	 
	// ����� replace
	//my_str.replace(3, 5, "WWW");// HelWWWrld!
	//std::cout << my_str << std::endl;

	// ����� find, ���������� ������ ��������� ��������� � ������
	//std::cout << my_str.find("l") << std::endl;// 2
	//std::cout << my_str.find("l",5) << std::endl;// 9
	// ����� rfind  ���������� ������� ���������� ��������� 
	//std::cout << my_str.rfind("o") << std::endl;// 7
	//std::cout << my_str.rfind("o", 5) << std::endl;// 4
	// ����� substr, ���������� ��������� �� ������
	//std::cout << my_str.substr(4) << std::endl;// o world!
	//std::cout << my_str.substr(4,5) << std::endl;// o wor
	*/

	// ������� ��� ������ �� ��������
	// ������� to_string ����������� ��������� ��������  ����� � ������
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