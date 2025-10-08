
  int64_t alacritty_terminal::term::Term$LT$T$GT$::bounds_to_string::h4abdcbf42c50785a(int64_t* arg1, void* arg2, int64_t arg3, int32_t arg4, int64_t arg5, int32_t arg6)

{
    uint64_t rbx;
    uint64_t var_30 = rbx;
    int64_t var_80 = 0;
    int64_t var_78 = 1;
    int64_t result = 0;
    int32_t var_64 = arg4;
    int32_t var_60 = arg6;
    char var_5c = 0;
    char rax;
    int32_t rdx;
    rax = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::hb267890a26ead5dc(&var_64, rbx);
    int32_t var_50;
    int128_t var_48;
    int64_t rbx_2;
    int64_t result_1;
    
    if (!(rax & 1))
    {
        rbx_2 = 1;
        result_1 = 0;
    }
    else
    {
        int64_t r14_1 = *(arg2 + 0xb8) - 1;
        char rax_1;
        
        do
        {
            int64_t rcx = 0;
            
            if (rdx == arg4)
                rcx = arg3;
            
            int64_t r8 = r14_1;
            
            if (rdx == arg6)
                r8 = arg5;
            
            alacritty_terminal::term::Term$LT$T$GT$::line_to_string::h817f918a5b9412b8(&var_50, 
                arg2, rdx, rcx, r8, rdx == arg6);
            int64_t rsi_1 = var_48;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(&var_80, rsi_1, *var_48[8] + rsi_1);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_50);
            rax_1 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::hb267890a26ead5dc(&var_64, &var_50);
        } while (rax_1 & 1);
        rbx_2 = var_78;
        result_1 = result;
    }
    
    var_50 = 0;
    char* rax_2;
    uint64_t rdx_3;
    rax_2 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0xa, &var_50);
    int64_t rax_3;
    uint64_t rdx_5;
    rax_3 =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::ha48df28aef4c1d38(
        rax_2, rdx_3, rbx_2, result_1);
    
    if (!rax_3)
    {
        arg1[2] = result;
        *arg1 = var_80;
        return result;
    }
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_50, rax_3, rdx_5);
    int64_t rax_4 = var_50;
    *(arg1 + 8) = var_48;
    *arg1 = rax_4;
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_80);
}
