#include <cstdlib>
#include <iostream>
#include <stdexcept>

#include "mstack.h"

MStack::MStack()
: m_index(0)
, m_data()
{
}

MStack::~MStack()
{
}

void MStack::push(int n)
{
    if (m_index >= MAX_SIZE) {
        throw std::runtime_error("Stack is full!");
    }
    m_data[m_index] = n;
    m_index += 1;
}

int MStack::pop()
{
    if (m_index <= 0) {
        throw std::runtime_error("Stack is empty!");
    }
    int ret = m_data[m_index - 1];
    m_index -= 1;
    return ret;
}

int MStack::top() const
{
    if (m_index <= 0) {
        throw std::runtime_error("Stack is empty!");
    }
    return m_data[m_index - 1];
}

int main()
{
    MStack stack;
    //stack.top();
    stack.push(1);
    std::cout << stack.top() << std::endl;
    std::cout << stack.pop() << std::endl;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    std::cout << stack.top() << std::endl;
    std::cout << stack.pop() << std::endl;
    std::cout << stack.top() << std::endl;

    for (int i = 0; i < 126; i++) {
        stack.push(10);
    }
    stack.push(10);

    return 0;
}
