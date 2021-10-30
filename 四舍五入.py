#将一个数四舍五入保留后两位
def getLastTwo(figure):
    if isinstance(figure,int):
        return figure
    else:
        return round(figure,2)