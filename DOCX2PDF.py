import os
from docx2pdf import convert
 

def get_dir_file():
    path = input("拖拽 存放文件夹或者docx文件")
    return path 

def tell_is_fileORdir(path):
    if os.path.isdir(path):
        path = path + r'\\'
        filenames = os.listdir(path)
        for docx_name in filenames:
            if docx_name[-4:] == r'docx':
                pdf_name = docx_name[:-4] + r'pdf'
                convert(path + docx_name,path + pdf_name)

    elif os.path.isfile(path):
        docx_name = path 
        pdf_name = docx_name[:-4] + r'pdf'
        convert(docx_name,pdf_name)



path = get_dir_file()
tell_is_fileORdir(path)


os.system("pause")
