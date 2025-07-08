
  fn uu_ls::display_item_name::h2be516ffa591d327(arg1: *mut i128, arg2: *mut c_void, arg3: *mut c_void, arg4: i64, arg5: i64, arg6: *mut i128, arg7: *mut c_void, arg8: *mut i64, arg9: *mut c_void) -> *mut i64

{
    let var_260: i64 = arg5;
    let mut var_2f8: i128;
    let mut rax: i32;
    let mut rcx_1: i32;
    rax = uucore::features::quoting_style::escape_name::ha9b5831150e16363(&var_2f8, 
        *arg2.byte_offset(8), *arg2.byte_offset(0x10), arg3.byte_offset(0xf5));
    let var_2f0: i64;
    let mut result: *mut i64;
    let mut var_168: i128;
    let mut result_3: *mut i64;
    
    if *arg3.byte_offset(0xef) != 0
    {
        rax = 1;
        let var_2fc_1: i32 = rax;
        uu_ls::create_hyperlink::h72b30fed8b305b42(&var_168, var_2f0, result, arg2);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_2f8);
        result = result_3;
        var_2f8 = var_168;
    }
    
    if *arg8.byte_offset(0x1d) != 2
    {
        let mut rax_2: u64 = *arg3.byte_offset(0xe4);
        rcx_1 = rax_2 != 0;
        rax_2 = arg9.byte_offset(result) > rax_2;
        rax_2 &= rcx_1;
        rcx_1 = 1;
        let var_2fc_2: i32 = rcx_1;
        let var_310_1: u64 = rax_2;
        uu_ls::colors::color_name::hd87a58ac50dac0ef(&var_168, var_2f0, result, arg2, arg8, arg7, 
            0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_2f8);
        result = result_3;
        var_2f8 = var_168;
    }
    
    let mut r15: i8 = *arg3.byte_offset(0xf8);
    let mut rax_4: *mut i64;
    rax_4 = r15 != 1;
    let mut rbx: i64;
    rbx = arg6[1] != 0;
    let mut rcx_4: *mut i128;
    rcx_4 = 1;
    rbx &= rax_4;
    let mut var_248: i128;
    let result_1: *mut i64;
    
    if rbx != 0
    {
        result_3 = arg6[1];
        var_168 = *arg6;
        let var_2fc_3: i32 = 0;
        _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&var_248, &var_168, var_2f0, result);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_2f8);
        result = result_1;
        var_2f8 = var_248;
        rcx_4 = nullptr;
    }
    
    let var_2fc_4: i32 = rcx_4;
    let r14: u32 = *arg3.byte_offset(0xf4);
    
    if r14 != 0
    {
        let rax_7: i32 = uu_ls::classify_file::h531def787e741feb(arg2);
        
        if r14 == 3
        {
            'label_52c2e7:
            
            if rax_7 != 0x110000
            {
                alloc::string::String::push::h859ae11851fd8b8e(&var_2f8, rax_7);
            }
        }
        else if r14 != 2
        {
            if rax_7 == 0x2f
            {
                alloc::string::String::push::h859ae11851fd8b8e(&var_2f8, rax_7);
            }
        }
        else if rax_7 != 0x2a
        {
            goto 'label_52c2e7;
        }
    }
    
    let mut var_2e0: *mut i64;
    
    if r15 == 1 && uu_ls::PathData::file_type::h128ed7d98b354477(arg2) != 0
    {
        let rax_9: *mut c_void = uu_ls::PathData::file_type::h128ed7d98b354477(arg2);
        
        if rax_9 == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        if (0xf000 & *rax_9) == 0xa000 && *arg2.byte_offset(0x128) == 0
        {
            *arg2.byte_offset(0x28);
            let mut var_198: i64;
            std::fs::read_link::hbe5657d82156963a(&var_198, *arg2.byte_offset(0x20));
            let mut var_278: i64;
            
            if var_198 != -0x8000000000000000
            {
                let mut var_2b8: i128 = var_198;
                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&var_2f8, 
                    " -> '\'' to \x1b[2mwhenzeroAnsi …", 4);
                let var_188: size_t;
                
                if *arg8.byte_offset(0x1d) != 2
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&var_168, &var_2b8);
                    let mut result_4: *mut i64 = result_3;
                    let mut var_298_1: i128 = var_168;
                    
                    if std::path::Path::is_absolute::h3431a23d91045560(*var_2b8[8], var_188) == 0
                    {
                        let mut rax_17: *mut i8;
                        let mut rdx_9: size_t;
                        rax_17 = std::path::Path::parent::h65c9a340a6266f2d(
                            *arg2.byte_offset(0x20), *arg2.byte_offset(0x28));
                        
                        if rax_17 != 0
                        {
                            let result_7: *mut i64 = result_4;
                            var_168 = var_298_1;
                            std::path::Path::join::hd038e45245e60e36(&var_248, rax_17, rdx_9, 
                                &var_168);
                            var_298_1 = var_248;
                            result_4 = result_1;
                        }
                    }
                    
                    let result_6: *mut i64 = result_4;
                    var_278 = var_298_1;
                    var_248 = 0;
                    var_2e0 = -0x8000000000000000;
                    let mut r12_1: *mut i8;
                    rbx = uu_ls::PathData::new::ha3e1f49dfc1f89b1(&var_168, &var_278, &var_248, 
                        &var_2e0, *arg3.byte_offset(0xeb), *arg3.byte_offset(0xf2), 0);
                    
                    if uu_ls::PathData::get_metadata::hc7a96a0547653f90(arg2) != 0
                    {
                        goto 'label_52c72e;
                    }
                    
                    let var_148: i64;
                    let var_140: i64;
                    let var_40: i8;
                    uu_ls::get_metadata_with_deref_opt::h471baa3ff4b7ae17(&var_248, var_148, 
                        var_140, var_40);
                    let var_2d8: i64;
                    let var_2d0: size_t;
                    
                    if var_248 != 2
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&var_248);
                        'label_52c72e:
                        uucore::features::quoting_style::escape_name::ha9b5831150e16363(&var_248, 
                            *var_2b8[8], var_188, r12_1);
                        let mut rax_22: u64 = *arg3.byte_offset(0xe4);
                        let rcx_14: bool = rax_22 != 0;
                        rax_22 = arg9.byte_offset(result) > rax_22;
                        rax_22 &= rcx_14;
                        let var_310_2: u64 = rax_22;
                        uu_ls::colors::color_name::hd87a58ac50dac0ef(&var_2e0, *var_248[8], 
                            result_1, arg2, arg8, arg7, &var_168);
                        let mut rax_24: i64;
                        let mut rdx_17: u64;
                        rax_24 = core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(
                            var_2d8, var_2d0 + var_2d8);
                        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&var_2f8, 
                            rax_24, rdx_17);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(
                            &var_2e0);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(
                            &var_248);
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&var_248);
                        *arg2.byte_offset(0x28);
                        std::fs::read_link::hbe5657d82156963a(&var_248, *arg2.byte_offset(0x20));
                        core::result::Result$LT$T$C$E$GT$::unwrap::h25f855f03e13c7a6(&var_2e0, 
                            &var_248);
                        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(
                            &var_248, var_2d8, var_2d0);
                        let rdi_31: i64 = *var_248[8];
                        let mut rax_21: i64;
                        let mut rdx_14: u64;
                        rax_21 = core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(
                            rdi_31, result_1.byte_offset(rdi_31));
                        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&var_2f8, 
                            rax_21, rdx_14);
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h950c753f5d689b41(&var_248);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h585d8b757a674aea(
                            &var_2e0);
                    }
                    core::ptr::drop_in_place$LT$uu_ls..PathData$GT$::h882b87545de6c6bd(&var_168);
                }
                else
                {
                    uucore::features::quoting_style::escape_name::ha9b5831150e16363(&var_168, 
                        *var_2b8[8], var_188, arg3.byte_offset(0xf5));
                    let rdi_17: i64 = *var_168[8];
                    let mut rax_14: i64;
                    let mut rdx_8: u64;
                    rax_14 = core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(
                        rdi_17, result_3.byte_offset(rdi_17));
                    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&var_2f8, 
                        rax_14, rdx_8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(
                        &var_168);
                }
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h585d8b757a674aea(&var_2b8);
            }
            else
            {
                let var_190: *mut i64;
                var_2e0 = var_190;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&var_248, arg2.byte_offset(0x18));
                let result_5: *mut i64 = result_1;
                result_3 = var_248;
                *var_168[8] = var_190;
                var_168 = 2;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                let mut rax_11: i64;
                let mut rdx_5: i64;
                rax_11 = uucore::util_name::h60d842bf27b05e82();
                var_278 = rax_11;
                let var_270_1: i64 = rdx_5;
                var_2e0 = &var_278;
                let var_2d8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                let var_2d0_1: *mut i128 = &var_168;
                let var_2c8_1: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 =
                    _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
                var_248 = &data_612588;
                *var_248[8] = 3;
                let var_228_1: i64 = 0;
                let var_238: *mut *mut i64 = &var_2e0;
                let var_230_1: i64 = 2;
                let mut rdx_6: i64;
                let mut rsi_12: i64;
                rdx_6 = std::io::stdio::_eprint::hcdfeec148c7134f7(&var_248);
                core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(&var_168, rsi_12, 
                    rdx_6);
            }
        }
    }
    
    if arg4 == 1 && *arg3.byte_offset(0xeb) != 0
    {
        if r15 != 4
        {
            *arg2.byte_offset(0x40);
            uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_2e0, *arg2.byte_offset(0x38));
        }
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
                &var_2e0, arg2.byte_offset(0x30));
        }
        
        var_248 = &var_2e0;
        *var_248[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        let var_238_1: *mut i128 = &var_2f8;
        let var_230_2: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_168 = &data_6125e8;
        *var_168[8] = 2;
        let var_148_1: i64 = 0;
        let var_158: *mut i128 = &var_248;
        let var_150_1: i64 = 2;
        let mut var_180: i128;
        core::option::Option$LT$T$GT$::map_or_else::h7fca96e7ce97ddb7(&var_180, &var_168);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_2f8);
        let result_2: *mut i64;
        result = result_2;
        var_2f8 = var_180;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_2e0);
    }
    
    arg1[1] = result;
    *arg1 = var_2f8;
    
    if rbx != 0
    {
        return result;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(arg6)
}
