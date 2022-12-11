#include <iostream>

#include <flashlight/fl/flashlight.h>

int main() {
 fl::Variable v(fl::full({1}, 1.), true);
 auto result = v + 10;
 std::cout << "Tensor value is " << result.tensor() << std::endl; // 11.000
 return 0;
}