#include <iostream>
#include <string>

bool Palindrome (std::string word, int n ){

    int left = 0;
    int right = n-1;

    while (left<right){
        if (word[left]!=word[right]){
            return false; 
        }
        left++;
        right--;
    
    }
    return true;
}

int main(){
    std::string word;
    std::cout<<"Input word: ";
    std::cin>> word;

    if (Palindrome(word, word.length())){
        std::cout << "Palindrome";

    }
    else{
        std::cout << "Not palindrome";
    }

}