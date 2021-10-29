package main

import "Wh0rigin.com/structs"

func main(){
	var color structs.Color
	color = structs.NewRed()
	color.Draw()

	color = structs.NewBlue()
	color.Draw()

	color = structs.NewGreen()
	color.Draw()
}
