
  fn bat::app::App::inputs::h986c81333c797273(arg1: *mut i8, arg2: *mut c_void) -> i64

{
    let mut r14: *const i8 = &data_485489;
    let mut var_1c8: i64;
    let mut r15: *mut i64 = &var_1c8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::ha33ae1f620f2d9eb(
        &var_1c8, arg2, &data_485489, 9);
    let mut var_b0: i64;
    clap_builder::parser::error::MatchesError::unwrap::hda9461ab8f9a8888(&var_b0, &data_485489, 9, 
        &var_1c8);
    let mut var_208: i64;
    let mut var_1f0: i64;
    let var_1c0: i64;
    let var_1b8: *mut i8;
    
    if var_b0 == 0
    {
        var_208 = -0x8000000000000000;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h630ea7239f535835(&var_1c8, &var_b0);
        var_208 = var_1c8;
        var_1f0 = var_1c0;
        r14 = var_1b8;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::ha33ae1f620f2d9eb(
        &var_1c8, arg2, &data_48141c[0x1c], 4);
    let mut var_70: i64;
    clap_builder::parser::error::MatchesError::unwrap::hda9461ab8f9a8888(&var_70, 
        &data_48141c[0x1c], 4, &var_1c8);
    let mut var_200: i64;
    let mut var_1f8: i64;
    let mut rbp_1: u64;
    let mut var_20c_1: i8;
    let mut rax_3: i64;
    let mut rcx_2: i64;
    let mut rbx_1: *mut *mut c_void;
    let mut r12: bool;
    let mut r13: *mut i8;
    
    if var_70 == 0
    {
        r12 = true;
        var_200 = -0x8000000000000000;
        rcx_2 = var_208;
        
        if rcx_2 != -0x8000000000000000
        {
            goto 'label_7a81c2;
        }
        
        'label_7a8005:
        rax_3 = 1;
        let var_20c: i32 = rax_3;
        rbp_1 = alloc::boxed::Box$LT$T$GT$::new::hb0b512753cc67665();
        let mut rax_4: u64;
        rax_4 = 1;
        var_20c_1 = rax_4;
        rbx_1 = &data_ac83f0;
        r13 = 1;
        
        if r12 != 0
        {
            goto 'label_7a822f;
        }
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h630ea7239f535835(&var_1c8, &var_70);
        let rsi_3: i64 = var_1c8;
        var_1f8 = var_1c0;
        r15 = var_1b8;
        rcx_2 = var_208;
        rax_3 = rcx_2 == -0x8000000000000000;
        var_200 = rsi_3;
        r12 = rsi_3 == -0x8000000000000000;
        rax_3 |= r12;
        
        if (rax_3 & 1) != 0
        {
            if rcx_2 == -0x8000000000000000
            {
                goto 'label_7a8005;
            }
            
            goto 'label_7a81c2;
        }
        
        if r14 != r15
        {
            rax_3 = 1;
            let var_20c_3: i32 = rax_3;
            _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(&var_1c8, "Must be one file name per input …", 0x25);
            let var_188: i128;
            *arg1.byte_offset(0x40) = var_188;
            let zmm0_3: i128 = var_1c8;
            let var_198: i128;
            *arg1.byte_offset(0x30) = var_198;
            let var_1a8: i128;
            *arg1.byte_offset(0x20) = var_1a8;
            *arg1.byte_offset(0x10) = var_1b8;
            *arg1 = zmm0_3;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$$RF$std..path..Path$GT$$GT$$GT$::hefbd4e8c9620bbdf(var_200, var_1f8);
            /* tailcall */
            return
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::he862375b69ea6ca7(
                var_208, var_1f0);
        }
        
        rcx_2 = var_208;
        'label_7a81c2:
        let mut var_128: i64 = rcx_2;
        let var_120_1: i64 = var_1f0;
        let var_118_1: *const i8 = r14;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hbcb5dc5d4efdabe2(&var_1c8, &var_128);
        let var_20c_2: i32 = 0;
        rbp_1 = alloc::boxed::Box$LT$T$GT$::new::h818cf8d1bc96670b(&var_1c8);
        rbx_1 = &data_ac8428;
        var_20c_1 = 0;
        r13 = nullptr;
        
        if r12 != 0
        {
            'label_7a822f:
            let rax_11: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0xa0);
            
            if rax_11 == 0
            {
                alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                /* no return */
            }
            
            rbx_1[3](&var_1c8, rbp_1);
            let mut rsi_17: i64;
            
            if var_1c8 == 0
            {
                rsi_17 = 0;
            }
            else
            {
                rsi_17 = var_1c0;
            }
            
            bat::input::new_stdin_input::h2ae7c09cd685a9f4(&var_1c8, rsi_17);
            memcpy(rax_11, &var_1c8, 0xa0);
            *arg1.byte_offset(8) = 1;
            *arg1.byte_offset(0x10) = rax_11;
            *arg1.byte_offset(0x18) = 1;
            *arg1 = 0xd;
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h1f9b5db2161339be(rbp_1, rbx_1);
            let result: i64 = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$$RF$std..path..Path$GT$$GT$$GT$::hefbd4e8c9620bbdf(var_200, var_1f8);
            
            if r13 != 0 || var_20c_1 == 0
            {
                return result;
            }
            
            /* tailcall */
            return
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::he862375b69ea6ca7(
                var_208, var_1f0);
        }
    }
    let rax_5: u64 =
        alloc::boxed::Box$LT$T$GT$::new::h6027369fa272cb20(var_1f8, (r15 << 4) + var_1f8);
    let mut var_1e0: i64 = 0;
    let var_1d8: i64 = 8;
    let var_1d0: i64 = 0;
    let mut var_e8: ();
    core::iter::traits::iterator::Iterator::zip::h11df4a8393c6cbc2(&var_e8, rax_5, &data_ac8460, 
        rbp_1);
    
    loop
    {
        let mut var_110: i32;
        _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h4762d0fb8b5b7d97(&var_110, &var_e8);
        
        if var_110 != 1
        {
            break;
        }
        
        let var_108: *mut i8;
        
        if var_108 != 0
        {
            let var_100: i64;
            core::str::converts::from_utf8::h8a6dc80f786921e0(&var_1c8, var_108, var_100);
            let temp0_1: i8 = var_1c8;
            let mut rsi_8: *mut i8 = var_1b8;
            
            if temp0_1 != 0
            {
                rsi_8 = nullptr;
            }
            
            let mut rdi_10: i64 = var_1c0;
            
            if temp0_1 != 0
            {
                rdi_10 = 1;
            }
            
            let var_f8: i64;
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rdi_10, rsi_8, &data_485489[9], 1) == 0
            {
                bat::input::new_file_input::h6b300303a93fad8c(&var_1c8, var_108, var_100, var_f8);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hb1f08851061528ce(&var_1e0, &var_1c8);
            }
            else
            {
                bat::input::new_stdin_input::h2ae7c09cd685a9f4(&var_1c8, var_f8);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hb1f08851061528ce(&var_1e0, &var_1c8);
            }
        }
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..zip..Zip$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$core..option..Option$LT$$RF$std..path..Path$GT$$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$core..option..Option$LT$$RF$std..path..Path$GT$$GT$$GT$$GT$::hc0cf50eea9912096(&var_e8);
    *arg1.byte_offset(0x18) = var_1d0;
    *arg1.byte_offset(8) = var_1e0;
    *arg1 = 0xd;
    /* tailcall */
    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$$RF$std..path..Path$GT$$GT$$GT$::hefbd4e8c9620bbdf(var_200, var_1f8)
}
