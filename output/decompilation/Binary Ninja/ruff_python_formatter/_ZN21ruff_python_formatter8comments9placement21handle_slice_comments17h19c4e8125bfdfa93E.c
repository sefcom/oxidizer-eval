
  int64_t ruff_python_formatter::comments::placement::handle_slice_comments::h19c4e8125bfdfa93(int64_t* arg1, int64_t* arg2, int32_t* arg3, int64_t arg4, int64_t arg5, char* arg6, int64_t arg7)

{
    int32_t* r14 = arg3;
    int32_t rbp = arg2[8];
    void var_78;
    ruff_python_trivia::tokenizer::BackwardsTokenizer::up_to::h10c703c3dd949d71(&var_78, rbp, arg6, 
        arg7, arg4, arg5);
    void var_84;
    core::iter::traits::iterator::Iterator::try_fold::h84c5c22150ea5174(&var_84, &var_78);
    char r13 = arg2[9];
    char var_7c;
    int64_t result;
    int64_t rcx_1;
    int32_t rdx_1;
    
    if (var_7c == 0x5a || (var_7c ^ 9) | r13)
    {
        int32_t rax_1 = *(arg2 + 0x44);
        char rax_2 = ruff_python_formatter::expression::expr_slice::assign_comment_in_slice::h53141057c2112aa6(rbp, arg6, arg7, r14);
        int32_t* rdi_3;
        void* r12_1;
        
        if (!rax_2)
        {
            r12_1 = &r14[2];
            rdi_3 = *r12_1;
            
            if (rdi_3)
            {
                label_702daf:
                int32_t rax_4 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(rdi_3);
                int32_t* rdx_3;
                result = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*r12_1);
                r14 = rdx_3;
                rcx_1 = 0x5f - 0;
            }
            else
            {
                rcx_1 = 0x60;
                result = 0x3a;
            }
        }
        else if (rax_2 != 1)
        {
            r12_1 = &r14[6];
            rdi_3 = *r12_1;
            
            if (rdi_3)
                goto label_702daf;
            
            rcx_1 = 0x60;
            result = 0x3a;
        }
        else
        {
            r12_1 = &r14[4];
            rdi_3 = *r12_1;
            
            if (rdi_3)
                goto label_702daf;
            
            rcx_1 = 0x60;
            result = 0x3a;
        }
        rdx_1 = rax_1;
    }
    else
    {
        result = *arg2;
        r14 = arg2[1];
        rdx_1 = *(arg2 + 0x44);
        rcx_1 = 0x60;
        r13 = 0;
    }
    
    arg1[1] = result;
    arg1[2] = r14;
    arg1[3] = rbp;
    *(arg1 + 0x1c) = rdx_1;
    arg1[4] = 0;
    *(arg1 + 0x21) = r13;
    *arg1 = rcx_1;
    return result;
}
