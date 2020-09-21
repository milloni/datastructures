#include <cstdlib>

class MStack {
  public:
    MStack();
    virtual ~MStack();

    void push(int n);
    int pop();
    int top() const;

  private:
    static const int MAX_SIZE = 128;
    int m_index;
    int m_data[MAX_SIZE];
};


