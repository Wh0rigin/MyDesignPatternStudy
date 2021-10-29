package main

import "Wh0rigin.com/structs"

func main(){

	builder := &structs.Builder{}

	director := structs.NewDirector(builder)

	director.Construct()
}
