
  fn uu_csplit::patterns::extract_patterns::h32f79fa60a6aa1ab(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_1b8: i64;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb046a74d6073176(&var_1b8, arg3, 0);
    let var_1b0: i64;
    
    if var_1b8 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_1b0);
        /* no return */
    }
    
    let mut var_1a8: i64;
    let rax: i64 = var_1a8;
    let mut var_148: i64 = var_1b0;
    let var_140: i64 = rax;
    let var_138: i64 = 0;
    regex::regex::string::Regex::new::h2b022f3b326b0361(&var_1b8, 
        "^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)…");
    let mut var_70: ();
    core::result::Result$LT$T$C$E$GT$::unwrap::hf27699ee494e2119(&var_70, &var_1b8);
    let mut rax_1: i32;
    rax_1 = 1;
    let var_1fc: i32 = rax_1;
    regex::regex::string::Regex::new::h2b022f3b326b0361(&var_1b8, 
        "^\{(?P<TIMES>\d+)|\*\}$/home/34r…");
    let mut var_50: ();
    core::result::Result$LT$T$C$E$GT$::unwrap::hf27699ee494e2119(&var_50, &var_1b8);
    let mut var_120: i64 = arg2;
    let var_118: i64 = arg2 + arg3 * 0x18;
    let mut rax_4: i64 = 0;
    
    loop
    {
        let var_128: *mut c_void;
        let mut rbx_1: *mut c_void = var_128;
        let mut var_130: i64 = 0;
        
        if rax_4 == 0
        {
            rbx_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc8bea844643f0ff(&var_120);
        }
        
        if rbx_1 == 0
        {
            break;
        }
        
        let rax_9: *mut c_void = *
            core::option::Option$LT$T$GT$::get_or_insert_with::hb73444b718c0212e(&var_130, 
            &var_120);
        let mut var_210_1: i64;
        let mut var_208_1: i64;
        let mut var_1f8: i64;
        let mut var_1f0: *mut c_void;
        let var_1e8: *mut c_void;
        let mut var_f0: i32;
        let var_e0: i128;
        let var_d0: i128;
        let var_c0: i128;
        let var_b0: *mut c_void;
        
        if rax_9 == 0
        {
            var_208_1 = 1;
            var_210_1 = 1;
        }
        else
        {
            regex::regex::string::Regex::captures_at::h3dfa64f8a9d1e89b(&var_f0, &var_50, 
                *rax_9.byte_offset(8), *rax_9.byte_offset(0x10));
            var_208_1 = 1;
            var_210_1 = 1;
            
            if var_f0 != 2
            {
                let var_198_1: i128 = var_d0;
                var_1a8 = var_e0;
                var_1b8 = var_f0;
                let cond:2_1: bool = var_130 != 0;
                var_130 = 0;
                
                if !cond:2_1
                {
                    _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc8bea844643f0ff(&var_120);
                }
                
                regex_automata::util::captures::Captures::get_group_by_name::hae7742685345d0b9(
                    &var_1f8, &var_1a8);
                let mut rax_14: i64;
                
                if var_1f8 == 0
                {
                    rax_14 = 0;
                }
                else
                {
                    let r15_1: *mut i8 = *var_c0[8];
                    let mut rax_11: *mut c_void;
                    let mut rdx_7: i64;
                    rax_11 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(var_1f0, var_1e8, r15_1, var_b0);
                    
                    if rax_11 == 0
                    {
                        core::str::slice_error_fail::h5dbb61534404fe7e(r15_1, var_b0, var_1f0, 
                            var_1e8);
                        /* no return */
                    }
                    
                    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_1f8, rax_11, rdx_7);
                    var_208_1 =
                        core::result::Result$LT$T$C$E$GT$::unwrap::hb1af2e219d173322(&var_1f8) + 1;
                    rax_14 = 1;
                }
                
                var_210_1 = rax_14;
                core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(
                    &var_1b8);
            }
        }
        
        let r14_2: *mut i8 = *rbx_1.byte_offset(8);
        let r15_2: u64 = *rbx_1.byte_offset(0x10);
        regex::regex::string::Regex::captures_at::h3dfa64f8a9d1e89b(&var_f0, &var_70, r14_2, r15_2);
        
        if var_f0 != 2
        {
            let var_198_2: i128 = var_d0;
            var_1a8 = var_e0;
            var_1b8 = var_f0;
            regex_automata::util::captures::Captures::get_group_by_name::hae7742685345d0b9(
                &var_1f8, &var_1a8);
            let mut r12_2: i32;
            let mut r14_3: *mut i8;
            
            if var_1f8 == 0
            {
                r12_2 = 0;
            }
            else
            {
                r14_3 = *var_c0[8];
                let mut rax_19: *mut c_void;
                let mut rdx_12: i64;
                rax_19 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(var_1f0, var_1e8, r14_3, var_b0);
                
                if rax_19 == 0
                {
                    core::str::slice_error_fail::h5dbb61534404fe7e(r14_3, var_b0, var_1f0, var_1e8);
                    /* no return */
                }
                
                r12_2 = core::result::Result$LT$T$C$E$GT$::unwrap::hc26668503662d753(core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i32$GT$::from_str::h5b8351ce1d7a5cac(rax_19, 
                    rdx_12));
            }
            
            regex_automata::util::captures::Captures::get_group_by_name::hae7742685345d0b9(
                &var_1f8, &var_1a8);
            let mut var_1e0: i128;
            let mut var_168_1: i128;
            let mut var_158_1: i128;
            let mut var_110: i64;
            let var_108: i128;
            let var_100: i128;
            let mut var_88: i128;
            let mut rax_24: i64;
            
            if var_1f8 == 0
            {
                regex_automata::util::captures::Captures::get_group_by_name::hae7742685345d0b9(
                    &var_1f8, &var_1a8);
                
                if var_1f8 == 0
                {
                    core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(&var_1b8);
                }
                else
                {
                    r14_3 = *var_c0[8];
                    let rax_25: *mut c_void = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(var_1f0, var_1e8, r14_3, var_b0);
                    
                    if rax_25 == 0
                    {
                        core::str::slice_error_fail::h5dbb61534404fe7e(r14_3, var_b0, var_1f0, 
                            var_1e8);
                        /* no return */
                    }
                    
                    regex::regex::string::Regex::new::h2b022f3b326b0361(&var_110, rax_25);
                    
                    if var_110 == 0
                    {
                        let var_78_2: i64 = *var_100[8];
                        var_88 = var_108;
                        uu_csplit::patterns::extract_patterns::_$u7b$$u7b$closure$u7d$$u7d$::h10799cc375fc8eea(&var_1f8, rbx_1, &var_88);
                        rax_24 = var_1f8;
                        var_168_1 = var_1f0;
                        var_158_1 = var_1e0;
                        
                        if rax_24 != 0xc
                        {
                            goto 'label_5b4dec;
                        }
                    }
                    else
                    {
                        var_158_1 = var_100;
                        var_168_1 = var_110;
                    }
                    
                    let var_98_2: i128 = var_158_1;
                    let var_a8_2: i128 = var_168_1;
                    var_1e0 = var_158_1;
                    var_1f0 = var_168_1;
                    *var_1f8[4] = r12_2;
                    let var_1d0_2: i64 = var_210_1;
                    let var_1c8_2: i64 = var_208_1;
                    var_1f8 = 2;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h5ddec6a458d87dc2(&var_148, &var_1f8);
                    core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(&var_1b8);
                }
            }
            else
            {
                r14_3 = *var_c0[8];
                let rax_22: *mut c_void = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(var_1f0, var_1e8, r14_3, var_b0);
                
                if rax_22 == 0
                {
                    core::str::slice_error_fail::h5dbb61534404fe7e(r14_3, var_b0, var_1f0, var_1e8);
                    /* no return */
                }
                
                regex::regex::string::Regex::new::h2b022f3b326b0361(&var_110, rax_22);
                
                if var_110 != 0
                {
                    var_158_1 = var_100;
                    var_168_1 = var_110;
                }
                else
                {
                    let var_78_1: i64 = *var_100[8];
                    var_88 = var_108;
                    uu_csplit::patterns::extract_patterns::_$u7b$$u7b$closure$u7d$$u7d$::he081b352c4f42a24(&var_1f8, rbx_1, &var_88);
                    rax_24 = var_1f8;
                    var_168_1 = var_1f0;
                    var_158_1 = var_1e0;
                    
                    if rax_24 != 0xc
                    {
                        'label_5b4dec:
                        let var_98_3: i128 = var_158_1;
                        let var_a8_3: i128 = var_168_1;
                        *arg1.byte_offset(0x18) = var_158_1;
                        *arg1.byte_offset(8) = var_168_1;
                        *arg1 = rax_24;
                        core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(&var_1b8);
                        'label_5b4e1e:
                        core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h15992d649913b2e2(&var_50);
                        core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h15992d649913b2e2(&var_70);
                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_csplit..patterns..Pattern$GT$$GT$::h3e87e3943a9612d3(&var_148);
                    }
                }
                
                let var_98_1: i128 = var_158_1;
                let var_a8_1: i128 = var_168_1;
                var_1e0 = var_158_1;
                var_1f0 = var_168_1;
                *var_1f8[4] = r12_2;
                let var_1d0_1: i64 = var_210_1;
                let var_1c8_1: i64 = var_208_1;
                var_1f8 = 1;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h5ddec6a458d87dc2(&var_148, &var_1f8);
                core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(
                    &var_1b8);
            }
        }
        else
        {
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_1f8, r14_2, r15_2);
            
            if var_1f8 != 0
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_1b8, rbx_1);
                arg1[3] = var_1a8;
                *arg1.byte_offset(8) = var_1b8;
                *arg1 = 7;
                
                if var_f0 != 2
                {
                    core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(&var_f0);
                }
                
                goto 'label_5b4e1e;
            }
            
            let var_1b0_1: *mut c_void = var_1f0;
            var_1a8 = var_210_1;
            let var_1a0_1: i64 = var_208_1;
            var_1b8 = 0;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h5ddec6a458d87dc2(&var_148, &var_1b8);
            
            if var_f0 != 2
            {
                core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(
                    &var_f0);
            }
        }
        
        rax_4 = var_130;
    }
    
    arg1[3] = var_138;
    *arg1.byte_offset(8) = var_148;
    *arg1 = 0xc;
    let var_1fc_1: i32 = 0;
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h15992d649913b2e2(&var_50);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h15992d649913b2e2(&var_70)
}
