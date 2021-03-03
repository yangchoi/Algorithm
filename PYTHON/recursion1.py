# Recursion01
# find a key in a box
# first of all, use 'while' not recursion

def look_for_key(main_box)
  pile = main_box.make_a_pile_to_look_through()
  while pile is not empty:
    box = pile is not empty:
    for item in box:
      if item.is_a_box():
        pile.append(item)
      elif item.is_a_key():
        print("find a key!")