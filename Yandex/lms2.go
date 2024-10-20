package main

import (
	"fmt"
	"time"
)

type Task struct {
	summary     string
	description string
	deadline    time.Time
	priority    int
}

func (t *Task) IsOverdue() bool {
	return time.Now().After(t.deadline)
}

func (t *Task) IsTopPriority() bool {
	return t.priority >= 4
}

type Note struct {
	title string
	text  string
}

type ToDoList struct {
	name  string
	tasks []Task
	notes []Note
}

func (t *ToDoList) TasksCount() int {
	return len(t.tasks)
}

func (t *ToDoList) NotesCount() int {
	return len(t.notes)
}

func (t *ToDoList) CountTopPrioritiesTasks() int {
	count := 0
	for _, task := range t.tasks {
		if task.IsTopPriority() {
			count++
		}
	}
	return count
}

func (t *ToDoList) CountOverdueTasks() int {
	count := 0
	for _, task := range t.tasks {
		if task.IsOverdue() {
			count++
		}
	}
	return count
}

func main() {
	
	task1 := Task{
		summary:     "Закончить проект",
		description: "Проект по Go",
		deadline:    time.Now().Add(1 * time.Minute), 
		priority:    5,
	}

	task2 := Task{
		summary:     "Прочитать книгу",
		description: "Книга по программированию",
		deadline:    time.Now().Add(-1 * time.Hour), 
		priority:    3,
	}

	note1 := Note{
		title: "Идея",
		text:  "Новая идея для проекта",
	}

	todoList := ToDoList{
		name:  "Мой список дел",
		tasks: []Task{task1, task2},
		notes: []Note{note1},
	}
	fmt.Printf("Всего задач: %d\n", todoList.TasksCount())
	fmt.Printf("Всего заметок: %d\n", todoList.NotesCount())
	fmt.Printf("Количество приоритетных задач: %d\n", todoList.CountTopPrioritiesTasks())
	fmt.Printf("Количество просроченных задач: %d\n", todoList.CountOverdueTasks())
}
