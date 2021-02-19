package strategy

import "fmt"

type Strategy interface {
	Execute()
}

type StrategyA struct {
}

func (s *StrategyA) Execute() {
	fmt.Println("A excuted")
}
func NewStrategyA() Strategy {
	return &StrategyA{}
}

type StrategyB struct {
}

func (s *StrategyB) Execute() {
	fmt.Println("B excuted")
}

func NewStrategyB() Strategy {
	return &StrategyB{}
}

type Context struct {
	strategy Strategy
}

func NewContext() *Context {
	return &Context{}
}
func (c *Context) SetStrategy(strategy Strategy) {
	c.strategy = strategy
}

func (c *Context) Execute() {
	c.strategy.Execute()
}
