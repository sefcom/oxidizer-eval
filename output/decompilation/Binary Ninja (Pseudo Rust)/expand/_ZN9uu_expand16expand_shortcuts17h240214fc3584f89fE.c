
  fn uu_expand::expand_shortcuts::h240214fc3584f89f(arg1: *mut i128, arg2: *mut i64) -> *mut i128

{
    let mut var_b8: i64;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h4fa3e7992e01de79(&var_b8, arg2[2], 0);
    let var_b0: i64;
    
    if var_b8 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_b0);
        /* no return */
    }
    
    let mut var_f0: i64 = var_b0;
    let var_a8: i64;
    let var_e8: i64 = var_a8;
    let var_e0: i64 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfba173770346ed42(&var_b8, arg2);
    let mut i: i64;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h75a5837736690158(&i, &var_b8);
    
    while i != -0x8000000000000000
    {
        let mut var_d8: i128 = i;
        let mut var_108: *mut c_void;
        let var_80: *mut c_void;
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_108, *var_d8[8], var_80);
        let mut var_f8: *mut c_void;
        
        if var_108 != 0
        {
            'label_4b2355:
            var_f8 = var_80;
            var_108 = var_d8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h14b381994cf5b407(&var_f0, &var_108);
        }
        else
        {
            var_108 = 0;
            let mut var_100: *mut i8;
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha65bc1b4c59a7c83(var_100, 
                var_f8, core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2d, &var_108), 1) == 0
            {
                goto 'label_4b2355;
            }
            
            let mut rax_3: *mut c_void;
            let mut rdx_3: i64;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(var_100, var_f8);
            
            if rax_3 == 0
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(var_100, var_f8, 1, var_f8);
                /* no return */
            }
            
            var_108 = rax_3;
            var_100 = rax_3.byte_offset(rdx_3);
            
            if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::haae63640452d575a(core::iter::traits::iterator::Iterator::try_fold::he2bcc8d1435e77c9(&var_108)) == 0
            {
                goto 'label_4b2355;
            }
            
            let mut var_68: ();
            _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(
                &var_68, rax_3, rdx_3);
            let mut var_78: i64 = 0;
            let var_70_1: i64 = rdx_3;
            let var_38_1: i16 = 1;
            core::iter::traits::iterator::Iterator::fold::hb40c1509fd5bc5ab(&var_78, &var_f0);
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb2344d26e01de240(&var_d8);
        }
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h75a5837736690158(&i, &var_b8);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$::h4d437b6322f8f627(&var_b8);
    arg1[1] = var_e0;
    *arg1 = var_f0;
    arg1
}
