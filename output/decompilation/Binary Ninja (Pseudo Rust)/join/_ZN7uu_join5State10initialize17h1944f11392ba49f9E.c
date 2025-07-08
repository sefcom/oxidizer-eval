
  fn uu_join::State::initialize::h1944f11392ba49f9(arg1: *mut i64, arg2: i64, arg3: i8) -> i64

{
    let mut var_40: i64;
    uu_join::State::read_line::hae4618c32b71c268(&var_40, arg1, arg2);
    let rax: i64 = var_40;
    
    if rax != -0x8000000000000000
    {
        let var_38: i64;
        
        if rax == -0x7fffffffffffffff
        {
            let mut var_c8: i64 = var_38;
            let mut rax_6: *mut i64;
            let mut rdx_1: i64;
            rax_6 = uucore::util_name::h60d842bf27b05e82();
            let mut var_c0: *mut i64 = rax_6;
            let var_b8: i64 = rdx_1;
            let mut var_80: *mut i64 = &var_c0;
            let var_78: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a9acb5b6b087e94;
            let mut var_b0: *mut c_void = &data_532610;
            let var_a8: i64 = 2;
            let var_90: i64 = 0;
            let var_a0: *mut *mut i64 = &var_80;
            let var_98: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
            var_c0 = &var_c8;
            let var_b8_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            var_b0 = &data_532630;
            let var_a8_1: i64 = 2;
            let var_90_1: i64 = 0;
            let var_a0_1: *mut *mut i64 = &var_c0;
            let var_98_1: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
            std::process::exit::hf8c1b9d00a2a86fd(1);
            /* no return */
        }
        
        let mut var_70: i64 = rax;
        let var_68_1: i128 = var_38;
        let var_28: i128;
        let var_58_1: i128 = var_28;
        let var_18: i64;
        let var_48_1: i64 = var_18;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hb39c05ee85860ab5(arg1, &var_70);
        
        if arg3 != 0
        {
            if arg1[2] != 0
            {
                return *(arg1[1] + 0x10);
            }
            
            core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
            /* no return */
        }
    }
    
    0
}
