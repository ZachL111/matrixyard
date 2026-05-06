#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{74, 27, 13, 66};
    assert(domain_review_score(item) == 202);
    assert(domain_review_lane(item) == "ship");
}
