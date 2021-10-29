package main

import "Wh0rigin.com/structs"

func main() {
	var shapeFactory structs.AbsFactory
	var colorFactory structs.AbsFactory

	var shape structs.Shape
	var color structs.Color

	shapeFactory = structs.GetShapeFactory()

	shape = shapeFactory.GetShape("Circle")

	shape.Draw()

	colorFactory = structs.GetColorFactory()

	color = colorFactory.GetColor("Red")

	color.Fill()

}
