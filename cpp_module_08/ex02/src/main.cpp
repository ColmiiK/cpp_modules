/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:03:15 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/19 13:03:16 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

void testMutantStack() {
    std::cout << "Testing MutantStack" << std::endl;

    // Create MutantStack and perform operations
    MutantStack<int> mstack;
    mstack.push(1);
    mstack.push(2);
    mstack.push(3);
    mstack.push(4);
    mstack.push(5);

    // Test stack operations
    std::cout << "Top element: " << mstack.top() << std::endl;  // Should print 5
    mstack.pop();  // Remove the top element
    std::cout << "Size after pop: " << mstack.size() << std::endl;  // Should print 4

    // Test iteration
    std::cout << "Elements in MutantStack:" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Test copy constructor
    MutantStack<int> copyStack(mstack);
    std::cout << "Elements in copied MutantStack:" << std::endl;
    for (MutantStack<int>::iterator it = copyStack.begin(); it != copyStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Test assignment operator
    MutantStack<int> assignedStack;
    assignedStack.push(10);
    assignedStack.push(20);
    assignedStack = mstack;  // Assign contents of mstack to assignedStack
    std::cout << "Elements in assigned MutantStack:" << std::endl;
    for (MutantStack<int>::iterator it = assignedStack.begin(); it != assignedStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Test stack with different data types
    MutantStack<std::string> strStack;
    strStack.push("Hello");
    strStack.push("World");
    std::cout << "Elements in string MutantStack:" << std::endl;
    for (MutantStack<std::string>::iterator it = strStack.begin(); it != strStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
int main()
{
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }

    {
        std::list<int> myList;
        myList.push_back(5);
        myList.push_back(17);
        std::cout << myList.back() << std::endl;
        myList.pop_back();
        std::cout << myList.size() << std::endl;
        myList.push_back(3);
        myList.push_back(5);
        myList.push_back(737);
        myList.push_back(0);
        std::list<int>::iterator it = myList.begin();
        std::list<int>::iterator ite = myList.end();
        ++it;
        --it;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
        std::list<int> anotherList(myList);
    }

    testMutantStack();

    return 0;
}
