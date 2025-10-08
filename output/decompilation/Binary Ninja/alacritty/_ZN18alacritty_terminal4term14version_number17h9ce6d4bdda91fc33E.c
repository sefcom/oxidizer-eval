
  int64_t alacritty_terminal::term::version_number::h9ce6d4bdda91fc33(char* arg1, int64_t arg2)

{
    int64_t rbx = arg2;
    char* r14 = arg1;
    char rax;
    int64_t rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::rfind::h5ffd3ec6ac878557(arg1, arg2);
    
    if (rax & 1)
    {
        char* rax_1;
        int64_t rdx_2;
        rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rdx, r14, rbx);
        
        if (!rax_1)
        {
            core::str::slice_error_fail::h1a2885084e28d077(r14, rbx, 0, rdx);
            /* no return */
        }
        
        rbx = rdx_2;
        r14 = rax_1;
    }
    
    void var_70;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_70, 
        0x2e, r14, rbx);
    int128_t var_88 = {0};
    int64_t var_78 = rbx;
    int16_t var_40 = 1;
    uint32_t var_b0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcac804ffefb0fdb3(&var_b0, &var_88);
    char* i_1;
    char* i = i_1;
    int64_t result = 0;
    
    for (; i; i = i_1)
    {
        uint32_t rbp_1 = var_b0;
        int64_t var_a0;
        char var_98;
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_98, i, var_a0);
        int64_t r13_1;
        int64_t var_90;
        
        if (!var_98)
            r13_1 = var_90;
        else
            r13_1 = 0;
        result += core::num::_$LT$impl$u20$usize$GT$::pow::ha18887787946000d(rbp_1) * r13_1;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcac804ffefb0fdb3(&var_b0, &var_88);
    }
    
    return result;
}
