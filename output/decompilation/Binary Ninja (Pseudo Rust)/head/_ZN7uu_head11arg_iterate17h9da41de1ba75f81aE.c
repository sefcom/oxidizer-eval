
  fn uu_head::arg_iterate::h9da41de1ba75f81a(arg1: *mut i64, arg2: i64) -> *mut *mut c_void

{
    let mut var_150: i64 = arg2;
    let rdx: i64;
    let var_148: i64 = rdx;
    let mut var_140: *mut *mut c_void;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha233663bd138e689(&var_140, &var_150);
    let r15: *mut *mut c_void = var_140;
    
    if -(r15) == -0x8000000000000000
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut var_80: *mut *mut c_void;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha233663bd138e689(&var_80, &var_150);
    let mut r14: i64 = -0x8000000000000000;
    let rax_4: *mut *mut c_void = var_80;
    let mut result: *mut *mut c_void;
    let var_138: *mut i8;
    let var_130: i64;
    let mut var_e8: i64;
    let var_78: *mut i8;
    
    if rax_4 != -0x8000000000000000
    {
        let var_70: i64;
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_140, var_78, var_70);
        
        if var_140 == 1
        {
            r14 = -0x7fffffffffffffff;
            'label_45dffa:
            *arg1 = r14;
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc191b4ed0286b218(rax_4, 
                var_78);
            return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc191b4ed0286b218(
                r15, var_138);
        }
        
        let mut var_a8: i64;
        uu_head::parse::parse_obsolete::hee0b1fdae7af2962(&var_a8, var_138, var_130);
        let rax_7: i64 = var_a8;
        
        if -(rax_7) == -0x8000000000000000
        {
            var_e8 = 0;
            let var_e0_2: *mut i8 = var_138;
            let var_d8_2: i64 = var_130;
            let var_d0_1: i8 = 1;
            let mut var_90: *mut i64 = &var_e8;
            let var_88_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_140 = &data_4f6c90;
            let var_138_2: i64 = 1;
            let var_120_1: i64 = 0;
            let var_130_2: *mut *mut i64 = &var_90;
            let var_128_1: i64 = 1;
            let mut var_48: i128;
            core::option::Option$LT$T$GT$::map_or_else::hd0b4531fe379a27f(&var_48, &var_140);
            let var_38: i64;
            arg1[3] = var_38;
            *arg1.byte_offset(8) = var_48;
            goto 'label_45dffa;
        }
        
        if rax_7 != -0x7fffffffffffffff
        {
            let var_98: i64;
            let var_58_1: i64 = var_98;
            let mut var_68: i128 = var_a8;
            let rax_12: *mut i64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
            
            if rax_12 == 0
            {
                alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                /* no return */
            }
            
            *rax_12 = r15;
            rax_12[1] = var_138;
            rax_12[2] = var_130;
            var_e8 = 1;
            let var_e0_3: *mut i64 = rax_12;
            let var_d8_3: i64 = 1;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0ceaded9872b293d(&var_140, &var_e8);
            core::iter::traits::iterator::Iterator::chain::hd4b14ed75e7cf24f(&var_e8, &var_140, 
                &var_68);
            core::iter::traits::iterator::Iterator::chain::h1ff7b94f70b1b33c(&var_140, &var_e8, 
                var_150);
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h9461490f9e9c7628(&var_140);
            arg1[2] = &data_4f6cf0;
            *arg1 = -0x7ffffffffffffffb;
            return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc191b4ed0286b218(
                rax_4, var_78);
        }
        
        let rax_8: *mut i64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x30);
        
        if rax_8 == 0
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        *rax_8 = r15;
        rax_8[1] = var_138;
        rax_8[2] = var_130;
        rax_8[3] = rax_4;
        rax_8[4] = var_78;
        rax_8[5] = var_70;
        var_140 = 2;
        let var_138_1: *mut i64 = rax_8;
        let var_130_1: i64 = 2;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0ceaded9872b293d(&var_e8, &var_140);
        core::iter::traits::iterator::Iterator::chain::h363a5d7fa6683cbe(&var_140, &var_e8, 
            var_150);
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::ha2dd3dc0778b363e(&var_140);
        result = &data_4f6cb8;
    }
    else
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::ha4cb084281363d08(-0x8000000000000000, var_78);
        let rax_5: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
        
        if rax_5 == 0
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        *rax_5 = r15;
        *(rax_5 + 8) = var_138;
        *(rax_5 + 0x10) = var_130;
        var_e8 = 1;
        let var_e0_1: u64 = rax_5;
        let var_d8_1: i64 = 1;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0ceaded9872b293d(&var_140, &var_e8);
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h7acdb67afe7955ff(&var_140);
        result = &data_4f6d28;
    }
    arg1[2] = result;
    *arg1 = -0x7ffffffffffffffb;
    result
}
