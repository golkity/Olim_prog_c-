package main

import (
	"fmt"
	"math"
)

func SqRoots() {
	var a, b, c float64
	fmt.Scanln(&a, &b, &c)

	desc := b*b - 4*a*c

	if desc > 0 {
		x1 := (-b + math.Sqrt(desc)) / (2 * a)
		x2 := (-b - math.Sqrt(desc)) / (2 * a)
		if x1 < x2 {
			fmt.Printf("%.6f %.6f\n", x1, x2)
		} else {
			fmt.Printf("%.6f %.6f\n", x2, x1)
		}
	} else if desc == 0 {
		x := -b / (2 * a)
		fmt.Printf("%.6f\n", x)
	} else {
		fmt.Printf("0 0\n")
	}
}
