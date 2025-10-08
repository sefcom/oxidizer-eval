
  int64_t* ruff_python_formatter::statement::stmt_function_def::format_function_header::h0c50132786962415(int32_t* arg1, int64_t* arg2, void* arg3)

{
    void* var_60 = arg3;
    void* rax_1 = (*(arg2[1] + 0x30))(*arg2);
    alloc::rc::RcInnerPtr::inc_strong::h8686aaaa10b78ebb(*(rax_1 + 0x10));
    int64_t var_b0 = *(rax_1 + 0x10);
    void var_b1;
    char const* const var_a8;
    void* const var_a0;
    char const* const* var_90;
    int32_t var_50;
    
    if (*(arg3 + 0x7c))
    {
        var_a8 = "asyncforcrates/ruff_python_forma…";
        var_a0 = 5;
        var_90 = &var_a8;
        void* const var_88_1 = &data_97c890;
        void* var_80_1 = &var_b1;
        void* const var_78_1 = &data_97cbf0;
        _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(&var_50, arg2, &var_90, 2);
    }
    
    if (*(arg3 + 0x7c) && var_50 != 4)
    {
        int64_t var_40;
        *(arg1 + 0x10) = var_40;
        *arg1 = var_50;
    }
    else
    {
        var_a8 = "def->global\crates/ruff_python_f…";
        var_a0 = 3;
        void* var_58 = arg3 + 0x30;
        var_90 = &var_a8;
        void* const var_88_2 = &data_97c890;
        void* var_80_2 = &var_b1;
        void* const var_78_2 = &data_97cbf0;
        int64_t* var_70_1 = &var_58;
        void* const var_68_1 = &data_97a988;
        int32_t var_38;
        _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(&var_38, arg2, &var_90, 3);
        
        if (var_38 != 4)
        {
            int64_t var_28;
            *(arg1 + 0x10) = var_28;
            *arg1 = var_38;
        }
        else
        {
            char* rdx_2 = *(arg3 + 0x68);
            
            if (rdx_2)
            {
                var_a8 = rdx_2;
                ruff_python_formatter::FormatNodeRule::fmt::hec7ac514f5c830e4(&var_90, &var_a0, 
                    rdx_2, arg2);
            }
            
            if (rdx_2 && var_90 != 4)
            {
                *(arg1 + 0x10) = var_80_2;
                *arg1 = var_90;
            }
            else
            {
                var_90 = arg3 + 0x58;
                void* var_88_3 = arg3 + 0x70;
                int64_t* var_80_3 = &var_b0;
                void** var_78_3 = &var_60;
                var_a8 = &var_90;
                var_a0 = &data_97ed78;
                int32_t var_98_1 = 0;
                char var_94_1 = 0;
                _$LT$ruff_formatter..builders..Group$LT$Context$GT$$u20$as$u20$ruff_formatter..Format$LT$Context$GT$$GT$::fmt::hb09a1a8dca914ab0(arg1, &var_a8, arg2);
            }
        }
    }
    
    return core::ptr::drop_in_place$LT$ruff_python_formatter..comments..Comments$GT$::he9abffb240eba4a8(&var_b0);
}
