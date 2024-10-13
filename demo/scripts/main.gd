extends Node

func _on_demo_example_position_changed(node: Object, new_pos: Vector2) -> void:
	print("The position of " + node.get_class() + " is now " + str(new_pos))
