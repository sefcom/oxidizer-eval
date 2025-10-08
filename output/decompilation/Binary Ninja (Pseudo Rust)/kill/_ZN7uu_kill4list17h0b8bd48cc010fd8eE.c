
  fn uu_kill::list::h0b8bd48cc010fd8e(arg1: *mut c_void) -> i64

{
    let rax: i64 = *arg1.byte_offset(0x10);
    
    if rax == 0
    {
        /* tailcall */
        return uu_kill::print_signals::h042cfab5aaca8808();
    }
    
    let r15: i64 = *arg1.byte_offset(8);
    let r12: i64 = rax * 0x18;
    let mut r13: i64 = 0;
    let mut result: i64;
    
    loop
    {
        let rax_2: u64 =
            uu_kill::print_signal::hbbda5da3d768aa27(*(r15 + r13 + 8), *(r15 + r13 + 0x10));
        
        if rax_2 == 0
        {
            result = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hddf9a1b880dd3247(0, &data_4e76b0);
            r13 += 0x18;
            
            if r12 == r13
            {
                break;
            }
        }
        else
        {
            let mut var_a0: u64 = rax_2;
            let var_98_1: *mut *mut c_void = &data_4e76b0;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(rax_2));
            let mut rax_4: i64;
            let mut rdx_1: i64;
            rax_4 = uucore::util_name::h074417a1e6395129();
            let mut var_90: i64 = rax_4;
            let var_88_1: i64 = rdx_1;
            let mut var_80: *mut i64 = &var_90;
            let var_78_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3a9a4fe6be7cab02;
            let var_70_1: *mut u64 = &var_a0;
            let var_68_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5053a415acb728e8;
            let mut var_60: *mut c_void = &data_4e7718;
            let var_58_1: i64 = 3;
            let var_40_1: i64 = 0;
            let var_50_1: *mut *mut i64 = &var_80;
            let var_48_1: i64 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_60);
            result = core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hd18bab097a34ea48(var_a0, var_98_1);
            r13 += 0x18;
            
            if r12 == r13
            {
                break;
            }
        }
    }
    
    result
}
