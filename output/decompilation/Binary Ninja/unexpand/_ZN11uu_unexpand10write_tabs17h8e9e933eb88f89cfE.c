
  uint64_t uu_unexpand::write_tabs::h8e9e933eb88f89cf(int64_t* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4, int64_t arg5, char arg6, char arg7, char arg8)

{
    uint64_t rbp = arg4;
    uint64_t result = arg7;
    
    if (result)
    {
        arg4 = 1;
        
        if (arg6 || rbp + 1 >= arg5)
            goto label_4b277b;
        
        goto label_4b28c2;
    }
    
    arg4 = arg8;
    uint64_t result_1;
    uint64_t* var_80;
    void* const var_70;
    uint64_t** var_40;
    
    if (!arg4 || arg6 || rbp + 1 >= arg5)
    {
        label_4b277b:
        
        if (arg5 > rbp)
        {
            arg4 &= arg6;
            arg4 |= result;
            
            if (arg4)
                goto label_4b28c2;
        }
    }
    else
    {
        label_4b28c2:
        
        while (true)
        {
            int64_t rdx_3;
            result = uu_unexpand::next_tabstop::h948056bd8ee01f21(arg2, arg3, rbp);
            
            if (result != 1)
                break;
            
            uint64_t r13_2 = rdx_3 + rbp;
            
            if (r13_2 > arg5)
                break;
            
            int64_t rax_3 = arg1[2];
            uint64_t result_2;
            
            if (*arg1 - rax_3 > 1)
            {
                arg1[1][rax_3] = 9;
                arg1[2] = rax_3 + 1;
                result_2 = 0;
            }
            else
                result_2 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h37baa5ae29b8f289(arg1, "\t ", 1);
            
            rbp = r13_2;
            
            if (result_2)
            {
                result_1 = result_2;
                uint64_t* rax_4;
                int64_t rdx_4;
                rax_4 = uucore::util_name::h60d842bf27b05e82();
                var_80 = rax_4;
                int64_t var_78_2 = rdx_4;
                var_40 = &var_80;
                int64_t (* var_38_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf6a1d2ab1cd5850e;
                var_70 = &data_51d100;
                int64_t var_68_2 = 2;
                int64_t var_50_2 = 0;
                uint64_t*** var_60_2 = &var_40;
                int64_t var_58_2 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
                var_80 = &result_1;
                int64_t (* var_78_3)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                var_70 = &data_51d120;
                int64_t var_68_3 = 2;
                int64_t var_50_3 = 0;
                uint64_t** var_60_3 = &var_80;
                int64_t var_58_3 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
                std::process::exit::hf8c1b9d00a2a86fd(1);
                /* no return */
            }
        }
    }
    
    int64_t i_1 = arg5 - rbp;
    
    if (arg5 > rbp)
    {
        int64_t i;
        
        do
        {
            int64_t rax = arg1[2];
            
            if (*arg1 - rax < 2)
            {
                result = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h37baa5ae29b8f289(arg1, " ", 1);
                
                if (result)
                {
                    result_1 = result;
                    uint64_t* rax_1;
                    int64_t rdx_1;
                    rax_1 = uucore::util_name::h60d842bf27b05e82();
                    var_80 = rax_1;
                    int64_t var_78 = rdx_1;
                    var_40 = &var_80;
                    int64_t (* var_38)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf6a1d2ab1cd5850e;
                    var_70 = &data_51d100;
                    int64_t var_68 = 2;
                    int64_t var_50 = 0;
                    uint64_t*** var_60 = &var_40;
                    int64_t var_58 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
                    var_80 = &result_1;
                    int64_t (* var_78_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    var_70 = &data_51d120;
                    int64_t var_68_1 = 2;
                    int64_t var_50_1 = 0;
                    uint64_t** var_60_1 = &var_80;
                    int64_t var_58_1 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_70);
                    std::process::exit::hf8c1b9d00a2a86fd(1);
                    /* no return */
                }
            }
            else
            {
                arg1[1][rax] = 0x20;
                result = rax + 1;
                arg1[2] = result;
            }
            
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }
    
    return result;
}
