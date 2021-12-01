#include <iostream>
#include <map>
#include <set>
#include <fstream>
using namespace std;
ostream& operator << (ostream& os,const map <int, int>& numbers){
    string numbers_with_entry;
    for (auto& item_numbers: numbers){
        numbers_with_entry =  numbers_with_entry  + to_string(item_numbers.first) + " - " + to_string(item_numbers.second) + "; ";
    }
    numbers_with_entry.resize(numbers_with_entry.size() - 2);
    return os << numbers_with_entry;

}
int main(){
    int number_indexes;
    cin >> number_indexes;
    map <int, int> sort_indexes;
    while (number_indexes > 0){
        int index;
        cin >> index;
        if (sort_indexes.count(index) == 0){
            sort_indexes[index] = 1;
        } else {
            sort_indexes[index] += 1;
        }
        --number_indexes;
    }
    cout << sort_indexes;
//    for (auto& item : sort_indexes){
//        cout << item.first << " " << item.second << "; " ;
//    }
    return 0;
}