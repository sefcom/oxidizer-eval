
  fn uu_test::uumain::uumain::h9b4c2f0d3a9c2e97(arg1: i64) -> *mut i32

{
    let mut var_388: i64 = arg1;
    let rsi: i64;
    let var_380: i64 = rsi;
    let mut var_2e8: i64;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6c4d509ce1d88ea6(&var_2e8, &var_388);
    let mut var_378: i128;
    
    if var_2e8 != -0x8000000000000000
    {
        let var_2d8: i64;
        let var_368_1: i64 = var_2d8;
        var_378 = var_2e8;
    }
    else
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_378, 
            "test -> \x1b[2m -- \x1b[8mhelpNo…", 4);
    }
    
    let mut rax_2: i64;
    let mut rdx: *mut i64;
    rax_2 = uucore::util_name::h60d842bf27b05e82();
    let mut var_3e0: i128;
    core::iter::traits::iterator::Iterator::collect::hef0e0e7de28f3954(&var_3e0, var_388);
    var_2e8 = 0;
    let mut rax_3: i64;
    let mut rdx_2: u64;
    rax_3 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&var_2e8);
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h4c2f4262fa2cfdd6(rax_2, rdx, rax_3, 
        rdx_2) == 0
    {
        goto 'label_4640b0;
    }
    
    let mut var_3d0: i64;
    let mut rax_5: i64 = var_3d0;
    let mut var_358: i128;
    let mut var_320: i64;
    
    if rax_5 == 1
    {
        let rax_6: *mut c_void = *var_3e0[8];
        *rax_6.byte_offset(8);
        *rax_6.byte_offset(0x10);
        
        if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03.specialized.2() != 0
        {
            'label_463fd2:
            uu_test::uu_app::h10b434699cb68342(&var_2e8);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::heac1a9a54e41d20b(&var_358, &var_3e0);
            core::iter::traits::iterator::Iterator::chain::h0c34891eced7376c(&var_320, &var_378, 
                &var_358);
            clap_builder::builder::command::Command::get_matches_from::h51fba41e9672da3d(&var_358, 
                &var_2e8, &var_320);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc9d47db42b7cb236(&var_358);
            return nullptr;
        }
        
        if var_3d0 == 0
        {
            core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
            /* no return */
        }
        
        let rax_8: *mut c_void = *var_3e0[8];
        *rax_8.byte_offset(8);
        *rax_8.byte_offset(0x10);
        
        if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03.specialized.1() != 0
        {
            goto 'label_463fd2;
        }
        
        rax_5 = var_3d0;
    }
    
    let mut result: *mut i32;
    let var_317: i128;
    let mut var_2d0: i64;
    
    if rax_5 == 0
    {
        var_358 = -0x8000000000000000;
        'label_464247:
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hdaaee967a2b5b021(&var_320);
        let var_2d8_2: i64 = *var_317[7];
        var_2e8 = var_320;
        var_2d0 = 2;
        result = alloc::boxed::Box$LT$T$GT$::new::hc7e7f6fba09f156b(&var_2e8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h5245e286bf4b67a3(&var_358);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h438bb28034b6af7a(&var_3e0);
    }
    else
    {
        var_3d0 = rax_5 - 1;
        let rcx_1: i64 = *var_3e0[8];
        let rax_11: i64 = (rax_5 - 1) * 3;
        let rdx_6: u64 = *(rcx_1 + (rax_11 << 3) + 0x10);
        var_358 = *(rcx_1 + (rax_11 << 3));
        
        if var_358 == -0x8000000000000000
        {
            goto 'label_464247;
        }
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf89697c9f8af0cc9(*var_358[8], rdx_6, "]--help--version", 1) == 0
        {
            goto 'label_464247;
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h5245e286bf4b67a3(&var_358);
        'label_4640b0:
        let var_2d8_1: i64 = var_3d0;
        var_2e8 = var_3e0;
        uu_test::parser::parse::h8832bd6d00f7e405(&var_320, &var_2e8);
        let rax_14: i64 = var_320;
        let var_318: i8;
        
        if rax_14 != 7
        {
            let mut var_3a8_2: i128 = var_317;
            *var_3a8_2[0xf] = *var_317[0xf];
            let mut var_3c8_2: i128 = var_3a8_2;
            *var_3c8_2[0xf] = *var_3a8_2[0xf];
            let var_2d0_1: i64 = *var_3c8_2[0xf];
            let var_2df_1: i128 = var_3c8_2;
            var_2e8 = rax_14;
            let var_2e0_1: i8 = var_318;
            result = alloc::boxed::Box$LT$T$GT$::new::h0acd09840d63c2af(&var_2e8);
        }
        else
        {
            let var_348_2: i64 = *var_317[0xf];
            var_358 = var_318;
            uu_test::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hcf64a0467c9be372(&var_2e8, 
                &var_358);
            let rcx_3: i64 = var_2e8;
            let var_2df: i128;
            let mut var_3a8_1: i128 = var_2df;
            *var_3a8_1[0xf] = var_2d0;
            let mut var_3c8_1: i128 = var_3a8_1;
            *var_3c8_1[0xf] = *var_3a8_1[0xf];
            let var_2e0: i8;
            
            if rcx_3 != 7
            {
                let var_2d0_2: i64 = *var_3c8_1[0xf];
                let var_2df_2: i128 = var_3c8_1;
                var_2e8 = rcx_3;
                let var_2e0_2: i8 = var_2e0;
                result = alloc::boxed::Box$LT$T$GT$::new::h0acd09840d63c2af(&var_2e8);
            }
            else if (var_2e0 & 1) != 0
            {
                result = nullptr;
            }
            else
            {
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
            }
        }
    }
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h66f9a4ea636dc8f3(&var_378);
    result
}
