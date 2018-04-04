#include <iostream>
#include <string>

struct Data {
    std::string s1;
    int n;
    std::string s2;
};

void	randomAlphaNum(std::string &s, const int len)
{
	const char randArray[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < len; ++i) {
        s[i] = randArray[rand() % sizeof(randArray)];
    }
}

void *serialize() {
    std::string s1(9, '\0');
    std::string s2(9, '\0');
    int n = INT_MIN + (rand() % (static_cast<long>(INT_MAX) - INT_MIN + 1));
    randomAlphaNum(s1, 8);
    randomAlphaNum(s2, 8);
    Data *data = new Data();
    data->s1 = s1;
    data->n = n;
    data->s2 = s2;
    std::cout << "Genrerated the following serialized data : [S1 = " << s1 << "] ; [N = " << n << "] ; [S2 = " << s2 << "]" << std::endl;
    return static_cast<void *>(data);
}

Data *deserialize(void *raw) {
    return static_cast<Data *>(raw);
}

int main()
{
    srand(time(0));
    void *serialized = serialize();
    Data *data = deserialize(serialized);
    std::cout << "After deserialization we got : [S1 = " << data->s1 << "] ; [N = " << data->n << "] ; [S2 = " << data->s2 << "]" << std::endl;
    return 0;
}