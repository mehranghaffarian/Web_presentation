/* compile this file with:
$ emcc fibo.c -o fibo.js -O2
*/
#include <emscripten.h>

int calc_fibbo(int n){
    if(n==1 || n==0){
        return 1;
    }
    return calc_fibbo(n-1) + calc_fibbo(n-2);
}

EMSCRIPTEN_KEEPALIVE
int get_fib(int n) {
    return calc_fibbo(n);
}