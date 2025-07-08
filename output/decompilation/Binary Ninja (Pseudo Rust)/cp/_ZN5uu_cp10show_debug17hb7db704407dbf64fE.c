
  fn uu_cp::show_debug::hb7db704407dbf64f(arg1: *mut i8, arg2: *mut c_void, arg3: *mut i64, arg4: i64, arg5: i64, arg6: *mut c_void, arg7: i128 @ zmm0, arg8: i128 @ zmm1, arg9: i128 @ zmm2, arg10: u64 @ rbx, arg11: i64 @ rbp, arg12: i64 @ r10, arg13: *mut i32 @ r12, arg14: u64 @ r13, arg15: *mut i64 @ r14, arg16: *mut i8 @ r15, arg17: *mut i32) -> *mut c_void

{
    let mut var_98: *mut i64;
    let mut rsp_1: *mut i64 = &var_98;
    let mut var_90: *const i8;
    let mut result: *mut c_void;
    let mut rax_24: i64;
    let mut rdx_1: *mut i64;
    let mut r12_1: *mut c_void;
    let mut cond:0_1: bool;
    let mut cond:1_1: bool;
    let mut cond:4_1: bool;
    
    match *arg1
    {
        0 =>
        {
            var_90 = "unknownnoyesavoidedunsupportedze…";
            let var_88: i64 = 7;
            let mut c_1: bool;
            
            match arg1[1]
            {
                0 =>
                {
                    'label_4ff673:
                    let var_80_1: *const i8 = "unknownnoyesavoidedunsupportedze…";
                    let var_78_1: i64 = 7;
                    let rax_15: i64 = *(&jump_table_42bd0c).byte_offset(arg1[2] << 2);
                    result = rax_15 + &jump_table_42bd0c;
                    c_1 = rax_15 + &jump_table_42bd0c < rax_15;
                    
                    match result
                    {
                        0x4ff73e =>
                        {
                            'label_4ff745:
                            let var_70_1: *const i8 = "unknownnoyesavoidedunsupportedze…";
                            rax_24 = 7;
                            goto 'label_4ff7ae;
                        }
                        0x4ff751 =>
                        {
                            goto 'label_4ff758;
                        }
                        0x4ff764 =>
                        {
                            goto 'label_4ff76b;
                        }
                        0x4ff777 =>
                        {
                            'label_4ff77e:
                            let var_70_3: *mut c_void = "SEEK_HOLESEEK_HOLE + zerosowners…";
                            rax_24 = 9;
                            goto 'label_4ff7ae;
                        }
                        0x4ff78a =>
                        {
                            goto 'label_4ff791;
                        }
                        0x4ff79d =>
                        {
                            'label_4ff7a4:
                            let var_70_5: *const i8 = "unsupportedzerosSEEK_HOLESEEK_HO…";
                            rax_24 = 0xb;
                            goto 'label_4ff7ae;
                        }
                        0x5066e9 =>
                        {
                            'label_5066e9:
                            rsp_1 = var_98;
                            result &= 0x38;
                            goto 'label_5066ec;
                        }
                        0x50684d =>
                        {
                            'label_50684d:
                            cond:4_1 = result == 0;
                            'label_50684f:
                            
                            if !cond:4_1
                            {
                                *arg15 = 2;
                                arg15[1] = result;
                                result = core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&rsp_1[0x26]);
                                goto 'label_5070fe;
                            }
                            
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(
                                &rsp_1[0x26]);
                            arg14 = rsp_1[4];
                            arg16 = rsp_1[0x21];
                            r12_1 = rsp_1[3];
                            'label_506d8b:
                            let rax_46: i8 = _$LT$uu_cp..OverwriteMode$u20$as$u20$core..cmp..PartialEq$GT$::eq::hba025a570c73f0e5(*r12_1.byte_offset(0x3c), *r12_1.byte_offset(0x3d));
                            let mut rcx_14: u64 = arg10;
                            
                            if rax_46 != 0
                            {
                                result = std::fs::remove_file::h38159f05e7b4dc34(arg16);
                                rcx_14 = rsp_1[6];
                            }
                            
                            if rax_46 != 0 && result != 0
                            {
                                *arg15 = 2;
                                arg15[1] = result;
                                
                                if arg10 == arg11 && rcx_14 != arg11
                                {
                                    result = core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&rsp_1[6]);
                                }
                                
                                goto 'label_5070fe;
                            }
                            
                            if arg10 == arg11 && rcx_14 != arg11
                            {
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&rsp_1[6]);
                            }
                            
                            rdx_1 = rsp_1[2];
                        }
                        0x5068ab =>
                        {
                            goto 'label_5068b2;
                        }
                        0x5068f8 =>
                        {
                            'label_5068f8:
                            result += *result;
                            *arg10[1] *= 2;
                            *result[1] = 0x24;
                            *result += result;
                            goto 'label_506902;
                        }
                        0x5069d0 =>
                        {
                            'label_5069d0:
                            let var_20: i8;
                            let var_20_1: i8 = var_20 + arg3;
                            'label_5069d4:
                            *arg3.byte_offset(0x28) = arg9;
                            *arg3.byte_offset(0x18) = arg8;
                            *arg3.byte_offset(8) = arg7;
                            *arg3 = result;
                            goto 'label_5070fe;
                        }
                    }
                }
                1 =>
                {
                    'label_4ff71b:
                    let var_80_5: *const i8 = "noyesavoidedunsupportedzerosSEEK…";
                    let var_78_5: i64 = 2;
                    'label_4ff735:
                    let rax_23: i64 = *(&jump_table_42bd0c).byte_offset(arg1[2] << 2);
                    result = rax_23 + &jump_table_42bd0c;
                    c_1 = rax_23 + &jump_table_42bd0c < rax_23;
                    
                    match result
                    {
                        0x4ff73e =>
                        {
                            goto 'label_4ff745;
                        }
                        0x4ff751 =>
                        {
                            goto 'label_4ff758;
                        }
                        0x4ff764 =>
                        {
                            goto 'label_4ff76b;
                        }
                        0x4ff777 =>
                        {
                            goto 'label_4ff77e;
                        }
                        0x4ff78a =>
                        {
                            goto 'label_4ff791;
                        }
                        0x4ff79d =>
                        {
                            goto 'label_4ff7a4;
                        }
                        0x5066e9 =>
                        {
                            goto 'label_5066e9;
                        }
                        0x50684d =>
                        {
                            goto 'label_50684d;
                        }
                        0x5068ab =>
                        {
                            goto 'label_5068b2;
                        }
                        0x5068f8 =>
                        {
                            goto 'label_5068f8;
                        }
                        0x5069d0 =>
                        {
                            goto 'label_5069d0;
                        }
                    }
                }
                2 =>
                {
                    'label_4ff6c7:
                    let var_80_3: *const i8 = "yesavoidedunsupportedzerosSEEK_H…";
                    let var_78_3: i64 = 3;
                    let rax_19: i64 = *(&jump_table_42bd0c).byte_offset(arg1[2] << 2);
                    result = rax_19 + &jump_table_42bd0c;
                    c_1 = rax_19 + &jump_table_42bd0c < rax_19;
                    
                    match result
                    {
                        0x4ff73e =>
                        {
                            goto 'label_4ff745;
                        }
                        0x4ff751 =>
                        {
                            goto 'label_4ff758;
                        }
                        0x4ff764 =>
                        {
                            goto 'label_4ff76b;
                        }
                        0x4ff777 =>
                        {
                            goto 'label_4ff77e;
                        }
                        0x4ff78a =>
                        {
                            goto 'label_4ff791;
                        }
                        0x4ff79d =>
                        {
                            goto 'label_4ff7a4;
                        }
                        0x5066e9 =>
                        {
                            goto 'label_5066e9;
                        }
                        0x50684d =>
                        {
                            goto 'label_50684d;
                        }
                        0x5068ab =>
                        {
                            goto 'label_5068b2;
                        }
                        0x5068f8 =>
                        {
                            goto 'label_5068f8;
                        }
                        0x5069d0 =>
                        {
                            goto 'label_5069d0;
                        }
                    }
                }
                3 =>
                {
                    'label_4ff6f1:
                    let var_80_4: *const i8 = "avoidedunsupportedzerosSEEK_HOLE…";
                    let var_78_4: i64 = 7;
                    let rax_21: i64 = *(&jump_table_42bd0c).byte_offset(arg1[2] << 2);
                    result = rax_21 + &jump_table_42bd0c;
                    c_1 = rax_21 + &jump_table_42bd0c < rax_21;
                    
                    match result
                    {
                        0x4ff73e =>
                        {
                            goto 'label_4ff745;
                        }
                        0x4ff751 =>
                        {
                            goto 'label_4ff758;
                        }
                        0x4ff764 =>
                        {
                            goto 'label_4ff76b;
                        }
                        0x4ff777 =>
                        {
                            goto 'label_4ff77e;
                        }
                        0x4ff78a =>
                        {
                            goto 'label_4ff791;
                        }
                        0x4ff79d =>
                        {
                            goto 'label_4ff7a4;
                        }
                        0x5066e9 =>
                        {
                            goto 'label_5066e9;
                        }
                        0x50684d =>
                        {
                            goto 'label_50684d;
                        }
                        0x5068ab =>
                        {
                            goto 'label_5068b2;
                        }
                        0x5068f8 =>
                        {
                            goto 'label_5068f8;
                        }
                        0x5069d0 =>
                        {
                            goto 'label_5069d0;
                        }
                    }
                }
                4 =>
                {
                    'label_4ff69d:
                    let var_80_2: *const i8 = "unsupportedzerosSEEK_HOLESEEK_HO…";
                    let var_78_2: i64 = 0xb;
                    let rax_17: i64 = *(&jump_table_42bd0c).byte_offset(arg1[2] << 2);
                    result = rax_17 + &jump_table_42bd0c;
                    c_1 = rax_17 + &jump_table_42bd0c < rax_17;
                    
                    match result
                    {
                        0x4ff73e =>
                        {
                            goto 'label_4ff745;
                        }
                        0x4ff751 =>
                        {
                            goto 'label_4ff758;
                        }
                        0x4ff764 =>
                        {
                            goto 'label_4ff76b;
                        }
                        0x4ff777 =>
                        {
                            goto 'label_4ff77e;
                        }
                        0x4ff78a =>
                        {
                            goto 'label_4ff791;
                        }
                        0x4ff79d =>
                        {
                            goto 'label_4ff7a4;
                        }
                        0x5066e9 =>
                        {
                            goto 'label_5066e9;
                        }
                        0x50684d =>
                        {
                            goto 'label_50684d;
                        }
                        0x5068ab =>
                        {
                            goto 'label_5068b2;
                        }
                        0x5068f8 =>
                        {
                            goto 'label_5068f8;
                        }
                        0x5069d0 =>
                        {
                            goto 'label_5069d0;
                        }
                    }
                }
            }
        }
        1 =>
        {
            var_90 = "noyesavoidedunsupportedzerosSEEK…";
            let var_88_4: i64 = 2;
            let rax_13: i64 = *(&jump_table_42bcf8).byte_offset(arg1[1] << 2);
            result = rax_13 + &jump_table_42bcf8;
            cond:0_1 = rax_13 != -0x42bcf8;
            cond:1_1 = rax_13 == -0x42bcf8;
            
            match result
            {
                0x4ff66c =>
                {
                    goto 'label_4ff673;
                }
                0x4ff696 =>
                {
                    goto 'label_4ff69d;
                }
                0x4ff6c0 =>
                {
                    goto 'label_4ff6c7;
                }
                0x4ff6ea =>
                {
                    goto 'label_4ff6f1;
                }
                0x4ff714 =>
                {
                    goto 'label_4ff71b;
                }
                0x4ff72a =>
                {
                    goto 'label_4ff735;
                }
                0x4ff73d =>
                {
                    goto 'label_4ff73d;
                }
                0x4ff750 =>
                {
                    goto 'label_4ff750;
                }
                0x4ff763 =>
                {
                    goto 'label_4ff76b;
                }
                0x4ff776 =>
                {
                    /* undefined */
                }
                0x4ff789 =>
                {
                    goto 'label_4ff791;
                }
                0x5066d5 =>
                {
                    goto 'label_5066d7;
                }
                0x506839 =>
                {
                    goto 'label_506839;
                }
                0x506897 =>
                {
                    goto 'label_506897;
                }
                0x5068e4 =>
                {
                    goto 'label_5068ea;
                }
                0x5069bc =>
                {
                    goto 'label_5069bc;
                }
            }
        }
        2 =>
        {
            var_90 = "yesavoidedunsupportedzerosSEEK_H…";
            let var_88_2: i64 = 3;
            let rax_9: i64 = *(&jump_table_42bcf8).byte_offset(arg1[1] << 2);
            result = rax_9 + &jump_table_42bcf8;
            cond:0_1 = rax_9 != -0x42bcf8;
            cond:1_1 = rax_9 == -0x42bcf8;
            
            match result
            {
                0x4ff66c =>
                {
                    goto 'label_4ff673;
                }
                0x4ff696 =>
                {
                    goto 'label_4ff69d;
                }
                0x4ff6c0 =>
                {
                    goto 'label_4ff6c7;
                }
                0x4ff6ea =>
                {
                    goto 'label_4ff6f1;
                }
                0x4ff714 =>
                {
                    goto 'label_4ff71b;
                }
                0x4ff72a =>
                {
                    goto 'label_4ff735;
                }
                0x4ff73d =>
                {
                    goto 'label_4ff73d;
                }
                0x4ff750 =>
                {
                    goto 'label_4ff750;
                }
                0x4ff763 =>
                {
                    goto 'label_4ff76b;
                }
                0x4ff776 =>
                {
                    /* undefined */
                }
                0x4ff789 =>
                {
                    goto 'label_4ff791;
                }
                0x5066d5 =>
                {
                    goto 'label_5066d7;
                }
                0x506839 =>
                {
                    goto 'label_506839;
                }
                0x506897 =>
                {
                    goto 'label_506897;
                }
                0x5068e4 =>
                {
                    goto 'label_5068ea;
                }
                0x5069bc =>
                {
                    goto 'label_5069bc;
                }
            }
        }
        3 =>
        {
            var_90 = "avoidedunsupportedzerosSEEK_HOLE…";
            let var_88_3: i64 = 7;
            let rax_11: i64 = *(&jump_table_42bcf8).byte_offset(arg1[1] << 2);
            result = rax_11 + &jump_table_42bcf8;
            cond:0_1 = rax_11 != -0x42bcf8;
            cond:1_1 = rax_11 == -0x42bcf8;
            
            match result
            {
                0x4ff66c =>
                {
                    goto 'label_4ff673;
                }
                0x4ff696 =>
                {
                    goto 'label_4ff69d;
                }
                0x4ff6c0 =>
                {
                    goto 'label_4ff6c7;
                }
                0x4ff6ea =>
                {
                    goto 'label_4ff6f1;
                }
                0x4ff714 =>
                {
                    goto 'label_4ff71b;
                }
                0x4ff72a =>
                {
                    goto 'label_4ff735;
                }
                0x4ff73d =>
                {
                    goto 'label_4ff73d;
                }
                0x4ff750 =>
                {
                    goto 'label_4ff750;
                }
                0x4ff763 =>
                {
                    goto 'label_4ff76b;
                }
                0x4ff776 =>
                {
                    /* undefined */
                }
                0x4ff789 =>
                {
                    goto 'label_4ff791;
                }
                0x5066d5 =>
                {
                    goto 'label_5066d7;
                }
                0x506839 =>
                {
                    goto 'label_506839;
                }
                0x506897 =>
                {
                    goto 'label_506897;
                }
                0x5068e4 =>
                {
                    goto 'label_5068ea;
                }
                0x5069bc =>
                {
                    goto 'label_5069bc;
                }
            }
        }
        4 =>
        {
            var_90 = "unsupportedzerosSEEK_HOLESEEK_HO…";
            let var_88_1: i64 = 0xb;
            let rax_7: i64 = *(&jump_table_42bcf8).byte_offset(arg1[1] << 2);
            result = rax_7 + &jump_table_42bcf8;
            cond:0_1 = rax_7 != -0x42bcf8;
            cond:1_1 = rax_7 == -0x42bcf8;
            
            match result
            {
                0x4ff66c =>
                {
                    goto 'label_4ff673;
                }
                0x4ff696 =>
                {
                    goto 'label_4ff69d;
                }
                0x4ff6c0 =>
                {
                    goto 'label_4ff6c7;
                }
                0x4ff6ea =>
                {
                    goto 'label_4ff6f1;
                }
                0x4ff714 =>
                {
                    goto 'label_4ff71b;
                }
                0x4ff72a =>
                {
                    goto 'label_4ff735;
                }
                0x4ff73d =>
                {
                    'label_4ff73d:
                    
                    if !cond:0_1
                    {
                        goto 'label_4ff745;
                    }
                    
                    arg10 = arg10;
                    'label_4ff791:
                    let var_70_4: *const i8 = "noyesavoidedunsupportedzerosSEEK…";
                    rax_24 = 2;
                    goto 'label_4ff7ae;
                }
                0x4ff750 =>
                {
                    'label_4ff750:
                    rsp_1 = &var_90;
                    'label_4ff758:
                    rsp_1[5] = "SEEK_HOLE + zerosownershiptimest…";
                    rax_24 = 0x11;
                    'label_4ff7ae:
                    rsp_1[6] = rax_24;
                    rsp_1[7] = &rsp_1[1];
                    rsp_1[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                    rsp_1[9] = &rsp_1[3];
                    rsp_1[0xa] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                    rsp_1[0xb] = &rsp_1[5];
                    rsp_1[0xc] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                    rsp_1[0xd] = &data_5b5b00;
                    rsp_1[0xe] = 4;
                    rsp_1[0x11] = 0;
                    rsp_1[0xf] = &rsp_1[7];
                    rsp_1[0x10] = 3;
                    return std::io::stdio::_print::he918bceb0c89db46(&rsp_1[0xd]);
                }
                0x4ff763 =>
                {
                    'label_4ff76b:
                    let var_70_2: *const i8 = "zerosSEEK_HOLESEEK_HOLE + zeroso…";
                    rax_24 = 5;
                    goto 'label_4ff7ae;
                }
                0x4ff776 =>
                {
                    /* undefined */
                }
                0x4ff789 =>
                {
                    goto 'label_4ff791;
                }
                0x5066d5 =>
                {
                    'label_5066d7:
                    arg15 = &jump_table_42bcf8;
                    arg13 = arg17;
                    arg10 = 0xf000 & arg13[0xe];
                    'label_5066ec:
                    
                    match *arg6.byte_offset(0x4e)
                    {
                        0 =>
                        {
                            rsp_1[3] = arg6;
                            rsp_1[1] = arg2;
                            std::fs::metadata::h003d8cdbffde7c56(&rsp_1[0xa], arg16);
                            let rbx: i32 = rsp_1[0xa];
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&rsp_1[0xa]);
                            rdx_1 = arg3;
                            
                            if rbx != 2
                            {
                                rsp_1[2] = rdx_1;
                                arg11 = -0x8000000000000000;
                                r12_1 = rsp_1[3];
                                uucore::features::backup_control::get_backup_path::hb28e229807111f9d(&rsp_1[6], *r12_1.byte_offset(0x4c), arg16, arg14, 
                                    *r12_1.byte_offset(8), *r12_1.byte_offset(0x10));
                                arg10 = rsp_1[6];
                                
                                if arg10 == -0x8000000000000000
                                {
                                    goto 'label_506d8b;
                                }
                                
                                let r12_2: u64 = rsp_1[8];
                                rsp_1[0x28] = r12_2;
                                *rsp_1.byte_offset(0x130) = *rsp_1.byte_offset(0x30);
                                rsp_1[0x2a] = rsp_1[0x27];
                                rsp_1[0x21] = arg16;
                                rsp_1[4] = arg14;
                                let r9_1: u32 =
                                    std::path::Path::is_symlink::h6ab8b58756c51c6b(arg16, arg14);
                                uu_cp::backup_dest::hb9d2dd191dda7572(&rsp_1[0xa], rsp_1[0x21], 
                                    rsp_1[4], rsp_1[0x2a], r12_2, r9_1);
                                let rax_33: i64 = rsp_1[0xa];
                                *rsp_1.byte_offset(0x160) = *rsp_1.byte_offset(0x58);
                                rsp_1[0x2e] = rsp_1[0xd];
                                
                                if rax_33 == 0xd
                                {
                                    *rsp_1.byte_offset(0x110) = *rsp_1.byte_offset(0x160);
                                    rsp_1[0x24] = rsp_1[0x2e];
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&rsp_1[0x22]);
                                    rsp_1[4];
                                    result = std::fs::remove_file::h38159f05e7b4dc34(rsp_1[0x21]);
                                    cond:4_1 = result == 0;
                                    goto 'label_50684f;
                                }
                                
                                let zmm0_1: i128 = *rsp_1.byte_offset(0x70);
                                *arg15.byte_offset(0x30) = *rsp_1.byte_offset(0x80);
                                *arg15.byte_offset(0x20) = zmm0_1;
                                arg15[3] = rsp_1[0x2e];
                                *arg15.byte_offset(8) = *rsp_1.byte_offset(0x160);
                                *arg15 = rax_33;
                                result = core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&rsp_1[0x26]);
                                goto 'label_5070fe;
                            }
                        }
                        1 =>
                        {
                            rsp_1[1] = arg2;
                            rsp_1[2] = arg3;
                            std::fs::metadata::h003d8cdbffde7c56(&rsp_1[0xa], arg16);
                            let rbx_1: i32 = rsp_1[0xa];
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&rsp_1[0xa]);
                            
                            if rbx_1 != 2 && _$LT$uu_cp..OverwriteMode$u20$as$u20$core..cmp..PartialEq$GT$::eq::hba025a570c73f0e5(*arg6.byte_offset(0x3c), *arg6.byte_offset(0x3d)) != 0
                            {
                                result = std::fs::remove_file::h38159f05e7b4dc34(arg16);
                                
                                if result != 0
                                {
                                    *arg15 = 2;
                                    arg15[1] = result;
                                    goto 'label_5070fe;
                                }
                            }
                            
                            uu_cp::symlink_file::h73880cbbf32f0256(&rsp_1[0xa], rsp_1[1], rsp_1[2], 
                                arg16, arg14, rsp_1[0x53]);
                            goto 'label_506a6b;
                        }
                        2 =>
                        {
                            goto 'label_5068cb;
                        }
                        3 =>
                        {
                            rsp_1[3] = arg6;
                            rsp_1[1] = arg2;
                            rsp_1[2] = arg3;
                            rsp_1[5] = arg15;
                            std::fs::metadata::h003d8cdbffde7c56(&rsp_1[0xa], arg16);
                            let r14: i32 = rsp_1[0xa];
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&rsp_1[0xa]);
                            
                            if r14 != 2
                            {
                                let mut r9_4: *mut c_void = rsp_1[3];
                                result =
                                    jump_table_42bd38[*r9_4.byte_offset(0x4d)] + &jump_table_42bd38;
                                let rbp_4: *mut *mut c_void = rsp_1[5];
                                let mut rax_40: i64;
                                let mut rcx_11: *mut i8;
                                let mut rdx_9: i64;
                                let mut rsp_12: *mut c_void;
                                let mut rsi_11: i64;
                                let mut rdi_18: *mut c_void;
                                let mut r8_4: u64;
                                let mut r10_1: i64;
                                
                                match result
                                {
                                    0x506ad6 =>
                                    {
                                        rax_40 = arg10 == 0x1000;
                                        r10_1 = arg10 == 0xa000;
                                        rsp_12 = rsp_1.byte_offset(-8);
                                        rdi_18 = rsp_12.byte_offset(0x58);
                                        rsi_11 = *rsp_12.byte_offset(0x10);
                                        rdx_9 = *rsp_12.byte_offset(0x18);
                                        rcx_11 = arg16;
                                        r8_4 = arg14;
                                        'label_506b07:
                                        *rsp_12.byte_offset(-8) = *rsp_12.byte_offset(0x2a0);
                                        *rsp_12.byte_offset(-0x10) = rax_40;
                                        *rsp_12.byte_offset(-0x18) = r10_1;
                                        *rsp_12.byte_offset(-0x20) = *rsp_12.byte_offset(0x290);
                                        *rsp_12.byte_offset(-0x28) = *rsp_12.byte_offset(0x288);
                                        uu_cp::copy_helper::hc7e19de02e15c80a(rdi_18, rsi_11, 
                                            rdx_9, rcx_11, r8_4, r9_4);
                                        rsp_1 = rsp_12.byte_offset(8);
                                        result = rsp_1[0xa];
                                        
                                        if result == 0xd
                                        {
                                            *rbp_4 = 0xd;
                                        }
                                        else
                                        {
                                            'label_506b3f:
                                            rbp_4[7] = rsp_1[0x11];
                                            let zmm0_3: i128 = *rsp_1.byte_offset(0x58);
                                            let zmm1_2: i128 = *rsp_1.byte_offset(0x68);
                                            *rbp_4.byte_offset(0x28) = *rsp_1.byte_offset(0x78);
                                            *rbp_4.byte_offset(0x18) = zmm1_2;
                                            *rbp_4.byte_offset(8) = zmm0_3;
                                            *rbp_4 = result;
                                        }
                                    }
                                    0x506b67 =>
                                    {
                                        std::fs::symlink_metadata::h8589e79b0a107dee(&rsp_1[0xa], 
                                            arg16);
                                        let r13: i64 = rsp_1[0xa];
                                        result = rsp_1[0xb];
                                        
                                        if r13 != 2
                                        {
                                            rsp_1[4] = result;
                                            memcpy(&rsp_1[0x2e], &rsp_1[0xc], 0xa0);
                                            rsp_1[0x2c] = r13;
                                            rsp_1[0x2d] = rsp_1[4];
                                            result = std::fs::Metadata::modified::h6f16921acf618ae6(
                                                &rsp_1[0xa], arg13);
                                            let r12_4: i32 = rsp_1[0xb];
                                            let r13_1: i64 = rsp_1[0xa];
                                            
                                            if r12_4 != 0x3b9aca00
                                            {
                                                std::fs::Metadata::modified::h6f16921acf618ae6(
                                                    &rsp_1[0xa], &rsp_1[0x2c]);
                                                result = rsp_1[0xb];
                                                let rcx_21: i64 = rsp_1[0xa];
                                                
                                                if result != 0x3b9aca00
                                                {
                                                    let mut rdx_16: bool = r13_1 != rcx_21;
                                                    
                                                    if r13_1 < rcx_21
                                                    {
                                                        rdx_16 = true;
                                                    }
                                                    
                                                    let mut rsi_27: bool = r12_4 != result;
                                                    
                                                    if r12_4 < result
                                                    {
                                                        rsi_27 = true;
                                                    }
                                                    
                                                    if rdx_16 != 0
                                                    {
                                                        rsi_27 = rdx_16;
                                                    }
                                                    
                                                    if rsi_27 == 1
                                                    {
                                                        let r12_7: *mut c_void = rsp_1[3];
                                                        uu_cp::OverwriteMode::verify::h15b46a9de23bd96a(&rsp_1[0xa], *r12_7.byte_offset(0x3c), 
                                                            arg16, arg14, *r12_7.byte_offset(0x47));
                                                        result = rsp_1[0xa];
                                                        
                                                        if result != 0xd
                                                        {
                                                            goto 'label_506b3f;
                                                        }
                                                        
                                                        rax_40 = arg10 == 0x1000;
                                                        r10_1 = arg10 == 0xa000;
                                                        rsp_12 = rsp_1.byte_offset(-8);
                                                        rdi_18 = rsp_12.byte_offset(0x58);
                                                        rsi_11 = *rsp_12.byte_offset(0x10);
                                                        rdx_9 = *rsp_12.byte_offset(0x18);
                                                        rcx_11 = arg16;
                                                        r8_4 = arg14;
                                                        r9_4 = r12_7;
                                                        goto 'label_506b07;
                                                    }
                                                    
                                                    *rbp_4 = 0xd;
                                                }
                                                else
                                                {
                                                    *rbp_4 = 2;
                                                    rbp_4[1] = rcx_21;
                                                }
                                            }
                                            else
                                            {
                                                *rbp_4 = 2;
                                                rbp_4[1] = r13_1;
                                            }
                                        }
                                        else
                                        {
                                            *rbp_4 = 2;
                                            rbp_4[1] = result;
                                        }
                                    }
                                    0x506b9c =>
                                    {
                                        rsp_1[0x2c] = arg16;
                                        rsp_1[0x2d] = arg14;
                                        rsp_1[0x22] = &rsp_1[0x2c];
                                        rsp_1[0x23] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                                        rsp_1[0xa] = &data_5b5f98;
                                        rsp_1[0xb] = 2;
                                        rsp_1[0xe] = 0;
                                        rsp_1[0xc] = &rsp_1[0x22];
                                        rsp_1[0xd] = 1;
                                        result = core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&rbp_4[1], &rsp_1[0xa]);
                                        *rbp_4 = 4;
                                    }
                                    0x506c1a =>
                                    {
                                        if *r9_4.byte_offset(0x47) == 0
                                        {
                                            *rbp_4 = 0xd;
                                        }
                                        else
                                        {
                                            rsp_1[0x2c] = 1;
                                            rsp_1[0x2d] = arg16;
                                            rsp_1[0x2e] = arg14;
                                            rsp_1[0x2f] = 1;
                                            rsp_1[0x22] = &rsp_1[0x2c];
                                            rsp_1[0x23] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                            rsp_1[0xa] = &data_5b5dd8;
                                            rsp_1[0xb] = 2;
                                            rsp_1[0xe] = 0;
                                            rsp_1[0xc] = &rsp_1[0x22];
                                            rsp_1[0xd] = 1;
                                            result = std::io::stdio::_print::he918bceb0c89db46(
                                                &rsp_1[0xa]);
                                            *rbp_4 = 0xd;
                                        }
                                    }
                                }
                                
                                goto 'label_5070fe;
                            }
                            
                            let mut rax_36: i64;
                            rax_36 = arg10 == 0x1000;
                            let mut r10: i64;
                            r10 = arg10 == 0xa000;
                            let rsi_6: i64 = rsp_1[1];
                            let rdx_6: i64 = rsp_1[2];
                            let r9_2: i64 = rsp_1[3];
                            *rsp_1.byte_offset(-0x10) = rsp_1[0x53];
                            *rsp_1.byte_offset(-0x18) = rax_36;
                            *rsp_1.byte_offset(-0x20) = r10;
                            *rsp_1.byte_offset(-0x28) = rsp_1[0x51];
                            *rsp_1.byte_offset(-0x30) = rsp_1[0x50];
                            uu_cp::copy_helper::hc7e19de02e15c80a(&rsp_1[0xa], rsi_6, rdx_6, arg16, 
                                arg14, r9_2);
                            result = rsp_1[0xa];
                            arg3 = rsp_1[5];
                            
                            if result == 0xd
                            {
                                *arg3 = 0xd;
                                goto 'label_5070fe;
                            }
                            
                            arg3[7] = rsp_1[0x11];
                            arg7 = *rsp_1.byte_offset(0x58);
                            goto 'label_5069ca;
                        }
                        4 =>
                        {
                            rsp_1[0xa] = 0x1b600000000;
                            'label_506874:
                            rsp_1[0xb] = 0;
                            *rsp_1.byte_offset(0x5c) = 0;
                            *rsp_1.byte_offset(0x59) = 1;
                            *rsp_1.byte_offset(0x5c) = 1;
                            arg13 = &rsp_1[0x2c];
                            arg2 = &rsp_1[0xa];
                            goto 'label_5068a3;
                        }
                    }
                }
                0x506839 =>
                {
                    'label_506839:
                    *result.byte_offset(-0x75) -= 1;
                    rsp_1 = 0x10824;
                    let temp9_1: i8 = *result.byte_offset(-0x75);
                    *result.byte_offset(-0x75) += 0xf8;
                    
                    if temp9_1 != 8
                    {
                        result = nullptr;
                        trap(0xd);
                    }
                    
                    *arg2.byte_offset(0x48000001) += *arg3[1];
                    *0x10874 = result;
                    goto 'label_506874;
                }
                0x506897 =>
                {
                    'label_506897:
                    
                    if !cond:1_1
                    {
                        let mut result_1: *mut c_void = result;
                        rsp_1 = &result_1;
                        'label_5068a3:
                        std::fs::OpenOptions::open::h9051a5b14c2a871a(arg13, arg2, arg16);
                        arg1 = arg13;
                        'label_5068b2:
                        result = core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(
                            core::result::Result$LT$T$C$E$GT$::unwrap::hd2e0f198d57ce974(arg1));
                        *arg15 = 0xd;
                        'label_5070fe:
                        rsp_1[0x49];
                        rsp_1[0x4a];
                        rsp_1[0x4b];
                        rsp_1[0x4c];
                        rsp_1[0x4d];
                        rsp_1[0x4e];
                        return result;
                    }
                    
                    let mut rcx: *mut c_void;
                    rcx = 0xb4;
                    result ^= 8;
                    *result += result;
                    'label_5068cb:
                    result = arg10 == 0x1000;
                    arg12 = arg10 == 0xa000;
                    rsp_1 -= 8;
                    arg1 = &rsp_1[0xb];
                    'label_5068ea:
                    *rsp_1.byte_offset(-8) = rsp_1[0x54];
                    *rsp_1.byte_offset(-0x10) = result;
                    *rsp_1.byte_offset(-0x18) = arg12;
                    *rsp_1.byte_offset(-0x20) = rsp_1[0x52];
                    *rsp_1.byte_offset(-0x28) = rsp_1[0x51];
                    rsp_1 -= 0x28;
                    'label_506902:
                    uu_cp::copy_helper::hc7e19de02e15c80a(arg1);
                    rsp_1 = &rsp_1[6];
                    'label_506a6b:
                    result = rsp_1[0xa];
                    
                    if result != 0xd
                    {
                        arg15[7] = rsp_1[0x11];
                        let zmm0_2: i128 = *rsp_1.byte_offset(0x58);
                        let zmm1_1: i128 = *rsp_1.byte_offset(0x68);
                        *arg15.byte_offset(0x28) = *rsp_1.byte_offset(0x78);
                        *arg15.byte_offset(0x18) = zmm1_1;
                        *arg15.byte_offset(8) = zmm0_2;
                        *arg15 = result;
                    }
                    else
                    {
                        *arg15 = 0xd;
                    }
                    
                    goto 'label_5070fe;
                }
                0x5068e4 =>
                {
                    goto 'label_5068ea;
                }
                0x5069bc =>
                {
                    'label_5069bc:
                    result &= 0x88;
                    *result += result;
                    *result.byte_offset(-0x77) += 0xf8;
                    let var_40: i8;
                    let var_40_1: i8 = var_40 + result;
                    'label_5069ca:
                    arg8 = *rsp_1.byte_offset(0x68);
                    arg9 = *rsp_1.byte_offset(0x78);
                    goto 'label_5069d4;
                }
            }
        }
    }
    
    let rax_47: *mut c_void = rsp_1[3];
    let cond:2_1: bool = *rax_47.byte_offset(0x41) != 0;
    let r12_5: *mut i8 = rsp_1[1];
    rsp_1[5] = arg15;
    let mut rax_48: i8;
    
    if cond:2_1 || (rsp_1[0x54] != 0 && *rax_47.byte_offset(0x40) != 0)
    {
        rax_48 = std::path::Path::is_symlink::h6ab8b58756c51c6b(r12_5, rdx_1);
    }
    
    let mut rax_49: *mut *mut [i8; 0xa1];
    let mut r12_6: *mut i64;
    
    if (!cond:2_1 && (rsp_1[0x54] == 0 || *rax_47.byte_offset(0x40) == 0)) || rax_48 == 0
    {
        r12_6 = rdx_1;
        rax_49 = std::fs::hard_link::h57f77023afa0952c(r12_5, rdx_1, arg16);
    }
    else
    {
        r12_6 = rdx_1;
        uucore::features::fs::canonicalize::hb17a5541a57984e7(&rsp_1[0xa], r12_5, rdx_1, 2, 1);
        core::result::Result$LT$T$C$E$GT$::unwrap::ha6a806893804951f(&rsp_1[0x46], &rsp_1[0xa]);
        rax_49 = std::fs::hard_link::hb933e6d9c097124b(&rsp_1[0x46], arg16);
    }
    
    rsp_1[0x2b] = rax_49;
    let mut rax_50: *const i8;
    let mut rdx_13: i64;
    rax_50 = uucore::features::fs::get_filename::h4988c52a18f1d407(arg16, arg14);
    
    if rax_50 == 0
    {
        rdx_13 = 0x11;
    }
    
    let mut r14_3: *const i8 = "invalid file namecannot create s…";
    
    if rax_50 == 0
    {
        rax_50 = "invalid file namecannot create s…";
    }
    
    rsp_1[0x22] = 0;
    rsp_1[0x23] = rax_50;
    rsp_1[0x24] = rdx_13;
    rsp_1[0x25] = 1;
    let mut rax_51: *mut i8;
    let mut rdx_14: i64;
    rax_51 = uucore::features::fs::get_filename::h4988c52a18f1d407(rsp_1[1], r12_6);
    
    if rax_51 != 0
    {
        r14_3 = rax_51;
    }
    
    if rax_51 == 0
    {
        rdx_14 = 0x11;
    }
    
    rsp_1[0x2c] = 0;
    rsp_1[0x2d] = r14_3;
    rsp_1[0x2e] = rdx_14;
    rsp_1[0x2f] = 1;
    rsp_1[0x26] = &rsp_1[0x22];
    rsp_1[0x27] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    rsp_1[0x28] = &rsp_1[0x2c];
    rsp_1[0x29] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    rsp_1[0xa] = &data_5b5f78;
    rsp_1[0xb] = 2;
    rsp_1[0xe] = 0;
    rsp_1[0xc] = &rsp_1[0x26];
    rsp_1[0xd] = 2;
    core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&rsp_1[0x43], &rsp_1[0xa]);
    rsp_1[0xc] = rsp_1[0x45];
    *rsp_1.byte_offset(0x50) = *rsp_1.byte_offset(0x218);
    
    if rax_49 == 0
    {
        result = core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h0c139c7d53bd4e4a(&rsp_1[0xa]);
        *rsp_1[5] = 0xd;
        goto 'label_5070fe;
    }
    
    result = rsp_1[0xa];
    rsp_1[6] = rsp_1[0xb];
    rsp_1[7] = rsp_1[0xc];
    arg3 = rsp_1[5];
    
    if result == -0x8000000000000000
    {
        *arg3 = 0xd;
        goto 'label_5070fe;
    }
    
    arg3[2] = rsp_1[6];
    arg3[3] = rsp_1[7];
    *arg3 = 3;
    arg3[1] = result;
    arg3[4] = rax_49;
    goto 'label_5070fe;
}
