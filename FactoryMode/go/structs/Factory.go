package structs

import "fmt"

type Color interface{
	Draw()
}

type Red struct{}

type Blue struct{}

type Green struct{}

func (this *Red)Draw(){
	fmt.Println("draw Red")
}

func (this *Blue)Draw(){
	fmt.Println("draw Blue")
}

func (this *Green)Draw(){
	fmt.Println("draw Green")
}

func NewRed() *Red {
	res := &Red{}
	return res
}

func NewBlue() *Blue {
	res := &Blue{}
	return res
}

func NewGreen() *Green {
	res := &Green{}
	return res
}

