
  int32_t* ruff_python_formatter::expression::format_with_parentheses_comments::h8e448c8362da0824(int128_t* arg1, int32_t* arg2, int64_t* arg3, int64_t* arg4)

{
    int32_t* var_160 = arg2;
    uint64_t rax;
    int64_t rdx;
    rax = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(arg2);
    int64_t r12 = *arg4;
    int64_t rbp = *(arg4[1] + 0x30);
    rbp(r12);
    int128_t var_1d8 = *rbp(r12);
    char const* const var_130;
    ruff_python_ast::parenthesize::parentheses_iterator::h98a7a5fd1647c2ff(&var_130, rax, rdx, 
        0x5e);
    int32_t var_1a0 = 0;
    char var_14c;
    _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..SpecFold$GT$::spec_fold::h7b11a22302d0e2e9(&var_14c, &var_130, &var_1a0);
    int64_t rbx_1;
    int64_t rbp_1;
    void* r12_1;
    int64_t r13_1;
    int64_t r14_1;
    
    if (!(var_14c & 1))
    {
        rbp_1 = arg3[5];
        r12_1 = *arg3;
        r13_1 = arg3[1];
        r14_1 = 0;
        rbx_1 = rbp_1;
    }
    else
    {
        char* var_148;
        var_130 = var_148;
        r12_1 = *arg3;
        r13_1 = arg3[1];
        r14_1 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::partition_point::h53f9336f7750b3be(
            r12_1, r13_1, &var_130);
        rbp_1 = arg3[5];
        int64_t rax_5 =
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::partition_point::h280149b139eb1595(arg3[4], 
            rbp_1, &var_130);
        
        if (r14_1 > r13_1)
        {
            var_130 = &data_97adf0;
            int64_t var_128_2 = 1;
            int64_t var_120_2 = 8;
            int128_t var_118_1 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_130);
            /* no return */
        }
        
        rbx_1 = rax_5;
    }
    
    int64_t var_70;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h24a88d3a0c186412(&var_70, 
        r12_1, r13_1, r14_1);
    
    if (rbx_1 > rbp_1)
    {
        var_130 = &data_97adf0;
        int64_t var_128_3 = 1;
        int64_t var_120_3 = 8;
        int128_t var_118_2 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_130);
        /* no return */
    }
    
    int64_t var_1b8 = r13_1;
    void* var_1b0 = r12_1;
    int64_t r14_2 = var_70;
    void* var_60;
    void* const r12_2 = var_60;
    int64_t var_50;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h24a88d3a0c186412(&var_50, 
        arg3[4], rbp_1, rbx_1);
    int64_t var_1c0;
    int64_t var_58;
    
    if (!var_58 || *(r12_2 + 9))
    {
        r12_2 = 4;
        var_1c0 = 0;
    }
    else
    {
        var_1b0 = r12_2 + 0xc;
        var_1c0 = 1;
        var_1b8 = var_58 - 1;
    }
    
    int64_t rbx_2 = var_50;
    int64_t* var_158 = &var_160;
    int64_t var_128 = r14_2;
    int64_t var_68;
    int64_t var_120 = var_68;
    var_130 = 1;
    _$LT$ruff_python_formatter..comments..format..FormatLeadingComments$u20$as$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::fmt::hc2058df1af78fa4d(&var_1a0, &var_130, arg4);
    
    if (var_1a0 != 4)
    {
        int32_t* result;
        arg1[1] = result;
        *arg1 = var_1a0;
        return result;
    }
    
    var_1a0 = var_1b0;
    int64_t var_198_1 = var_1b8;
    int64_t** var_190 = &var_158;
    int64_t var_188_1 = rbx_2;
    int64_t var_48;
    int64_t var_180_1 = var_48;
    var_130 = "()iflambda:crates/ruff_python_fo…";
    int64_t var_128_1 = 1;
    void* const var_120_1 = r12_2;
    int128_t var_118;
    var_118 = var_1c0;
    char var_f0_1 = 0;
    *var_118[8] = &var_1a0;
    void* const var_108_1 = &data_97ded0;
    char const* const var_100_1 = ")iflambda:crates/ruff_python_for…";
    int64_t var_f8_1 = 1;
    int64_t var_40;
    int64_t var_140 = var_40;
    int64_t var_38;
    int64_t var_138_1 = var_38;
    char const* const* var_90 = &var_130;
    void* const var_88_1 = &data_97d978;
    int64_t* var_80_1 = &var_140;
    void* const var_78_1 = &data_97d5a8;
    return _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(arg1, arg4, &var_90, 2);
}
