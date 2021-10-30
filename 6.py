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
    # if 1:
    #     #随机生成插入在第几个数字前
    #     index_bg = random.randint(0,len(figure_list)-1)
    #
    #
    #     for i in range(len(figure_list)):
    #         if i < len(figure_list) - 1:
    #             if i == index_bg:
    #                 arith +='('
    #                 arith += str(figure_list[i])
    #                 arith += op_list[i]
    #             if i == index_bg+1:
    #                 arith += str(figure_list[i])
    #                 arith += ')'
    #                 arith += op_list[i]
    #
    #     arith += str(figure_list[-1])

    return arith
