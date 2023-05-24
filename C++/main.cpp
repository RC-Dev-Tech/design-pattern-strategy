/*
 * Design Pattern - Strategy 策略模式
 * 
 * 在這個範例中，Strategy是策略接口，定義了所有具體策略所需要實現的方法。
 * ConcreteStrategyA和ConcreteStrategyB是具體的策略實現類，它們分別實現了Strategy定義的方法。
 * Context是環境類，維護一個對策略對象的引用，並將具體操作委託給策略對象。
 * Client是使用Strategy模式的客戶端，可以根據需要創建具體的策略對象並設置到Context中，然後使用Context來執行策略的操作。
 * 透過這樣的設計，客戶端可以方便地切換不同的策略，同時還能保持與Context的解耦。
 */

#include <iostream>

/*
 * Strategy,
*/
class Strategy {
public:
    virtual void Execute() = 0;
};

/*
 * ConcreteStrategy A.
*/
class ConcreteStrategyA : public Strategy {
public:
    void Execute() override {
        std::cout << "Executing ConcreteStrategy A" << std::endl;
    }
};

/*
 * ConcreteStrategy B.
*/
class ConcreteStrategyB : public Strategy {
public:
    void Execute() override {
        std::cout << "Executing ConcreteStrategy B" << std::endl;
    }
};

/*
 * Context.
*/
class Context {
private:
    Strategy* strategy;

public:
    Context(Strategy* strategy) : strategy(strategy) {}

    void SetStrategy(Strategy* newStrategy) {
        strategy = newStrategy;
    }

    void ExecuteStrategy() {
        strategy->Execute();
    }
};

/*
 * Client.
*/
int main() {
    ConcreteStrategyA strategyA;
    ConcreteStrategyB strategyB;

    Context context(&strategyA);
    context.ExecuteStrategy();

    context.SetStrategy(&strategyB);
    context.ExecuteStrategy();

    return 0;
}
