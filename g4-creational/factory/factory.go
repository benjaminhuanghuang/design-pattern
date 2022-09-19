package factory

import "fmt"

/*
Restaurant interface
*/
type Restaurant interface {
	GetFood()
}

type DongLaiShun struct {
}

func (d *DongLaiShun) GetFood() {
	fmt.Println("Dong Lai Shun")
}

type QingFeng struct {
}

func (d *QingFeng) GetFood() {
	fmt.Println("Qing Feng")
}

/*
	Function method
*/
func NewRestaurant(name string) Restaurant {
	switch name {
	case "d":
		return &DongLaiShun{}

	case "q":
		return &QingFeng{}
	}
	return nil
}
