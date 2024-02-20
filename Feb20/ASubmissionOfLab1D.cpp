//#include <algorithm>
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std; 
//
//int main() {
//    std::string str;
//    std::cout << "Enter a string: ";
//    std::getline(std::cin, str); //getline allows multiple words cin >> str; 
//    std::cout << "Original string: " << str << std::endl;
//
//    std::string upper; //what is the initial size of this? 
//    std::string lower;
//
//    upper.resize(str.size());
//    Q: What is the size of upper now? 
//    A: 0
//    lower.resize(str.size());
//
//    std::transform()
//    std::transform(str.begin(), str.end(), upper.begin(), ::toupper);
//    std::transform(str.begin(), str.end(), lower.begin(), ::tolower);
//
//    std::cout << "Uppercase: " << upper << std::endl;
//    std::cout << "Lowercase: " << lower << std::endl;
//    std::cout << std::endl;
//
//    std::cout << "Original string algorithm analytics" << std::endl;
//
//    std::cout << "All characters are alphabetic (strict): " << std::boolalpha 
//        << std::all_of(str.begin(), str.end(), ::isalpha) << std::endl;
//    std::cout << "All characters are digits (strict): " << std::boolalpha 
//        << std::all_of(str.begin(), str.end(), ::isdigit) << std::endl;
//    std::cout << "All characters are lowercase (strict): " << std::boolalpha 
//        << std::all_of(str.begin(), str.end(), ::islower) << std::endl;
//    std::cout << "All characters are uppercase (strict): " << std::boolalpha
//
//        << std::all_of(str.begin(), str.end(), ::isupper) << std::endl; //80 characters
//    std::cout << std::endl;
//
//    std::vector<int> numbers_1;
//    
//    
//    {
//        std::cout << "Enter comma separated numbers (1): ";
//
//        std::string nums; 
//
//        std::cin >> nums;
//        while (!nums.empty()) {
//            auto comma = nums.find(',');
//            numbers_1.push_back(std::stoi(nums.substr(0, comma)));
//            if (comma == std::string::npos) {
//                break;
//            }
//            nums.erase(0, comma + 1);
//        }
//    }
//
//    nums; 
//
//    std::vector<int> numbers_2;
//    {
//        std::cout << "Enter comma separated numbers (2): ";
//
//        std::string nums;
//        std::cin >> nums;
//        while (!nums.empty()) {
//            auto comma = nums.find(',');
//            numbers_2.push_back(std::stoi(nums.substr(0, comma)));
//            if (comma == std::string::npos) {
//                break;
//            }
//            nums.erase(0, comma + 1);
//        }
//    }
//
//     Normalize the vectors so algorithms play nice
//    if (numbers_1.size() > numbers_2.size()) {
//        numbers_2.resize(numbers_1.size());
//    }
//    else if (numbers_2.size() > numbers_1.size()) {
//        numbers_1.resize(numbers_2.size());
//    }
//
//    
//    std::cout << std::endl;
//
//    std::cout << "Vector algorithm analytics" << std::endl;
//
//    std::cout << "Vectors are the same: " << std::boolalpha << std::equal(numbers_1.begin(), numbers_1.end(), numbers_2.begin()) << std::endl;
//    std::cout << "Vectors are exclusive: " << std::boolalpha << 
//        std::all_of(numbers_1.begin(), numbers_1.end(), [&numbers_2](int num) 
//            {
//                return std::find(numbers_2.begin(), numbers_2.end(), num) == numbers_2.end();
//            });
//
//    return 0;
//}