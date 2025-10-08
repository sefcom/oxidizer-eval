
  fn fd::filter::size::SizeFilter::parse_opt::h90fd64b2c85beca5(arg1: i64, arg2: u64) -> i64

{
    let rbp: i64;
    let var_8: i64 = rbp;
    let rax: *mut c_void =
        std::sync::once_lock::OnceLock$LT$T$GT$::get_or_try_init::hed3d15c7cce9ebbc();
    let mut var_f0: i32 = 0;
    let mut var_e8: i64 = arg1;
    let var_d8: i64 = 0;
    let var_c8: i8 = 1;
    regex_automata::util::search::Input::set_span::h5c7c9dbfef69e703(&var_f0);
    let zmm0: i128 = var_f0;
    let var_88: i128 = arg2;
    let mut var_98: i128 = arg2;
    let mut var_a8: i128 = zmm0;
    regex_automata::meta::regex::Regex::search_half::hd834d68942097f24(&var_f0, *rax, 
        *rax.byte_offset(8), &var_a8);
    
    if var_f0 != 0
    {
        regex::regex::string::Regex::captures_at::he0fb054f08fc93bb(&var_f0, rax, arg1, arg2);
        
        if var_f0 != 2
        {
            let zmm0_1: i128 = var_f0;
            let var_88_1: i128 = arg2;
            var_98 = arg2;
            var_a8 = zmm0_1;
            let mut var_48: i32;
            regex_automata::util::captures::Captures::get_group::h768b37319d65c9e8(&var_48, 
                &var_98, 1);
            let mut var_e0: u64;
            let var_c0: i128;
            let var_b0: i64;
            let var_40: i128;
            let mut rax_2: i64;
            
            if var_48 != 1
            {
                rax_2 = 0;
            }
            else
            {
                rax_2 = *var_c0[8];
                var_e8 = var_b0;
                var_e0 = var_40;
            }
            
            var_f0 = rax_2;
            let mut rax_3: *mut c_void;
            let mut rdx_2: u64;
            rax_3 = core::option::Option$LT$T$GT$::map_or::hd9b899954509f5bd(&var_f0);
            regex_automata::util::captures::Captures::get_group::h768b37319d65c9e8(&var_f0, 
                &var_98, 2);
            
            if var_f0 == 1
            {
                var_f0 = *var_c0[8];
                let var_e8_1: i64 = var_b0;
                var_e0 = var_e8;
                let mut rax_5: i8;
                let mut rdx_3: i64;
                rax_5 = fd::filter::size::SizeFilter::parse_opt::_$u7b$$u7b$closure$u7d$$u7d$::hf414036a3a312337(&var_f0);
                
                if (rax_5 & 1) != 0
                {
                    regex_automata::util::captures::Captures::get_group::h768b37319d65c9e8(&var_48, 
                        &var_98, 3);
                    let mut rax_6: i64;
                    
                    if var_48 != 1
                    {
                        rax_6 = 0;
                    }
                    else
                    {
                        rax_6 = *var_c0[8];
                        let var_e8_2: i64 = var_b0;
                        var_e0 = var_40;
                    }
                    
                    var_f0 = rax_6;
                    let mut rax_7: *mut c_void;
                    let mut rdx_4: *mut c_void;
                    rax_7 = core::option::Option$LT$T$GT$::map_or::h3de0dd5b83b14239(&var_f0);
                    let mut var_60: ();
                    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::hb778be1bb3f3f772(&var_60, 
                        rax_7, rdx_4);
                    let var_58: i64;
                    let var_50: u64;
                    
                    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf20ef8fd404ea81d(
                        var_58, var_50, "kimigitibsrc/filter/size.rs/home…", 2) != 0
                    {
                        'label_5f48ef:
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6194a405d9e61c9b(
                            &var_60);
                        let mut result: i64 = 1;
                        
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2df04f0e3577ee6d(rax_3, rdx_2, &data_477ab4[2], 1) == 0
                        {
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2df04f0e3577ee6d(rax_3, rdx_2, &data_477ab4[3], 1) == 0
                            {
                                result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2df04f0e3577ee6d(rax_3, rdx_2, 1, 0) ^ 3;
                            }
                            else
                            {
                                result = 0;
                            }
                        }
                        
                        core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::hfe1307a37cb3fc3a(&var_a8);
                        return result;
                    }
                    
                    var_f0 = 0;
                    let mut rax_9: *mut i8;
                    let mut rdx_5: u64;
                    rax_9 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x6b, &var_f0);
                    
                    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf20ef8fd404ea81d(
                        var_58, var_50, rax_9, rdx_5) != 0
                    {
                        goto 'label_5f48ef;
                    }
                    
                    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf20ef8fd404ea81d(
                        var_58, var_50, "migitibsrc/filter/size.rs/home/3…", 2) != 0
                    {
                        goto 'label_5f48ef;
                    }
                    
                    var_f0 = 0;
                    let mut rax_12: *mut i8;
                    let mut rdx_7: u64;
                    rax_12 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x6d, &var_f0);
                    
                    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf20ef8fd404ea81d(
                        var_58, var_50, rax_12, rdx_7) != 0
                    {
                        goto 'label_5f48ef;
                    }
                    
                    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf20ef8fd404ea81d(
                        var_58, var_50, "gitibsrc/filter/size.rs/home/34r…", 2) != 0
                    {
                        goto 'label_5f48ef;
                    }
                    
                    var_f0 = 0;
                    let mut rax_15: *mut i8;
                    let mut rdx_9: u64;
                    rax_15 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x67, &var_f0);
                    
                    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf20ef8fd404ea81d(
                        var_58, var_50, rax_15, rdx_9) != 0
                    {
                        goto 'label_5f48ef;
                    }
                    
                    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf20ef8fd404ea81d(
                        var_58, var_50, "tibsrc/filter/size.rs/home/34r7h…", 2) != 0
                    {
                        goto 'label_5f48ef;
                    }
                    
                    var_f0 = 0;
                    let mut rax_18: *mut i8;
                    let mut rdx_11: u64;
                    rax_18 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x74, &var_f0);
                    
                    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf20ef8fd404ea81d(
                        var_58, var_50, rax_18, rdx_11) != 0
                    {
                        goto 'label_5f48ef;
                    }
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2df04f0e3577ee6d(var_58, var_50, "bsrc/filter/size.rs/home/34r7hm4…", 1) != 0
                    {
                        goto 'label_5f48ef;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6194a405d9e61c9b(
                        &var_60);
                }
            }
            
            core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::hfe1307a37cb3fc3a(
                &var_a8);
        }
    }
    
    3
}
