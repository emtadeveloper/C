from PIL  import Image,ImageFilter

before = Image.open("bridge.bmp")

# after = before.filter(ImageFilter.BoxBlur(10))

after =  before.filter(ImageFilter.FIND_EDGES)

after.save("out.bmp")

