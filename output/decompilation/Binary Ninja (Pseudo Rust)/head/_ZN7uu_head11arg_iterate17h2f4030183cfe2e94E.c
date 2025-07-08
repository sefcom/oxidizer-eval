
  fn uu_head::arg_iterate::h2f4030183cfe2e94(arg1: *mut i64, arg2: i64) -> *mut i128

{
    let mut var_1a8: i64 = arg2;
    let rdx: i64;
    let var_1a0: i64 = rdx;
    let mut var_198: *mut *mut c_void;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h96bd9273904dbf8c(&var_198, &var_1a8);
    
    if var_198 == -0x8000000000000000
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    let mut var_138: i128 = var_198;
    let mut var_120: i64;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h96bd9273904dbf8c(&var_120, &var_1a8);
    let mut result: *mut i128;
    let var_188: *mut c_void;
    let mut var_e8: i128;
    let mut rbp: i64;
    
    if var_120 == -0x8000000000000000
    {
        let rax_3: *mut i128 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x18);
        
        if rax_3 == 0
        {
            rbp = 1;
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
            /* no return */
        }
        
        rax_3[1] = var_188;
        *rax_3 = var_138;
        alloc::slice::hack::into_vec::hf4b4861c96976c7f(&var_e8, rax_3, 1);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd786cb26383b0852(&var_198, &var_e8);
        result = alloc::boxed::Box$LT$T$GT$::new::hc4846b01d8406131(&var_198);
        arg1[1] = result;
        arg1[2] = &data_52a500;
        *arg1 = 0;
        
        if var_120 != -0x8000000000000000
        {
            return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h04b221221386ed4a(
                &var_120);
        }
    }
    else
    {
        let mut var_a8: i128 = var_120;
        let var_110: i64;
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_198, *var_a8[8], var_110);
        let mut rax_2: *mut i128;
        
        if var_198 == 0
        {
            let var_190: *mut i8;
            let mut var_88: i64;
            uu_head::parse::parse_obsolete::ha14ffc23c3e4c861(&var_88, var_190, var_188);
            
            if var_88 != 0
            {
                let mut var_108: i128;
                let var_80: i64;
                
                if var_80 != 0
                {
                    let var_70: i128;
                    let var_f8_1: i128 = var_70;
                    var_108 = var_80;
                    let rax_4: *mut i128 =
                        alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x18);
                    
                    if rax_4 == 0
                    {
                        rbp = 1;
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                        /* no return */
                    }
                    
                    rax_4[1] = var_188;
                    *rax_4 = var_138;
                    alloc::slice::hack::into_vec::hf4b4861c96976c7f(&var_e8, rax_4, 1);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd786cb26383b0852(&var_198, &var_e8);
                    core::iter::traits::iterator::Iterator::chain::ha0a0ba46a8cbd376(&var_e8, 
                        &var_198, &var_108);
                    core::iter::traits::iterator::Iterator::chain::he5b09284c7fcbb4e(&var_198, 
                        &var_e8, var_1a8);
                    arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h8b06367608b97cc0(&var_198);
                    arg1[2] = &data_52a420;
                    *arg1 = 0;
                    rbp = 0;
                    goto 'label_46c260;
                }
                
                let var_78: i8;
                let mut var_180: i32;
                
                if var_78 == 0
                {
                    var_e8 = 0;
                    *var_e8[8] = var_190;
                    let var_d8_2: *mut c_void = var_188;
                    let var_d0_2: i8 = 1;
                    var_108 = &var_e8;
                    *var_108[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_198 = &data_52a3a0;
                    let var_190_2: i64 = 1;
                    let var_178_2: i64 = 0;
                    let var_188_5: *mut i128 = &var_108;
                    var_180 = 1;
                    let mut var_60: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h1dd76b100b962b8a(&var_60, 
                        &var_198);
                    let var_180_3: i32 = 1;
                    var_198 = var_60;
                    let var_50: i64;
                    let var_188_6: i64 = var_50;
                    rax_2 = alloc::boxed::Box$LT$T$GT$::new::hec34c9cb33ab5596(&var_198);
                }
                else
                {
                    var_e8 = 0;
                    *var_e8[8] = var_190;
                    let var_d8_1: *mut c_void = var_188;
                    let var_d0_1: i8 = 1;
                    var_108 = &var_e8;
                    *var_108[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_198 = &data_52a3b0;
                    let var_190_1: i64 = 2;
                    let var_178_1: i64 = 0;
                    let var_188_3: *mut i128 = &var_108;
                    var_180 = 1;
                    let mut var_48: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h1dd76b100b962b8a(&var_48, 
                        &var_198);
                    let var_180_2: i32 = 1;
                    var_198 = var_48;
                    let var_38: i64;
                    let var_188_4: i64 = var_38;
                    rax_2 = alloc::boxed::Box$LT$T$GT$::new::hec34c9cb33ab5596(&var_198);
                }
                goto 'label_46c23f;
            }
            
            let rax_6: *mut i128 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x30);
            
            if rax_6 == 0
            {
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                /* no return */
            }
            
            var_198 = var_a8;
            rax_6[1] = var_188;
            *rax_6 = var_138;
            *rax_6.byte_offset(0x18) = var_198;
            *rax_6.byte_offset(0x28) = var_110;
            alloc::slice::hack::into_vec::hf4b4861c96976c7f(&var_198, rax_6, 2);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd786cb26383b0852(&var_e8, &var_198);
            core::iter::traits::iterator::Iterator::chain::h3acfa52a063c782b(&var_198, &var_e8, 
                var_1a8);
            result = alloc::boxed::Box$LT$T$GT$::new::h74b85d809da0db73(&var_198);
            arg1[1] = result;
            arg1[2] = &data_52a3e8;
            *arg1 = 0;
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h40b4874b68ac2e0f(
                &var_e8);
            let var_d8: i64;
            let var_188_1: i64 = var_d8;
            var_198 = var_e8;
            let var_180_1: i32 = 1;
            rax_2 = alloc::boxed::Box$LT$T$GT$::new::hec34c9cb33ab5596(&var_198);
            'label_46c23f:
            arg1[1] = rax_2;
            arg1[2] = &data_52a490;
            *arg1 = 1;
            rbp = 1;
            'label_46c260:
            result = core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h04b221221386ed4a(
                &var_a8);
            
            if rbp != 0
            {
                return 
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h04b221221386ed4a(
                    &var_138);
            }
        }
    }
    result
}
