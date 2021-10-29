package structs

import "fmt"

type AbsFactory interface {
	GetShape(shape string) Shape
	GetColor(color string) Color
}

type Shape interface {
	Draw()
}

type Color interface {
	Fill()
}

type ShapeFactory struct {
}

type Red struct{}

func (this *Red) Fill() {
	fmt.Println("now fill the red color")
}

type Green struct{}

func (this *Green) Fill() {
	fmt.Println("now fill the green color")
}

type Blue struct{}

func (this *Blue) Fill() {
	fmt.Println("now fill the blue color")
}

type Circle struct{}

func (this *Circle) Draw() {
	fmt.Println("now draw a Circle")
}

type Rectangle struct{}

func (this *Rectangle) Draw() {
	fmt.Println("now draw a Rectangle")
}

func (this *ShapeFactory) GetShape(shape string) Shape {
	switch shape {
	case "Circle":
		return &Circle{}
	case "Rectangle":
		return &Rectangle{}
	}
	return nil
}
func (this *ShapeFactory) GetColor(color string) Color {
	return nil
}

type ColorFactory struct {
}

func (this *ColorFactory) GetShape(shape string) Shape {
	return nil
}

func (this *ColorFactory) GetColor(color string) Color {
	switch color {
	case "Red":
		return &Red{}
	case "Blue":
		return &Blue{}
	case "Green":
		return &Green{}
	}
	return nil
}

func GetShapeFactory() *ShapeFactory {
	return &ShapeFactory{}
}

func GetColorFactory() *ColorFactory {
	return &ColorFactory{}
}
