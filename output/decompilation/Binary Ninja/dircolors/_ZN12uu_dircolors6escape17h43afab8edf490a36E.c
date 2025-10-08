
  int128_t* uu_dircolors::escape::h43afab8edf490a36(int128_t* arg1, int64_t arg2, int64_t arg3)

{
    uint64_t rbx;
    uint64_t var_30 = rbx;
    int64_t var_60 = 0;
    int64_t var_58 = 1;
    int64_t var_50 = 0;
    int64_t var_40 = arg2;
    int64_t var_38 = arg3 + arg2;
    char rax;
    int32_t rdx_1;
    rax = core::str::validations::next_code_point::h89d139d84d7ee604(&var_40, rbx);
    
    if (rax & 1)
    {
        int32_t rcx_1 = 0x20;
        char rax_2;
        
        do
        {
            int32_t rbp_1 = rdx_1;
            char const* const rsi = "'\''.svg.flcleft -> .tar.lzo.swm…";
            char const* const rax_1 = ".svg.flcleft -> .tar.lzo.swm.mkv…";
            
            if (rdx_1 != 0x27 && rdx_1 == 0x3a)
            {
                rsi = "\:# Configuration file for dirco…";
                rax_1 = "# Configuration file for dircolo…";
            }
            
            if (rdx_1 == 0x27 || (rdx_1 == 0x3a && rcx_1 != 0x5c))
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hee3cea90a974f94a(&var_60, rsi, rax_1);
            else
                alloc::string::String::push::h0ede46164189e411(&var_60, rbp_1);
            
            rax_2 = core::str::validations::next_code_point::h89d139d84d7ee604(&var_40, 
                "\:# Configuration file for dirco…");
            rcx_1 = rbp_1;
        } while (rax_2 & 1);
    }
    
    arg1[1] = var_50;
    *arg1 = var_60;
    return arg1;
}
