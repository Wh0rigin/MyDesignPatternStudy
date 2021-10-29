package structs

import "fmt"

type BuilderMode interface{
	Part1()
	Part2()
	Part3()
	Part4() string
}

type Builder struct{
	result string
}

func (this *Builder)Part1(){
	this.result += "1"
}

func (this *Builder)Part2(){
	this.result += "2"
}

func (this *Builder)Part3(){
	this.result += "3"
}

func (this *Builder)Part4() string {
	return this.result
}

type Director struct{
	builder BuilderMode
}

func NewDirector(builder BuilderMode) *Director {
	return &Director{
		builder : builder,
	}
}

func (this *Director)Construct(){
	this.builder.Part1()
	this.builder.Part2()
	this.builder.Part3()
	fmt.Println(this.builder.Part4())
}
