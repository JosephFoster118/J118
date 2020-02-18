#!/usr/bin/python3


import sys
import os
from PIL import ImageFont, ImageDraw, Image
import struct
if not (len(sys.argv) == 3):
    print("Invalid parameters")
    exit()

font_name = sys.argv[1]
font_size = sys.argv[2]
new_dir_name = "%s-%s" % (font_name.split(".")[0].split("/")[-1],font_size);
font_directory = "/usr/share/fonts/truetype/"

font_absolute = os.path.join(font_directory,font_name)

print("Looking for font \"%s\"" % font_absolute)

font = ImageFont.truetype(font_absolute, int(sys.argv[2]))
if(not os.path.exists(new_dir_name)):
    os.mkdir(new_dir_name)

for i in range(ord(" "),ord("~") + 1):
    characture_width = font.getsize(chr(i))[0]
    characture_height = font.getsize(chr(i))[1]
    img = Image.new('RGB', (characture_width, characture_height))
    if chr(i) == "/":
        file_name = os.path.join(new_dir_name,"[slash].bmp")
    else:
        file_name = os.path.join(new_dir_name,"[%c].bmp"%(chr(i)))

    tmpdctx = ImageDraw.Draw(img)  # create drawing context
    tmpdctx.text((0,0),chr(i), font=font, fill=(255,255,255),stroke_width=0)  # calculate text size
    del tmpdctx
    
    img.save(file_name)

    if chr(i) == "/":
        file_name = os.path.join(new_dir_name,"[slash].letter")
    else:
        file_name = os.path.join(new_dir_name,"[%c].letter"%(chr(i)))

    
    #Save my custom file
    my_letter = open(file_name, "wb")
    my_letter.write(struct.pack("=HH",characture_width,characture_height))
    for y in range(0,characture_height):
        for x in range(0,characture_width):
            cordinate = x,y
            my_letter.write(struct.pack("B",img.getpixel(cordinate)[0]))
