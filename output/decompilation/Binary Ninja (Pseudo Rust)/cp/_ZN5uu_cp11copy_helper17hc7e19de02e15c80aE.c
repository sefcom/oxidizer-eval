
  fn uu_cp::copy_helper::hc7e19de02e15c80a(arg1: *mut i64, arg2: u64, arg3: u64, arg4: *mut i32, arg5: *mut i8, arg6: *mut i64, arg7: i64, arg8: i64, arg9: i8, arg10: i8, arg11: *mut i64) -> *mut c_void

{
    let mut result: *mut c_void;
    
    if *arg6.byte_offset(0x44) != 0
    {
        let mut rax_1: *mut i8;
        let mut rdx: *mut i8;
        rax_1 = std::path::Path::parent::h65c9a340a6266f2d(arg4, arg5);
        
        if rax_1 == 0
        {
            rax_1 = arg4;
        }
        
        result = std::fs::create_dir_all::h4110e3e76e14203b(rax_1);
    }
    
    if *arg6.byte_offset(0x44) == 0 || result == 0
    {
        let rax_2: i8 =
            uucore::features::fs::path_ends_with_terminator::h30fe62ab1cf88eee(arg4, arg5);
        let mut rax_3: i8;
        
        if rax_2 != 0
        {
            rax_3 = std::path::Path::is_dir::h9ac0db933706da51(arg4, arg5);
        }
        
        if rax_2 != 0 && rax_3 == 0
        {
            result = std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(
                &arg1[1], arg4, arg5);
            *arg1 = 0xc;
        }
        else
        {
            let mut var_b8: i128;
            let mut var_78: i128;
            let mut var_60: *mut i32;
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(arg2, arg3, "/dev/nullcannot create fifo : Fi…", 9) != 0
            {
                let mut var_40: i32;
                std::fs::File::create::h63900868be62ed17(&var_40, arg4);
                var_60 = arg4;
                let var_58_1: *mut i8 = arg5;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0383ffa9f5ca7973(
                    &var_78, &var_60);
                var_b8 = var_78;
                
                if var_40 == 0
                {
                    core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$std..fs..File$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h31ac547e1a80ac38(&var_b8);
                    let fd: i32;
                    result = core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd);
                    *arg1 = 0xd;
                }
                else
                {
                    let result_1: *mut c_void;
                    result = result_1;
                    let rcx: i64 = var_b8;
                    let fd_1: i32 = *var_b8[8];
                    let rdx_2: i64 = *var_b8[0xc];
                    
                    if rcx == -0x8000000000000000
                    {
                        result =
                            core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_1);
                        *arg1 = 0xd;
                    }
                    else
                    {
                        let var_68: i64;
                        *arg1.byte_offset(0x1c) = *var_68[4];
                        *arg1.byte_offset(0x14) = rdx_2;
                        *arg1 = 3;
                        arg1[1] = rcx;
                        arg1[2] = fd_1;
                        arg1[4] = result;
                    }
                }
            }
            else if arg10 != 0 && *arg6.byte_offset(0x46) != 0 && *arg6.byte_offset(0x3f) == 0
            {
                result = uu_cp::copy_fifo::h6a16af34214a700e(&var_b8, arg4, arg5, 
                    *arg6.byte_offset(0x3c), *arg6.byte_offset(0x47));
                
                if var_b8 != 0xd
                {
                    goto 'label_5083f5;
                }
                
                *arg1 = 0xd;
            }
            else
            {
                let var_9d: i128;
                let var_8d: i128;
                
                if arg9 == 0
                {
                    let mut rdx_10: *mut i64;
                    let mut rsi_11: *mut c_void;
                    let mut r8_3: i64;
                    let mut r9_2: *mut c_void;
                    let mut r10_2: i64;
                    let mut zmm0_3: i128;
                    let mut zmm1_2: i128;
                    let mut zmm2_2: i128;
                    rdx_10 = uu_cp::platform::linux::copy_on_write::h4f923509b4fe6a3f(&var_b8, 
                        arg2, arg3, arg4, arg5, *arg6.byte_offset(0x4b), *arg6.byte_offset(0x4a), 
                        arg7, arg8, arg10);
                    result = var_b8;
                    var_78 = *var_b8[8];
                    let rcx_5: u64 = *var_b8[0xa];
                    *var_78[2] = rcx_5;
                    
                    if result != 0xd
                    {
                        let var_80: i64;
                        arg1[7] = var_80;
                        zmm0_3 = var_b8;
                        *arg1.byte_offset(0x2b) = var_8d;
                        *arg1.byte_offset(0x1b) = var_9d;
                        *arg1.byte_offset(0xb) = zmm0_3;
                        *arg1.byte_offset(0xa) = *var_78[2];
                        arg1[1] = var_78;
                        *arg1 = result;
                    }
                    else
                    {
                        var_60 = var_78;
                        result = *var_78[2];
                        *var_60[2] = result;
                        
                        if *arg6.byte_offset(0x3e) == 0 && *arg6.byte_offset(0x47) != 0
                        {
                            result = uu_cp::show_debug::hb7db704407dbf64f(&var_60, rsi_11, rdx_10, 
                                rcx_5, r8_3, r9_2, zmm0_3, zmm1_2, zmm2_2, arg1, arg2, r10_2, arg4, 
                                arg3, arg6, arg5, var_b8);
                        }
                        
                        *arg1 = 0xd;
                    }
                }
                else
                {
                    result =
                        uu_cp::copy_link::h3110b816ad64228e(&var_b8, arg2, arg3, arg4, arg5, arg11);
                    
                    if var_b8 == 0xd
                    {
                        *arg1 = 0xd;
                    }
                    else
                    {
                        'label_5083f5:
                        let zmm0_2: i128 = var_b8;
                        *arg1.byte_offset(0x30) = var_8d;
                        *arg1.byte_offset(0x20) = var_9d;
                        let var_a8: i64;
                        *arg1.byte_offset(0x10) = var_a8;
                        *arg1 = zmm0_2;
                    }
                }
            }
        }
    }
    else
    {
        *arg1 = 2;
        arg1[1] = result;
    }
    
    result
}
