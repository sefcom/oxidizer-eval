
  int32_t* ruff_python_formatter::expression::left_most::h26733ef32f4505d7(int32_t* arg1, int64_t arg2, int64_t arg3, char* arg4, int64_t arg5)

{
    int64_t rax;
    int64_t var_38 = rax;
    int32_t* result_1 = arg1;
    int32_t* result;
    char i;
    
    do
    {
        result = result_1;
        int64_t rax_4;
        
        switch (jump_table_4877a4[*result_1])
        {
            case 0x288eeb:
            {
                rax_4 = 8;
                break;
            }
            case 0x288f0b:
            {
                rax_4 = 0x10;
                
                if (!*(result + 0x18))
                    break;
                break;
            }
            case 0x288f56:
            {
                break;
                break;
            }
        }
        
        result_1 = *(result + rax_4);
        uint64_t rax_5;
        int64_t rdx;
        rax_5 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(result_1);
        i = ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_5, rdx, arg2, arg3, arg4, arg5);
    } while (!i);
    return result;
}
