
  int32_t* ruff_python_formatter::statement::suite::stub_file_empty_lines::haf594069f87eb5c4(int32_t* arg1, char arg2, int64_t* arg3, int64_t* arg4, int64_t arg5, int64_t arg6, int64_t arg7, void* arg8)

{
    int64_t r12 = *(arg8 + 0x30);
    int64_t* rax_1 = r12(arg7);
    char* rcx = *rax_1;
    int64_t rax_2 = rax_1[1];
    uint64_t rbx;
    rbx = 1;
    
    if (!(arg5 | arg6))
        rbx = ruff_python_formatter::statement::suite::stub_suite_can_omit_empty_line::h43e547e2359e7308(arg3, arg4, arg7, arg8) ^ 1;
    
    int64_t rax_4;
    void* rdx_1;
    rax_4 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(arg3);
    int64_t rax_5;
    void* rdx_2;
    rax_5 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(arg4);
    char rax_7 = ruff_python_formatter::statement::suite::should_insert_blank_line_after_class_in_stub_file::h5a93a285ad0ff8fd(rax_4, rdx_1, rax_5, rdx_2, r12(arg7));
    void* rax_9;
    int16_t* rsi_3;
    int64_t rdi_8;
    int16_t var_68;
    
    if (arg2 != 2)
    {
        if (!rbx)
        {
            rax_9 = arg8;
            rdi_8 = arg7;
            
            if (!rax_7)
                var_68 = 0x201;
            else
                var_68 = 0x301;
        }
        else
        {
            int32_t rax_8;
            rax_8 = ruff_python_trivia::tokenizer::lines_after_ignoring_end_of_line_trivia::h8509e8935b592faf(
                _$LT$ruff_python_ast..generated..Stmt$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h6da43eeee2e8d007(arg3), 
                rcx, rax_2) >= 2;
            rax_9 = arg8;
            rdi_8 = arg7;
            
            if (rax_7 | rax_8)
                var_68 = 0x301;
            else
                var_68 = 0x201;
        }
        
        rsi_3 = &var_68;
    }
    else
    {
        rbx |= rax_7;
        
        if (!rbx)
            var_68 = 0x201;
        else
            var_68 = 0x301;
        
        rsi_3 = &var_68;
        rdi_8 = arg7;
        rax_9 = arg8;
    }
    (*(rax_9 + 0x18))(rdi_8, rsi_3);
    *arg1 = 4;
    return arg1;
}
