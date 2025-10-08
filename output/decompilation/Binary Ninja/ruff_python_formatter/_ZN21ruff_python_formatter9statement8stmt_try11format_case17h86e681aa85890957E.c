
  int64_t ruff_python_formatter::statement::stmt_try::format_case::h86e681aa85890957(int64_t* arg1, void* arg2, char arg3, int64_t* arg4, int64_t arg5, int64_t arg6, char arg7, int64_t arg8)

{
    int64_t r12 = arg6;
    int64_t rbp = arg5;
    uint64_t r14 = arg3;
    void* r13 = arg2;
    
    if (!r14)
        goto label_71fcd7;
    
    int64_t rax;
    
    if (r14 != 1)
    {
        r13 = arg2 + 0x48;
        rax = *(r13 + 0x10);
        
        if (rax)
            goto label_71fcf5;
        
        goto label_71fe1d;
    }
    
    r13 = arg2 + 0x30;
    label_71fcd7:
    rax = *(r13 + 0x10);
    int64_t result;
    int64_t* rax_9;
    
    if (!rax)
    {
        label_71fe1d:
        rax_9 = arg4;
        label_71ff0d:
        arg1[1] = rax_9;
        arg1[2] = rbp;
        arg1[3] = r12;
        result = 0;
    }
    else
    {
        label_71fcf5:
        int64_t* rdx_1 = *(r13 + 8) + (rax << 7) - 0x80;
        int64_t rax_2 =
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::partition_point::h49c74675994d1cd0(rbp, 
            r12, rdx_1);
        char const (** const var_148)[0x9b];
        
        if (rax_2 > r12)
        {
            var_148 = &data_97adf0;
            int64_t var_140_2 = 1;
            int64_t var_138_2 = 8;
            int128_t var_130_1 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_148);
            /* no return */
        }
        
        int64_t var_70;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h24a88d3a0c186412(&var_70, 
            rbp, r12, rax_2);
        int64_t r12_1 = var_70;
        int64_t var_68;
        int64_t rax_5 =
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::partition_point::h454e79186506d216(r12_1, 
            var_68);
        
        if (rax_5 > var_68)
        {
            var_148 = &data_97adf0;
            int64_t var_140_3 = 1;
            int64_t var_138_3 = 8;
            int128_t var_130_2 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_148);
            /* no return */
        }
        
        int64_t var_50;
        int64_t rdx_4 =
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h24a88d3a0c186412(
            &var_50, r12_1, var_68, rax_5);
        int64_t rsi_4 = var_50;
        uint64_t r14_1 = r14 << 3;
        char const (** r12_2)[0x9b] = *(r14_1 + &data_48d620);
        int64_t rax_6 = *(r14_1 + &data_48d638);
        void* var_d8 = *(&data_48d610 + (r14 << 2)) + &data_48d610;
        int64_t var_d0_1 = rax_6;
        int64_t rax_7;
        
        if (!arg4)
            rax_7 = 0x5e;
        else
            rax_7 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(arg4);
        
        var_148 = r12_2;
        void* var_140_1 = arg2;
        int64_t var_138_1 = rsi_4;
        int128_t var_130;
        int64_t var_48;
        var_130 = var_48;
        *var_130[8] = rax_7;
        int64_t var_120_1 = rdx_4;
        void** var_118_1 = &var_d8;
        void* const var_110_1 = &data_97c890;
        int64_t var_40;
        int64_t var_108_1 = var_40;
        int64_t var_38;
        int64_t var_100_1 = var_38;
        void* var_90 = r13;
        char var_78_1 = arg7;
        int64_t var_88_1 = var_40;
        int64_t var_80_1 = var_38;
        int64_t* var_b0 = &var_148;
        void* const var_a8_1 = &data_97e140;
        void** var_a0_1 = &var_90;
        void* const var_98_1 = &data_97e160;
        int32_t var_c8;
        _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(&var_c8, arg8, &var_b0, 2);
        int64_t var_58;
        r12 = var_58;
        int64_t var_60;
        rbp = var_60;
        rax_9 = rdx_1;
        
        if (var_c8 == 4)
            goto label_71ff0d;
        
        int64_t var_b8;
        arg1[3] = var_b8;
        *(arg1 + 8) = var_c8;
        result = 1;
    }
    *arg1 = result;
    return result;
}
