package main

import "fmt"

type Node struct {
	data int
	next *Node
}

func NewNode(v int) *Node {
	var n Node
	n.data = v
	n.next = nil
	return &n
}

func PrintList(n *Node) {
	t := n
	for t != nil {
		fmt.Println(t.data)
		t = t.next
	}
}

func Reverse(n *Node) *Node {
	var curr *Node
	var pre *Node
	var next *Node

	curr = n
	for curr != nil {
		next = curr.next
		curr.next = pre
		pre = curr
		curr = next
	}
	return pre
}

func main() {
	n := NewNode(1)
	n.next = NewNode(2)
	n.next.next = NewNode(3)
	PrintList(n)
	fmt.Println("-----------------")
	PrintList(Reverse(n))
}
