/*
    CodeJam APAC 2017
    Round: A
    Task:
*/

/***********Template Starts Here***********/

#include <bits/stdc++.h>

#ifdef forthright48


/***********Template Ends Here***********/

int t, tc;



int main () {

    /*** Stack Memory Increase ***/
    const rlim_t kStackSize = 256 * 1024 * 1024; // min stack size = 256 MB
    struct rlimit rl;
    int result;
    result = getrlimit(RLIMIT_STACK, &rl);
    if (result == 0) {
        if (rl.rlim_cur < kStackSize) {
            rl.rlim_cur = kStackSize;
            result = setrlimit(RLIMIT_STACK, &rl);
            if (result != 0) {
                fprintf(stderr, "setrlimit returned result = %d\n", result);
            }
        }
    }
    /*** Stack Memory Increase ends ***/


    #ifdef forthright48
    freopen ( "input.txt", "r", stdin );
    //freopen ( "00.in", "r", stdin );
    //freopen ( "output.txt", "w", stdout );
    #endif // forthright48

    scanf("%d", &t);
    tc = 0;


    while (tc<t) {
        tc++;
        cerr << "---------------- Case: " << tc << " ----------------------\n";
        printf("Case #%d:", tc);
        nl;
        //sp;



    }


    return 0;
}
