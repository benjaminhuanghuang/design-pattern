package abstract_factory

import "fmt"

type Lunch interface {
	Cook()
}

type Rice struct {
}

func (r *Rice) Cook() {
	fmt.Println("it is Rice")
}

type Tomato struct {
}

func (t *Tomato) Cook() {
	fmt.Println("it is Tomato")
}

type LunchFactory interface {
	CreateFood() Lunch
	CreateVegetable() Lunch
}

type SimpleLunchFactory struct {
}

func NewSimpleLunchFactory() LunchFactory {
	return &SimpleLunchFactory{}
}

func (s *SimpleLunchFactory) CreateFood() Lunch {
	return &Rice{}
}

func (s *SimpleLunchFactory) CreateVegetable() Lunch {
	return &Tomato{}
}
