
#返回算式
def offerArith(grade):
    addbracket = random.randint(0,1)
    #0不加，1加
    figure_list,op_list = offerFigureOp(grade)
    arith = ''
    for i in range(len(figure_list)):
        if i < len(figure_list)-1:
            arith+=str(figure_list[i])
            arith+=op_list[i]
    arith+=str(figure_list[-1])
    if addbracket:
        arith_list=[]
        # 随机生成插入在第几个数字前
        # index_bg = random.randint(0,len(figure_list)-2)# 肯定不能在最后一个数字前插入左括号(
        if len(figure_list)>2:
            index_bg = random.randint(0, len(figure_list) - 2)  # 肯定不能在最后一个数字前插入左括号(
            for i in range(0,index_bg):
                arith_list.append(str(figure_list[i]))
                arith_list.append(op_list[i])
            arith_list.append('(')
            arith_list.append(str(figure_list[index_bg]))
            arith_list.append(op_list[index_bg])
            arith_list.append(str(figure_list[index_bg+1]))
            arith_list.append(')')

            # 判断是否已经是最后一个数
            if index_bg + 1 == len(figure_list) - 1:
                arith = ''.join(arith_list)
            else:
                arith_list.append(op_list[index_bg + 1])
                for i in range(index_bg+2,len(figure_list) - 1):
                    arith_list.append(str(figure_list[i]))
                    arith_list.append(op_list[i])
                arith_list.append(str(figure_list[-1]))
                arith = ''.join(arith_list)

    return arith