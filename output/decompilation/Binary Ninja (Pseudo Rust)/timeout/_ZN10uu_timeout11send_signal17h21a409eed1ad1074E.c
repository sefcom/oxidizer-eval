
  fn uu_timeout::send_signal::h21a409eed1ad1074(arg1: *mut c_void, arg2: i64, arg3: i32) -> bool

{
    let mut rax: i64;
    
    if arg3 == 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h5063ce8deb86dfa9(_$LT$std..process..Child$u20$as$u20$uucore..features..process..ChildExt$GT$::send_signal_group::h0afa37538c8ccec5(arg1, arg2));
        let mut rax_2: i8;
        let mut rdx: i64;
        rax_2 = uucore::features::signals::signal_by_name_or_value::h89b982f23c5744ec(
            "KILLTRAP -- \x1b[8mPIPEhelpNones…", 4);
        
        if (rax_2 & 1) == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        let mut result: bool;
        let mut rdx_1: i64;
        result = uucore::features::signals::signal_by_name_or_value::h89b982f23c5744ec(
            "CONTkeysUSR1u128for<XFSZ\x1b[1mK…", 4);
        
        if (result & 1) == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        result = arg2 != rdx;
        
        if (result & arg2 != rdx_1) == 0
        {
            return result;
        }
        
        rax = _$LT$std..process..Child$u20$as$u20$uucore..features..process..ChildExt$GT$::send_signal_group::h0afa37538c8ccec5(arg1, rdx_1);
    }
    else
    {
        rax = _$LT$std..process..Child$u20$as$u20$uucore..features..process..ChildExt$GT$::send_signal::hfdf2b23ac9394801(arg1);
    }
    
    /* tailcall */
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h5063ce8deb86dfa9(rax)
}
