// --------------------------------
// № 1, 1 способ

// #include <iostream>

// long long step(int n, int a){
//     if (a == 0){
//         return 1;
//     }
//     int x = step(n, a / 2);
//     if (a % 2 != 0){
//         return x * x * 2;
//     }
//     else{
//         return x * x;
//     }
// }

// int main(){
//     int n;
//     int a;
//     std::cin >> n >> a;
//     std::cout << step(n, a) << std::endl;
// }

// --------------------------------
// № 1, 2 способ

// #include <iostream>
// #include <cmath>

// int main(){
//     int n;
//     int a;
//     std::cin >> n >> a;
//     int res = std::pow(n, a);
//     std::cout << res << std::endl;
// }



// --------------------------------
// № 2

// #include <iostream>

// int nok(int a, int b){
//     if (b == 0) return a;
//     return nok(b, a % b);
// }

// int main(){
//     int a;
//     int b;
//     std::cin >> a >> b;
//     std::cout << nok(a, b) << std::endl;
// }


// --------------------------------
// № 3

// #include <iostream>

// void cook(int n, int a, int b){
//     if (n == 0){
//         return;
//     }
//     int c = 6 - a - b;
//     cook(n - 1, a, c);
//     std::cout << "Ingredient " << n << " move from " << a << " to " << b << std::endl;
//     cook(n - 1, c, b);
// }

// int main(){
//     int n;
//     std::cin >> n;
//     cook(n, 1, 3);
// }