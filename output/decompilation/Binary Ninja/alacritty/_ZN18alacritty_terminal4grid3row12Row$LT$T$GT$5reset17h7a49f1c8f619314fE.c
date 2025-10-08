
  int64_t* alacritty_terminal::grid::row::Row$LT$T$GT$::reset::h7a49f1c8f619314f(void* arg1, int32_t arg2)

{
    int64_t rax;
    int64_t var_28 = rax;
    int64_t r14 = *(arg1 + 0x10);
    
    if (r14 < 1)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(r14 - 1, 0);
        /* no return */
    }
    
    int64_t r15 = *(arg1 + 8);
    var_28 = *(r15 + (r14 - 1) * 0x18 + 0xc);
    *var_28[4] = arg2;
    int64_t rsi_1;
    
    if (!core::cmp::PartialEq::ne::hd8369387fbf0e6bf(&var_28, &*var_28[4]))
        rsi_1 = *(arg1 + 0x18);
    else
    {
        *(arg1 + 0x18) = r14;
        rsi_1 = r14;
    }
    
    int64_t* result;
    int64_t rdx_1;
    result = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::hd3f76699eb90e028(0, rsi_1, r15, r14);
    
    if (rdx_1)
    {
        int64_t* result_1 = result;
        int64_t i_1 = rdx_1 * 0x18;
        int64_t i;
        
        do
        {
            result = _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::reset::h9328c0b97bb6c37f(result_1, arg2);
            result_1 = &result_1[3];
            i = i_1;
            i_1 -= 0x18;
        } while (i != 0x18);
    }
    
    *(arg1 + 0x18) = 0;
    return result;
}
