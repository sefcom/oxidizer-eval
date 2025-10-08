
  fn uu_cp::copydir::copy_direntry::h5128c59f3878fb79(arg1: *mut i128, arg2: *mut *mut c_void, arg3: *mut i64, arg4: *mut c_void, arg5: *mut *mut i8, arg6: i8, arg7: *mut i64, arg8: *mut *mut i8) -> i64

{
    let var_1d8: i64 = arg3[5];
    let mut var_1e8: i128 = *arg3.byte_offset(0x18);
    let rax_1: u64 = arg3[8];
    let mut var_208: i128 = *arg3.byte_offset(0x30);
    let rbp: i8 = arg3[9];
    let r12: *mut i8 = arg3[1];
    let r15: u64 = arg3[2];
    let mut rdi_8: *mut i128;
    let mut r14_3: *mut i128;
    
    if std::path::Path::is_symlink::h004cfac91d04dbc0(r12, r15) == 0 || *arg4.byte_offset(0x59) != 0
    {
        let rax_3: i8 = std::path::Path::is_dir::h02edbc48c38d7d9e(r12, r15);
        let mut var_f8: *mut c_void;
        let mut r14_1: i32;
        
        if rax_3 != 0
        {
            let rsi_2: i64 = *var_208[8];
            let var_128_1: i64 = rsi_2;
            let var_130_1: u64 = rax_1;
            std::fs::metadata::h87a95e5fd9b91fc7(&var_f8, rsi_2);
            r14_1 = var_f8;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_f8);
        }
        
        let mut var_1a8: *mut i64;
        let mut var_168: i64;
        let mut var_f0: i128;
        let mut var_d8: i128;
        let mut rcx: *mut i128;
        let mut zmm0_1: i128;
        let mut zmm1_1: i128;
        let mut zmm2_1: i128;
        
        if rax_3 == 0 || r14_1 != 2
        {
            if std::path::Path::is_dir::h02edbc48c38d7d9e(r12, r15) != 0
            {
                goto 'label_499515;
            }
            
            uu_cp::copy_file::h2d5f479453081e34(&var_168, arg2, r12, r15, *var_208[8], rax_1, arg4, 
                arg5, arg7, arg8, 0);
            
            if var_168 != -0x7ffffffffffffff4
            {
                let var_138: i64;
                let var_c8_1: i64 = var_138;
                zmm0_1 = var_168;
                let var_148: i128;
                var_d8 = var_148;
                let var_158: i128;
                let var_e8_1: i128 = var_158;
                var_f8 = zmm0_1;
                
                if arg6 != 0
                {
                    if std::path::Path::is_symlink::h004cfac91d04dbc0(r12, r15) != 0
                    {
                        if var_f8 != -0x7ffffffffffffffe
                        {
                            core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h9ee7df58e7d9e41e(
                                &var_168);
                            goto 'label_499515;
                        }
                        
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb23d8f5d6ef8daac(
                            &var_d8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c03d16396ad1b8d(
                            &var_f0);
                        goto 'label_499515;
                    }
                }
                else if var_f8 == -0x7ffffffffffffffe
                {
                    let r14_2: i64 = var_d8;
                    
                    if std::io::error::Error::kind::h135fe00c4e7365f3(r14_2) == 1
                    {
                        let mut var_1b0: i64 = r14_2;
                        let rax_16: i8 = std::io::error::Error::kind::h135fe00c4e7365f3(r14_2);
                        zmm0_1 = var_1e8;
                        let mut var_118: *mut *mut i64 = 1;
                        let mut var_110_1: i128 = zmm0_1;
                        let mut var_100_1: i8 = 1;
                        let mut var_178: *mut i64 = &var_118;
                        let var_170_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_1a8 = &data_55e640;
                        let var_1a0_2: i64 = 2;
                        let var_188_1: i64 = 0;
                        let var_198_1: *mut *mut i64 = &var_178;
                        let var_190_1: i64 = 1;
                        let mut var_48: ();
                        core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_48, 
                            &var_1a8);
                        let mut var_1c8: u64 =
                            uucore::mods::error::UIoError::new::h7234677a8d8132fc(rax_16, &var_48);
                        let var_1c0_1: *mut *mut c_void = &data_55e348;
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                        let mut rax_18: *mut i64;
                        let mut rdx_4: i64;
                        rax_18 = uucore::util_name::h074417a1e6395129();
                        var_178 = rax_18;
                        let var_170_2: i64 = rdx_4;
                        var_118 = &var_178;
                        var_110_1 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haac06c1252b30d1d;
                        *var_110_1[8] = &var_1c8;
                        var_100_1 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf8a637a73ed45d5b;
                        var_1a8 = &data_55e660;
                        let var_1a0_3: i64 = 3;
                        let var_188_2: i64 = 0;
                        let var_198_2: *mut *mut *mut i64 = &var_118;
                        let var_190_2: i64 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_1a8);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h3fae8bb6fba1fa61(var_1c8, var_1c0_1);
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb23d8f5d6ef8daac(
                            &var_1b0);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c03d16396ad1b8d(
                            &var_f0);
                        goto 'label_499515;
                    }
                }
                
                rcx = arg1;
                rcx[3] = var_138;
                zmm0_1 = var_168;
                zmm1_1 = var_158;
                zmm2_1 = var_148;
                goto 'label_4998a3;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_cp..Error$GT$$GT$::h38297071204f1dde(&var_168);
            'label_499515:
            r14_3 = &arg3[3];
            rdi_8 = &arg3[6];
            *arg1 = -0x7ffffffffffffff4;
        }
        else
        {
            let mut var_e8: i128;
            
            if rbp == 0
            {
                uu_cp::copydir::build_dir::hcf48ec2566a6908d(&var_f8, &var_208, 0, 
                    *arg4.byte_offset(0x48), *arg4.byte_offset(0x4a), r12, r15);
                let rax_11: *mut c_void = var_f8;
                
                if rax_11 != -0x7ffffffffffffff4
                {
                    let zmm0_2: i128 = var_f0;
                    *arg1.byte_offset(0x28) = var_d8;
                    *arg1.byte_offset(0x18) = var_e8;
                    *arg1.byte_offset(8) = zmm0_2;
                    *arg1 = rax_11;
                }
                else
                {
                    if *arg4.byte_offset(0x60) != 0
                    {
                        uu_cp::context_for::h4d8c781d36af7105(&var_168);
                        var_1a8 = &var_168;
                        let var_1a0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_f8 = &data_55e620;
                        var_f0 = 2;
                        var_d8 = 0;
                        var_e8 = &var_1a8;
                        *var_e8[8] = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_f8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c03d16396ad1b8d(
                            &var_168);
                    }
                    
                    *arg1 = -0x7ffffffffffffff4;
                }
                
                r14_3 = &var_1e8;
                rdi_8 = &var_208;
            }
            else
            {
                _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h0e3b1f2b5d04343d(&var_f8, "cannot overwrite non-directory w…", 0x2d);
                rcx = arg1;
                let var_c8: i64;
                rcx[3] = var_c8;
                zmm0_1 = var_f8;
                zmm1_1 = var_e8;
                zmm2_1 = var_d8;
                'label_4998a3:
                rcx[2] = zmm2_1;
                rcx[1] = zmm1_1;
                *rcx = zmm0_1;
                r14_3 = &var_1e8;
                rdi_8 = &var_208;
            }
        }
    }
    else
    {
        uu_cp::copy_link::h25042d5280b1628e(arg1, r12, r15, *var_208[8], rax_1, arg5);
        r14_3 = &var_1e8;
        rdi_8 = &var_208;
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(rdi_8);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(r14_3);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(arg3)
}
