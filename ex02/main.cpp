#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main() {

    {

        MutantStack<int> mstack;
    
        mstack.push(5);
        mstack.push(17);
    
        // std::cout << "Top: " << mstack.top() << std::endl;
    
        mstack.pop();
    
        std::cout << "Size after pop: " << mstack.size() << std::endl;
    
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
    
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
    
        std::cout << "Iterating over stack:" << std::endl;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
    }

    {
        std::list<int> mstack;

        mstack.push_back(5);
        mstack.push_back(17);

        // std::cout << "Top: " << mstack.top() << std::endl;

        mstack.pop_back();

        std::cout << "Size after pop: " << mstack.size() << std::endl;

        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        mstack.push_back(0);

        
        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();

        std::cout << "Iterating over stack:" << std::endl;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
    }

    return 0;
}
