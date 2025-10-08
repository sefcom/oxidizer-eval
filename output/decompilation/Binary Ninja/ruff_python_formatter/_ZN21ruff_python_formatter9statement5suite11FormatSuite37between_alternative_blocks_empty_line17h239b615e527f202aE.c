
  void ruff_python_formatter::statement::suite::FormatSuite::between_alternative_blocks_empty_line::h239b615e527f202a(int32_t* arg1, char arg2, int64_t arg3, int64_t* arg4, int64_t* arg5, int64_t arg6, void* arg7)

{
    if (arg2 > 1 || arg2 & 1)
    {
        *arg1 = 4;
        return;
    }
    
    int64_t* r14 = arg3 + (arg4 << 7) - 0x80;
    
    if (!arg4)
        r14 = arg4;
    
    void* rax_2;
    int64_t rdx;
    rax_2 =
        ruff_python_formatter::statement::suite::trailing_function_or_class_def::h092984c02e8033d6(
        r14);
    
    if (rax_2 != 0x5e)
    {
        void* var_38 = rax_2;
        int64_t var_30_1 = rdx;
        int64_t rax_3;
        
        if (!r14)
            rax_3 = 0x5e;
        else
            rax_3 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(r14);
        
        int64_t var_50 = rax_3;
        int64_t var_48_1 = rdx;
        int64_t rax_4;
        int64_t rdx_1;
        rax_4 = core::iter::traits::iterator::Iterator::try_fold::hf60f71f95bfbd5b9(&var_50, arg5);
        int64_t rax_5;
        int64_t rdx_2;
        
        if (rax_4 != 0x5e)
        {
            void* rdi_4 = *arg5 + 0x10;
            var_50 = rax_4;
            int64_t var_48_2 = rdx_1;
            rax_5 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(rdi_4, &var_50);
        }
        
        int32_t rbp_1;
        
        if (rax_4 == 0x5e || !rdx_2)
            rbp_1 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_38);
        else
        {
            rbp_1 = *(rax_5 + rdx_2 * 0xc - 8);
            _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_38);
        }
        
        int64_t r15_1 = *(arg7 + 0x30);
        int64_t* rax_6 = r15_1(arg6);
        
        if (ruff_python_trivia::tokenizer::lines_after_ignoring_end_of_line_trivia::h8509e8935b592faf(rbp_1, *rax_6, rax_6[1]) < 2)
        {
            if (*(r15_1(arg6) + 0x3a) == 1)
            {
                var_50 = 0x301;
                (*(arg7 + 0x18))(arg6, &var_50);
            }
            else if (var_38 == 3 && *(
                ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a()
                + 7) == 1)
            {
                var_50 = 0x301;
                (*(arg7 + 0x18))(arg6, &var_50);
            }
        }
    }
    
    *arg1 = 4;
}
