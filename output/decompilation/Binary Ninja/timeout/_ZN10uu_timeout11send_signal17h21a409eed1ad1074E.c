
  bool uu_timeout::send_signal::h21a409eed1ad1074(void* arg1, int64_t arg2, int32_t arg3)

{
    int64_t rax;
    
    if (!arg3)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h5063ce8deb86dfa9(_$LT$std..process..Child$u20$as$u20$uucore..features..process..ChildExt$GT$::send_signal_group::h0afa37538c8ccec5(arg1, arg2));
        char rax_2;
        int64_t rdx;
        rax_2 = uucore::features::signals::signal_by_name_or_value::h89b982f23c5744ec(
            "KILLTRAP -- \x1b[8mPIPEhelpNones…", 4);
        
        if (!(rax_2 & 1))
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        bool result;
        int64_t rdx_1;
        result = uucore::features::signals::signal_by_name_or_value::h89b982f23c5744ec(
            "CONTkeysUSR1u128for<XFSZ\x1b[1mK…", 4);
        
        if (!(result & 1))
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        result = arg2 != rdx;
        
        if (!(result & arg2 != rdx_1))
            return result;
        
        rax = _$LT$std..process..Child$u20$as$u20$uucore..features..process..ChildExt$GT$::send_signal_group::h0afa37538c8ccec5(arg1, rdx_1);
    }
    else
        rax = _$LT$std..process..Child$u20$as$u20$uucore..features..process..ChildExt$GT$::send_signal::hfdf2b23ac9394801(arg1);
    
    /* tailcall */
    return core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h5063ce8deb86dfa9(rax);
}
