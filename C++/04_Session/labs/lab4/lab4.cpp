#include <iostream>
#include <string>

template<typename Key, typename Value>
class KeyValuePair {
public:
    KeyValuePair(Key varKey, Value varValue) : varKey(varKey), varValue(varValue) {}

    Value getter(Key varKey);
    void setter(Key varKey, Value varValue);

private:
    Key varKey;
    Value varValue;
};

template<typename Key, typename Value>
Value KeyValuePair<Key, Value>::getter(Key varKey)  
{
    if (varKey == this->varKey) {
        return varValue;
    } else {
        std::cout << "Error: Key not found." << std::endl;
        return Value{};
    }
}

template<typename Key, typename Value>
void KeyValuePair<Key, Value>::setter(Key varKey, Value varValue) {
    if (varKey == this->varKey) {
        this->varValue = varValue;
    } else {
        std::cout << "Error: Key not found." << std::endl;
    }
}

int main() {
    KeyValuePair<std::string, int> var1("mohamed", 6);
    int x = var1.getter("mohamed");
    std::cout << "x: " << x << std::endl;

    var1.setter("mohamed", 8);
    x = var1.getter("mohamed");
    std::cout << "x after setting new value: " << x << std::endl;

    return 0;
}
