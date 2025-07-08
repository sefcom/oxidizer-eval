
  int64_t uu_more::break_buff::he6395443a668b94e(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_80;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_80, 
        arg2, arg3);
    int64_t var_90 = 0;
    int16_t var_50 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h5d7525725ab87575(&var_90, 
        core::iter::traits::iterator::Iterator::fold::haf2e61b0f943967a(&var_90), 0);
    
    if (var_90)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(arg3);
        /* no return */
    }
    
    int64_t rax_1 = var_80;
    int64_t var_a8 = arg3;
    int64_t var_a0 = rax_1;
    int64_t result = 0;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_80, 
        arg2, arg3);
    var_90 = 0;
    int64_t var_88_1 = arg3;
    int16_t var_50_1 = 0;
    
    while (true)
    {
        int64_t rax_2;
        int64_t rdx_1;
        rax_2 = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::h6d0b307c0d2190f6(&var_90);
        
        if (!rax_2)
            break;
        
        void var_48;
        char* rax_3;
        uint64_t rdx_2;
        rax_3 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h200055905ca292d8(&var_48, rax_2, rdx_1);
        uu_more::break_line::h73539b671d3ea9e7(&var_48, rax_3, rdx_2, arg4);
        int64_t var_40;
        int64_t var_38;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3ec15337970eadce(&var_a8, var_40, var_38);
        var_38 = 0;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h54d13806247b6c15(&var_48);
    }
    
    arg1[1] = result;
    *arg1 = var_a8;
    return result;
}
