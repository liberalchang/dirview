import configparser
import os


def read_config():
    # url = os.path.abspath(__file__)  # 文件
    # print(url)
    url = os.path.dirname(os.path.abspath(__file__))  # 文件夹
    # print(url)
    url = os.path.join(url.split('dirview')[0], 'dirview\config\line_conf.ini')
    # print(url)
    config = configparser.ConfigParser()
    config.read(url)
    item_list = config.items('baseconf')
    item_load = config.items('pwd')
    return item_load, item_list


def set_config(load):
    print("写入", load)
    url = os.path.dirname(os.path.abspath(__file__))  # 文件夹
    url = os.path.join(url.split('dirview')[0], 'config\line_conf.ini')
    config = configparser.ConfigParser()
    config.read(url)
    config.set('pwd','local_load',load)
    with open(url, 'w') as f:
        config.write(f)