#include <iostream>

template <typename T>
void    iter(T *ar, int len, void (*function)(T &)) {
    int i = 0;

    while (i < len) {
        function(ar[i]);
        i++;
    }
}

template <typename T>
void    onScreen(T & tmp) {
    std::cout << tmp << std::endl;
}

int main() {
    std::string str [5] = {"Hey", "how", "are", "you", "?"};
    iter(str, 5 , &onScreen);

    std::cout << "***********************" << std::endl;

    int arr [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    iter(arr, 10, &onScreen);
}