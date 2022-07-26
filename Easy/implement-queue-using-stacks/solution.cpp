#include <stack>

class MyQueue {
  private:
    std::stack<int> shelfA;
    std::stack<int> shelfB;

  public:
    MyQueue() {}

    void push(int data) { shelfA.push(data); }

    int pop() {
        while (shelfA.size() != 1) {
            shelfB.push(shelfA.top());
            shelfA.pop();
        }
        int result = shelfA.top();
        shelfA.pop();
        while (!shelfB.empty()) {
            shelfA.push(shelfB.top());
            shelfB.pop();
        }

        return result;
    }

    int peek() {
        while (shelfA.size() != 1) {
            shelfB.push(shelfA.top());
            shelfA.pop();
        }
        int result = shelfA.top();
        while (!shelfB.empty()) {
            shelfA.push(shelfB.top());
            shelfB.pop();
        }

        return result;
    }

    bool empty() { return shelfA.empty(); }
};
