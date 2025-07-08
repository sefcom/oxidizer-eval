
  fn uu_cp::copydir::copy_direntry::he742c4f146ad7097(arg1: *mut i64, arg2: *mut i64, arg3: *mut i128, arg4: *mut i64, arg5: *mut i64, arg6: i8, arg7: *mut i64, arg8: *mut i64) -> i64

{
    let rsi: u64 = arg3[1];
    let mut var_1f8: i128 = *arg3;
    let var_158: i64 = *arg3.byte_offset(0x28);
    let mut var_168: i128 = *arg3.byte_offset(0x18);
    let rax_1: u64 = arg3[4];
    let mut var_1d8: i128 = arg3[3];
    let r13: i8 = *arg3.byte_offset(0x48);
    let rax_2: i8 = std::path::Path::is_symlink::h6ab8b58756c51c6b(*var_1f8[8], rsi);
    let rsi_1: *mut i8 = *var_1f8[8];
    
    if (rax_2 & *arg4.byte_offset(0x41) == 0) == 0
    {
        if std::path::Path::is_dir::h9ac0db933706da51(rsi_1, rsi) == 0
        {
            goto 'label_50e15b;
        }
        
        if uu_cp::copydir::ends_with_slash_dot::h7ca260d86f8cd653(&var_1f8) != 0
        {
            goto 'label_50e15b;
        }
        
        let mut var_f8: *mut c_void;
        std::fs::metadata::h003d8cdbffde7c56(&var_f8, *var_1d8[8]);
        let rdi_7: *mut c_void = var_f8;
        let mut var_f0: i64;
        let rsi_4: i64 = var_f0;
        let mut var_1a8: *mut i32;
        let mut var_148: i32;
        let mut var_d8: i64;
        let var_d0: i128;
        let mut rax_15: *mut c_void;
        let mut zmm0_1: i128;
        let mut zmm0_3: i128;
        let mut zmm1_3: i128;
        let mut zmm2_3: i128;
        
        if rdi_7 != 2
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(rdi_7, rsi_4);
            'label_50e15b:
            
            if std::path::Path::is_dir::h9ac0db933706da51(*var_1f8[8], rsi) != 0
            {
                goto 'label_50e165;
            }
            
            let mut var_138: i128;
            let mut var_128: i128;
            
            if arg6 == 0
            {
                uu_cp::copy_file::h3a721c0b700148ba(&var_f8, arg2, *var_1f8[8], rsi, *var_1d8[8], 
                    rax_1, arg4, arg5, arg7, arg8, 0);
                let rax_9: *mut c_void = var_f8;
                
                if rax_9 != 3
                {
                    if rax_9 == 0xd
                    {
                        goto 'label_50e165;
                    }
                    
                    goto 'label_50e459;
                }
                
                if std::io::error::Error::kind::hb2ff5fa058639b3d(var_d8) != 1
                {
                    goto 'label_50e459;
                }
                
                let rax_11: i8 = std::io::error::Error::kind::hb2ff5fa058639b3d(var_d8);
                zmm0_1 = var_168;
                var_1a8 = 1;
                let mut var_1a0_1: i128 = zmm0_1;
                let mut var_190_1: i8 = 1;
                let mut var_108: *mut *mut i32 = &var_1a8;
                let var_100_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_148 = &data_5b62e0;
                let var_140_1: i64 = 2;
                var_128 = 0;
                var_138 = &var_108;
                *var_138[8] = 1;
                let mut var_48: ();
                core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_48, &var_148);
                let mut var_1b8: *mut i128 =
                    uucore::mods::error::UIoError::new::h583c767c36d4d604(rax_11, &var_48);
                let var_1b0_1: *mut *mut c_void = &data_5b6f50;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                let mut rax_13: *mut *mut i32;
                let mut rdx_4: i64;
                rax_13 = uucore::util_name::h60d842bf27b05e82();
                var_108 = rax_13;
                let var_100_2: i64 = rdx_4;
                var_1a8 = &var_108;
                var_1a0_1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                *var_1a0_1[8] = &var_1b8;
                var_190_1 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hecbc8f9382c41ff5;
                var_148 = &data_5b6300;
                let var_140_2: i64 = 3;
                var_128 = 0;
                var_138 = &var_1a8;
                *var_138[8] = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_148);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hd3f979be012334ba(var_1b8, var_1b0_1);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h414e413090760199(var_d8);
                let rax_14: *mut c_void = var_f8;
                
                if rax_14 == 3
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(
                        &var_f0);
                }
                else if rax_14 != 0xd
                {
                    core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&var_f8);
                }
                
                goto 'label_50e165;
            }
            
            uu_cp::copy_file::h3a721c0b700148ba(&var_148, arg2, *var_1f8[8], rsi, *var_1d8[8], 
                rax_1, arg4, arg5, arg7, arg8, 0);
            
            if var_148 == 0xd
            {
                goto 'label_50e165;
            }
            
            var_d8 = var_128;
            var_f8 = var_148;
            
            if std::path::Path::is_symlink::h6ab8b58756c51c6b(*var_1f8[8], rsi) == 0
            {
                rax_15 = var_f8;
                var_1a8 = var_f0;
                
                if rax_15 == 0xd
                {
                    goto 'label_50e165;
                }
                
                let var_118: i128;
                arg1[7] = *var_118[8];
                zmm0_3 = var_1a8;
                zmm1_3 = var_138;
                zmm2_3 = var_d0;
                goto 'label_50e5f7;
            }
            
            core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&var_f8);
            'label_50e165:
            *arg1 = 0xd;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_1d8);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_168);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(2, rsi_4);
            let mut var_e8: i128;
            let var_c8: i128;
            
            if r13 == 0
            {
                uu_cp::copydir::build_dir::h8f7105fdecd19cc9(&var_f8, arg4[6], 
                    *arg4.byte_offset(0x32), &var_1d8);
                rax_15 = var_f8;
                
                if rax_15 != 0xd
                {
                    arg1[7] = *var_c8[8];
                    zmm0_3 = var_f0;
                    zmm1_3 = var_e8;
                    zmm2_3 = var_d0;
                    'label_50e5f7:
                    *arg1.byte_offset(0x28) = zmm2_3;
                    *arg1.byte_offset(0x18) = zmm1_3;
                    *arg1.byte_offset(8) = zmm0_3;
                    *arg1 = rax_15;
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_1d8);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_168);
                }
                else
                {
                    if arg4[9] != 0
                    {
                        uu_cp::context_for::h98549e35fded8509(&var_148);
                        var_1a8 = &var_148;
                        let mut var_1a0: i128;
                        var_1a0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        var_f8 = &data_5b62c0;
                        var_f0 = 2;
                        let var_d8_1: i64 = 0;
                        var_e8 = &var_1a8;
                        *var_e8[8] = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&var_f8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(
                            &var_148);
                    }
                    
                    *arg1 = 0xd;
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_1d8);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_168);
                }
            }
            else
            {
                _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h3a818a2f4f98d944(&var_f8, "cannot overwrite non-directory w…", 0x2d);
                'label_50e459:
                zmm0_1 = var_f8;
                *arg1.byte_offset(0x30) = var_c8;
                *arg1.byte_offset(0x20) = var_d8;
                *arg1.byte_offset(0x10) = var_e8;
                *arg1 = zmm0_1;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_1d8);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_168);
            }
        }
    }
    else
    {
        uu_cp::copy_link::h3110b816ad64228e(arg1, rsi_1, rsi, *var_1d8[8], rax_1, arg5);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_1d8);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_168);
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_1f8)
}
