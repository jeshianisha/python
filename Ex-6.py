#Function to calculate the area of a rectangle

def calculate_rectangle_area(lenth,width):
    return lenth*width

#Function to calculate the volume of a box

def calculate_box_volume(lenth,width,height):
    return lenth*width*height
#nput

length_rectangle=float(input("Enter the length of the rectangle:"))
width_rectangle=float(input("Enter the width of the rectangle:"))

length_box=float(input("Enter the length of the box:"))
width_box=float(input("Enter the width of the box:"))
height_box=float(input("Enter the heightof the box;"))

#Calculate area of the rectangle using the function

rectangle_area=calculate_rectangle_area(length_rectangle,width_rectangle)

#calculate volume of the box using the function

box_volume=calculate_box_volume(length_box,width_box,height_box)

#output

print(f"Area of the rectangle:{rectangle_area}")
print(f"Volume of the box:{box_volume}")
