
  char* bat::input::read_utf16_line::h0b621ced04bc80c9(char* arg1, int64_t arg2, void* arg3, int64_t* arg4, char arg5, char arg6)

{
    int64_t var_58;
    int64_t var_50_1;
    int64_t rbp_1;
    
    while (true)
    {
        var_58 = 0;
        var_50_1 = 1;
        int64_t var_48_1 = 0;
        char rax_1;
        int64_t rdx_1;
        rax_1 = std::io::impls::_$LT$impl$u20$std..io..BufRead$u20$for$u20$alloc..boxed..Box$LT$B$GT$$GT$::read_until::hc140cba533622c8b(arg2, arg3, arg5, &var_58);
        
        if (rax_1 & 1)
        {
            *(arg1 + 8) = rdx_1;
            *arg1 = 1;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(
                var_58, var_50_1);
        }
        
        if (!rdx_1)
        {
            rbp_1 = arg4[2];
            break;
        }
        
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(arg4, var_50_1, var_48_1 + var_50_1);
        rbp_1 = arg4[2];
        
        if (rbp_1 >= 2)
        {
            int64_t rax_2 = arg4[1];
            
            if (*(rax_2 + rbp_1 - 2) == arg6 && *(rax_2 + rbp_1 - 1) == arg5)
                break;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(var_58, 
            var_50_1);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(var_58, var_50_1);
    arg1[1] = rbp_1;
    *arg1 = 0;
    return arg1;
}
