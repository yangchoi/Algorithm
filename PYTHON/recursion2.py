# Recursion2 
# find a key in a box
# use recursion

def look_for_key(box):
  for item in box:
    if item.is_a_box():
      look_for_key(item) # 반복 
    elif item.is_a_key():
      print("find a key!")