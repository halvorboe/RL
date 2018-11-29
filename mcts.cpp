#include <iostream>
#include <vector>

struct board {
    u_int64_t data;
    std::vector<board*> children;
    // MCTS
    int wins;
    int total;
};

void expand(board* b) {
    std::cout << "Hello" << std::endl;


}

int main() {
    std::cout << "MCTS :)" << std::endl;
    
    board b;
    expand(&b);

}
