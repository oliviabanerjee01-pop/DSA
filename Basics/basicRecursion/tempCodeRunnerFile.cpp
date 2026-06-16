    }
    return true;
}

int main(){
    std::string word;
    std::cout<<"Input word: ";
    std::cin>> word;

    if (Palindrome(word, word.length())){
        std::cout << "Palindrome";
