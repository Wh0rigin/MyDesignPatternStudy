package structs

import(
	"fmt"
	"sync"
)


type Single struct{

}

func (this *Single)ShowMsg(){
	fmt.Println("Hello world")
}

var instance *Single
var once sync.Once

func GetInstance() *Single {
	once.Do(func(){
		instance = &Single{}
	})
	return instance
}
