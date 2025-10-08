
  uint64_t bat::less::parse_less_version::hf361f545e9895bb3(void* arg1, int64_t arg2)

{
    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcaa0289a539b3ffe(arg1, arg2, 
        "less src/less.rsLine range conta…", 5))
    {
        if (arg2 < 5)
        {
            core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(5, arg2);
            /* no return */
        }
        
        char var_30;
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_30, arg1 + 5, arg2 - 5);
        
        if (!(var_30 & 1))
        {
            char* var_28;
            int64_t var_20;
            char rax_2;
            int64_t rdx_2;
            rax_2 = core::str::_$LT$impl$u20$str$GT$::find::had6735de3995ef5e(var_28, var_20);
            
            if (rax_2 & 1)
            {
                char* rax_3;
                int64_t rdx_4;
                rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rdx_2, var_28, var_20);
                
                if (!rax_3)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(var_28, var_20, 0, rdx_2);
                    /* no return */
                }
                
                core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_30, 
                    rax_3, rdx_4);
                return var_30 * 2;
            }
        }
    }
    
    return 2;
}
