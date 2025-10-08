
  fn uu_nice::standardize_nice_args::ha446c24066e6006d(arg1: *mut i64, arg2: i64) -> i64

{
    let mut var_e8: i64 = arg2;
    let rdx: i64;
    let var_e0: i64 = rdx;
    let mut var_148: i64 = 0;
    let var_140: i64 = 8;
    let var_138: i64 = 0;
    let mut var_88: i64;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hefdd36b254aeecac(&var_88, &var_e8);
    let var_80: i64;
    
    if !(0 + -(var_88))
    {
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6e9c733220ffa76d(&var_148, &var_88);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h4905838a2dad291f(-0x8000000000000000, var_80);
    }
    let mut var_58: i128 = var_e8;
    let mut rbx_1: bool = false;
    let mut var_17c: i8 = 0;
    let mut var_178: i128;
    let mut var_168: u64;
    let mut var_128: i128;
    
    loop
    {
        let mut var_70: i64;
        _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hefdd36b254aeecac(&var_70, &var_58);
        let r13_1: i64 = var_70;
        
        if r13_1 == -0x8000000000000000
        {
            break;
        }
        
        let var_68: *mut i8;
        let var_60: u64;
        
        if (rbx_1 & 1) != 0
        {
            var_178 = r13_1;
            *var_178[8] = var_68;
            var_168 = var_60;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h6e9c733220ffa76d(&var_148, &var_178);
        }
        else if (var_17c & 1) == 0
        {
            core::str::converts::from_utf8::h8a6dc80f786921e0(&var_178, var_68, var_60);
            let mut var_108: i128;
            let mut zmm0_2: i128;
            
            if (var_178 & 1) != 0
            {
                'label_45215e:
                core::str::converts::from_utf8::h8a6dc80f786921e0(&var_178, var_68, var_60);
                
                if (var_178 & 1) == 0
                {
                    if uu_nice::is_prefix_of::h0ed73fde36564671(*var_178[8], var_168, 
                        "--adjustment: \nTry ' --help' fo…", 0xc, 3) == 0
                    {
                        goto 'label_4521ac;
                    }
                    
                    goto 'label_452193;
                }
                
                'label_4521ac:
                let mut var_48: ();
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7186c51e548866d5(&var_48, var_68, var_60);
                alloc::string::String::from_utf8::hcb4419710bc0e60b(&var_178, &var_48);
                
                if var_178 == -0x8000000000000000
                {
                    let var_160: u64;
                    let var_f8_1: u64 = var_160;
                    zmm0_2 = var_178;
                    var_108 = zmm0_2;
                    var_128 = zmm0_2;
                    var_128 = 0;
                    let rax_4: i64 = *var_128[8];
                    var_178 = 0;
                    let var_118: i64;
                    let mut rax_6: *mut i8;
                    let mut rdx_8: i64;
                    rax_6 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_178), 
                        var_118, var_160);
                    rbx_1 = rax_6 == 0;
                    
                    if rax_6 == 0
                    {
                        var_178 = rax_4;
                        *var_178[8] = var_118;
                        var_168 = var_160;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h6e9c733220ffa76d(&var_148, &var_178);
                    }
                    else
                    {
                        core::num::_$LT$impl$u20$i64$GT$::from_ascii_radix::h7589f30fc8392b2a(
                            &var_108, rax_6, rdx_8);
                        
                        if var_108 == 0
                        {
                            let r12_2: i64 = *var_108[8];
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h2a17592469341a2b(&var_178, "-n--adjustment: \nTry ' --help' …", 2);
                            let var_98_1: u64 = var_168;
                            let mut var_a8: i128 = var_178;
                            _$LT$i64$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h60b05a0cf10951a2(&var_178, r12_2);
                            std::ffi::os_str::OsString::push::hc6742ad3576a2e2e(&var_a8, &var_178);
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h6e9c733220ffa76d(&var_148, 
                                &var_a8);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb888ef563bfa785f(rax_4, var_118);
                        }
                        else
                        {
                            var_178 = rax_4;
                            *var_178[8] = var_118;
                            var_168 = var_160;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h6e9c733220ffa76d(&var_148, 
                                &var_178);
                        }
                    }
                    
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h8981e453b21a0f9c(
                        r13_1, var_68);
                    continue;
                }
            }
            else
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3a1b7041954c085a(*var_178[8], var_168, "-n--adjustment: \nTry ' --help' …", 2) == 0
                {
                    goto 'label_45215e;
                }
                
                'label_452193:
                var_17c = 1;
                rbx_1 = false;
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h8981e453b21a0f9c(
                    r13_1, var_68);
                continue;
            }
            
            let var_f8_2: u64 = var_168;
            zmm0_2 = var_178;
            var_108 = zmm0_2;
            let var_110_2: u64 = var_168;
            var_128 = zmm0_2;
            var_128 = 1;
            core::ptr::drop_in_place$LT$clap_builder..error..Message$GT$::h752086c676d8f225(
                &var_128);
            var_178 = r13_1;
            *var_178[8] = var_68;
            var_168 = var_60;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h6e9c733220ffa76d(&var_148, &var_178);
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h2a17592469341a2b(&var_178, "-n--adjustment: \nTry ' --help' …", 2);
            let var_b8_1: u64 = var_168;
            let mut var_c8: i128 = var_178;
            var_178 = r13_1;
            *var_178[8] = var_68;
            var_168 = var_60;
            std::ffi::os_str::OsString::push::hbb638c1a9a460a48(&var_c8, &var_178);
            rbx_1 = false;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h6e9c733220ffa76d(&var_148, &var_c8);
            var_17c = 0;
            continue;
        }
        rbx_1 = true;
    }
    
    if (var_17c & 1) != 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h2a17592469341a2b(&var_178, "-n--adjustment: \nTry ' --help' …", 2);
        let var_118_1: u64 = var_168;
        var_128 = var_178;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6e9c733220ffa76d(&var_148, &var_128);
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0d19ba00dc37477d(arg1, &var_148)
}
