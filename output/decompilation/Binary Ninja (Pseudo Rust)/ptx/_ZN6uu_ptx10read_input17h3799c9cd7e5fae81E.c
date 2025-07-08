
  fn uu_ptx::read_input::h3799c9cd7e5fae81(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: *mut c_void) -> *mut i64

{
    let mut var_1d8: *mut c_void;
    std::thread::local::LocalKey$LT$T$GT$::try_with::h56169180d99f5faa(&var_1d8);
    let mut rax: i64;
    let mut rdx: i64;
    rax = core::result::Result$LT$T$C$E$GT$::expect::h52231f17148c3285(&var_1d8);
    let mut var_168: i128 = *data_6ed8f8;
    let zmm0: i128 = data_6ed908;
    let var_140: i64 = rdx;
    let mut var_198: i64 = 0;
    let var_190: i64 = 8;
    let var_188: i64 = 0;
    let mut var_1d0: *mut c_void;
    let mut result: *mut i64;
    
    if arg3 == 0
    {
        result = arg1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h21f7190cf2fce050(&var_198, 
            "-:assertion failed: beg <= endas…", 1);
    }
    else if *arg4.byte_offset(0x58) == 0
    {
        result = arg1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h21f7190cf2fce050(&var_198, *arg2.byte_offset(8), 
            *arg2.byte_offset(0x10));
    }
    else
    {
        var_1d8 = arg2;
        var_1d0 = arg2.byte_offset(arg3 * 0x18);
        result = arg1;
        
        loop
        {
            let rax_3: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2542eee79d3070c(&var_1d8);
            
            if rax_3 == 0
            {
                break;
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::h21f7190cf2fce050(&var_198, *rax_3.byte_offset(8), 
                *rax_3.byte_offset(0x10));
        }
    }
    
    let mut var_118: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hdb3cfba9de7d7f84(&var_118, &var_198);
    let mut rax_4: i64;
    let mut rdx_3: u64;
    rax_4 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf55ab871a8e5779f(&var_118);
    
    if rax_4 == 0
    {
        'label_5b69c0:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h736feeb61ffeaf15(&var_118);
        let zmm0_3: i128 = var_168;
        *result.byte_offset(0x20) = rax;
        *result.byte_offset(0x10) = zmm0;
        *result = zmm0_3;
    }
    else
    {
        let mut rbp_1: i64 = rax_4;
        let mut r14_1: u64 = rdx_3;
        let mut r13_1: i64 = 0;
        
        loop
        {
            let mut rax_6: *mut i64;
            let mut rcx: *mut c_void;
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he450917857c3e673(rbp_1, r14_1, "-:assertion failed: beg <= endas…", 1) == 0
            {
                std::fs::File::open::h478ac8dba32f1ae3(&var_1d8, rbp_1);
                
                if var_1d8 == 0
                {
                    rax_6 = alloc::boxed::Box$LT$T$GT$::new::h9f305fe194b67db1(*var_1d8[4]);
                    rcx = &data_6edcd8;
                    goto 'label_5b6879;
                }
                
                result[1] = var_1d0;
            }
            else
            {
                std::io::stdio::stdin::h7215cc131abb55d8();
                rax_6 = alloc::boxed::Box$LT$T$GT$::new::h0dfaa371efd7c18c(
                    &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
                rcx = &data_6edd30;
                'label_5b6879:
                let mut var_a0: i128;
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hd17c935e00db073b(
                    &var_a0, 0x2000, rax_6, rcx);
                let mut var_d8: i128 = var_a0;
                let var_90: i128;
                let var_c8_1: i128 = var_90;
                let var_80: i128;
                let var_b8_1: i128 = var_80;
                let var_70: i64;
                let var_a8_1: i64 = var_70;
                core::iter::adapters::try_process::he3ba2ce09273ab77(&var_1d8, &var_d8);
                let rax_8: *mut c_void = var_1d8;
                
                if rax_8 == -0x8000000000000000
                {
                    result[1] = var_1d0;
                }
                else
                {
                    let mut var_1c8: i64;
                    let r15_1: i64 = var_1c8;
                    let var_178_1: *mut c_void = var_1d0;
                    let mut var_130: i128;
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h8574ea4db7118a44(&var_130, var_1d0, var_1d0.byte_offset(r15_1 * 0x18));
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(
                        &var_1d8, rbp_1, r14_1);
                    let var_e8_1: i64 = var_1c8;
                    let mut var_f8: i128 = var_1d8;
                    var_1c8 = r15_1;
                    var_1d8 = rax_8;
                    let var_120: i64;
                    let var_1b0_1: i64 = var_120;
                    let var_1c0_1: i128 = var_130;
                    let var_1a8_1: i64 = r13_1;
                    let mut var_68: ();
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hc03c4a862eb36838(
                        &var_68, &var_168, &var_f8, &var_1d8);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_ptx..FileContent$GT$$GT$::h581f5f8adb3a9895(&var_68);
                    r13_1 += r15_1;
                    let mut rax_13: i64;
                    let mut rdx_9: u64;
                    rax_13 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf55ab871a8e5779f(&var_118);
                    rbp_1 = rax_13;
                    r14_1 = rdx_9;
                    result = arg1;
                    
                    if rax_13 == 0
                    {
                        goto 'label_5b69c0;
                    }
                    
                    continue;
                }
            }
            *result = 0;
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h736feeb61ffeaf15(&var_118);
            core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$uu_ptx..FileContent$GT$$GT$::h021de779c702ee73(&var_168);
            break;
        }
    }
    
    result
}
