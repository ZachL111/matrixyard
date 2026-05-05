#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{74, 70, 10, 19, 6};
    assert(score_signal(signal_case_1) == 83);
    assert(classify_signal(signal_case_1) == "review");
    Signal signal_case_2{92, 90, 26, 21, 7};
    assert(score_signal(signal_case_2) == 96);
    assert(classify_signal(signal_case_2) == "review");
    Signal signal_case_3{86, 73, 16, 15, 11};
    assert(score_signal(signal_case_3) == 141);
    assert(classify_signal(signal_case_3) == "review");
}
