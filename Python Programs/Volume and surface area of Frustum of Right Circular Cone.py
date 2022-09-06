radius1=float(input("What is the radius 1?"))
radius2=float(input("What is the radius 2?"))
height=float(input("What is the height?"))
side=float(input("What is the side?"))
Volume=(3.14*(radius1
              **2 + radius1*radius2 + radius2)*height)/3
Surface_area=3.14*side*(radius2 + radius1)
print("Volume of Frustum of Right Circular Cone:",Volume)
print("Surface area of Frustum of Right Circular Cone:",Surface_area)
