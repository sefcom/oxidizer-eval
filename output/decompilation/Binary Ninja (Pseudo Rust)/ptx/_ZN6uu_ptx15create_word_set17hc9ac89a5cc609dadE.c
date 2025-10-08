
  fn uu_ptx::create_word_set::hc9ac89a5cc609dad(arg1: *mut i128, arg2: *mut c_void, arg3: *mut c_void, arg4: *mut i64) -> *mut i128

{
    let mut var_128: i64;
    regex::regex::string::Regex::new::h830f62d081924685(&var_128, *arg3.byte_offset(8));
    let mut var_90: ();
    core::result::Result$LT$T$C$E$GT$::unwrap::hcfdbcfab40fd90b7(&var_90, &var_128);
    regex::regex::string::Regex::new::h830f62d081924685(&var_128, *arg2.byte_offset(0x38));
    let mut var_b0: *mut c_void;
    core::result::Result$LT$T$C$E$GT$::unwrap::hcfdbcfab40fd90b7(&var_b0, &var_128);
    let mut var_1d0: i64 = 0;
    let var_1c0: i64 = 0;
    let mut var_58: ();
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h6703a1916f75360f(&var_58, arg4);
    let mut rax: *mut c_void;
    let mut rdx_2: *mut c_void;
    rax = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha5c58955d429264a(&var_58);
    let mut var_220: *mut c_void = rax;
    
    if rax != 0
    {
        let rax_1: i8 = *arg2.byte_offset(0x5a);
        let rax_2: i8 = *arg2.byte_offset(0x5c);
        let rax_3: i8 = *arg3.byte_offset(0x78);
        let rax_4: i8 = *arg3.byte_offset(0x79);
        
        loop
        {
            let rax_7: i64 = *rdx_2.byte_offset(0x10);
            
            if rax_7 != 0
            {
                let rcx: i64 = *rdx_2.byte_offset(0x30);
                let mut r14_1: *mut c_void = *rdx_2.byte_offset(8);
                let rax_9: *mut c_void = r14_1.byte_offset(rax_7 * 0x18);
                let mut rax_10: *mut c_void = r14_1.byte_offset(0x18);
                let mut var_228_1: i64 = 0;
                
                loop
                {
                    let var_a8: *mut c_void;
                    regex::regex::string::Regex::find_at::h85c38407f70a8d86(&var_128, var_b0, 
                        var_a8, *r14_1.byte_offset(8), *r14_1.byte_offset(0x10));
                    let rax_11: i64 = var_128;
                    let mut var_218_1: i64 = rax_11;
                    let mut var_210_1: i64 = rax_11;
                    let mut var_118: i128;
                    
                    if rax_11 != 0
                    {
                        var_210_1 = var_118;
                        var_218_1 = *var_118[8];
                    }
                    
                    let r15_1: i64 = *r14_1.byte_offset(8);
                    let r13_1: i64 = *r14_1.byte_offset(0x10);
                    let mut var_1b8: i128;
                    regex_automata::meta::regex::Regex::find_iter::hd357ef4be6b020eb(&var_1b8, 
                        &var_90, r15_1);
                    let var_168: i128;
                    let var_d8_1: i128 = var_168;
                    let mut var_178: i128;
                    let var_e8_1: i128 = var_178;
                    let zmm0_2: i128 = var_1b8;
                    let mut var_188: i128;
                    let var_f8_1: i128 = var_188;
                    let mut var_198: i128;
                    let mut var_108: i128 = var_198;
                    let mut var_1a8: i128;
                    var_118 = var_1a8;
                    var_128 = zmm0_2;
                    let var_c0_1: i64 = r15_1;
                    let var_b8_1: i64 = r13_1;
                    let mut rcx_6: *mut c_void;
                    
                    loop
                    {
                        let var_158: *mut i64;
                        regex_automata::util::iter::Searcher::advance::h485c3ae5de67fd8b(&var_1b8, 
                            &var_108, var_158, &var_128);
                        
                        if var_1b8 != 1
                        {
                            core::ptr::drop_in_place$LT$regex..regex..string..Matches$GT$::h69f3cac7d0754682(&var_128);
                            var_228_1 += 1;
                            rcx_6 = rax_10;
                            rax_10 = rcx_6.byte_offset(0x18);
                            r14_1 = rcx_6;
                            break;
                        }
                        
                        let r15_2: i64 = *var_1b8[8];
                        let r13_2: i64 = var_1a8;
                        
                        if (rax_1 & 1) != 0 && r15_2 == var_210_1 && r13_2 == var_218_1
                        {
                            continue;
                        }
                        
                        let r12_1: *mut i8 = *r14_1.byte_offset(8);
                        let rbp_2: i64 = *r14_1.byte_offset(0x10);
                        let mut rax_17: *mut c_void;
                        let mut rdx_7: u64;
                        rax_17 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r15_2, r13_2, r12_1, rbp_2);
                        
                        if rax_17 == 0
                        {
                            core::str::slice_error_fail::h1a2885084e28d077(r12_1, rbp_2, r15_2, 
                                r13_2);
                            /* no return */
                        }
                        
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he9e3a9b23988b07f(&var_1b8, rax_17, rdx_7);
                        let mut var_238_1: u64 = var_1a8;
                        let mut var_248: i128 = var_1b8;
                        let mut rax_19: i64;
                        
                        if (rax_3 & 1) != 0
                        {
                            rax_19 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hcc18adac9e94b896(arg3.byte_offset(0x18), &var_248);
                        }
                        
                        if (rax_3 & 1) != 0 && rax_19 == 0
                        {
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_248);
                            continue;
                        }
                        else if (rax_4 & 1) != 0 && hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hcc18adac9e94b896(arg3.byte_offset(0x48), &var_248) != 0
                        {
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_248);
                            continue;
                        }
                        
                        if (rax_2 & 1) != 0
                        {
                            alloc::str::_$LT$impl$u20$str$GT$::to_uppercase::hf8ab82a15f19393f(
                                &var_1b8, *var_248[8], var_238_1);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_248);
                            var_238_1 = var_1a8;
                            var_248 = var_1b8;
                        }
                        
                        let zmm0_3: i128 = var_248;
                        let mut var_70: i128;
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_70, var_220);
                        var_1a8 = var_238_1;
                        var_1b8 = zmm0_3;
                        var_188 = rcx + var_228_1;
                        *var_188[8] = var_228_1;
                        var_178 = r15_2;
                        *var_178[8] = r13_2;
                        let var_60: i64;
                        *var_198[8] = var_60;
                        var_1a8 = var_70;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h22c09da831677363(&var_1d0, &var_1b8);
                    }
                    
                    if rcx_6 == rax_9
                    {
                        rax_10 = rcx_6;
                    }
                    
                    if rcx_6 == rax_9
                    {
                        break;
                    }
                }
            }
            
            let mut rax_6: *mut c_void;
            rax_6 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha5c58955d429264a(&var_58);
            var_220 = rax_6;
            
            if rax_6 == 0
            {
                break;
            }
        }
    }
    
    arg1[1] = var_1c0;
    *arg1 = var_1d0;
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h1c6ec398caf69ee4(&var_b0);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h1c6ec398caf69ee4(&var_90);
    arg1
}
