package abstract_factory

import (
	"testing"
)

func TestNewSimpleLunchFactory(t *testing.T) {
	factory := TestNewSimpleLunchFactory()

	food := factory.CreateFood()

	food.Cook()

	vegetable := factory.CreateVegetable()
	vegetable.Cook()
}
