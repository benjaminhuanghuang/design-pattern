package facade


type CarModel struct{

}

func NewCarModel *CarModel {
	return &CarModel{}
}


func(c *CarModel) SetModel(){
	fmt.Println("CarModel - SetModel")
}

type CarEngine struct {

}


