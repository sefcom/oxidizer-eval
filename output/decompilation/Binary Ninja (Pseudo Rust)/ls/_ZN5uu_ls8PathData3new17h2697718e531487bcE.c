
  fn uu_ls::PathData::new::h2697718e531487bc(arg1: *mut i64, arg2: *mut i128, arg3: *mut i8, arg4: *mut i64, arg5: i8, arg6: i8, arg7: u64 @ r14, arg8: i8) -> i64

{
    let var_18: u64 = arg7;
    let rdx: i64 = *arg4;
    let mut var_154: i8;
    let mut var_148: i64;
    let mut var_140: i64;
    let mut var_138: i64;
    let mut var_118: i64;
    let mut var_108: i128;
    let mut var_f8: i64;
    let mut var_e8: i64;
    let mut var_e0: i64;
    let mut var_d8: i64;
    let mut rbp_3: i32;
    let mut r8: i32;
    
    if -(rdx) != -0x8000000000000000
    {
        var_140 = arg4[1];
        var_138 = arg4[2];
        var_154 = 0;
        r8 = 0;
        var_148 = rdx;
        let mut rcx: *mut i8;
        let mut r15_1: u32;
        
        match arg6
        {
            0 =>
            {
                'label_59930c:
                rcx = arg3;
                r15_1 = *arg3;
                
                if (r15_1 & 1) == 0
                {
                    'label_599448:
                    var_118 = 0;
                    'label_5994e0:
                    rbp_3 = 2;
                    
                    if (arg5 & 1) == 0
                    {
                        'label_5994c0:
                        var_e8 = 0;
                        var_e0 = 1;
                        var_d8 = 0;
                    }
                    else
                    {
                        r15_1 ^= 1;
                        uu_ls::get_security_context::h4da0c13867f1ac9e(&var_e8, 
                            *arg2.byte_offset(8), arg2[1], r8);
                    }
                }
                else
                {
                    'label_599325:
                    var_e8 = *rcx.byte_offset(8);
                    let var_c8_1: i64 = *rcx.byte_offset(0x28);
                    var_d8 = *rcx.byte_offset(0x18);
                    
                    if var_e8 == 0
                    {
                        var_118 = 0;
                        arg7 = 0;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..DirEntry$C$std..io..error..Error$GT$$GT$::h446667b72579c759(&var_e8);
                    }
                    else
                    {
                        var_f8 = *rcx.byte_offset(0x28);
                        var_108 = *rcx.byte_offset(0x18);
                        var_118 = *rcx.byte_offset(8);
                    }
                    
                    if var_118 == 0
                    {
                        goto 'label_5994e0;
                    }
                    
                    let mut rax_22: i32;
                    let mut rdx_5: i32;
                    rax_22 = uu_ls::PathData::new::get_file_type::h648e9c795770d343(&var_118, 
                        *arg2.byte_offset(8), arg2[1], r8);
                    rbp_3 = rax_22;
                    arg7 = rdx_5;
                    
                    if (arg5 & 1) == 0
                    {
                        goto 'label_5994c0;
                    }
                    
                    r15_1 ^= 1;
                    uu_ls::get_security_context::h4da0c13867f1ac9e(&var_e8, *arg2.byte_offset(8), 
                        arg2[1], r8);
                }
            }
            1 =>
            {
                'label_5993dc:
                
                if arg8 == 0
                {
                    'label_5995de:
                    r8 = 0;
                    rcx = arg3;
                    r15_1 = *arg3;
                    
                    if (r15_1 & 1) != 0
                    {
                        goto 'label_599325;
                    }
                    
                    goto 'label_599448;
                }
                
                arg7 = *arg2.byte_offset(8);
                arg2[1];
                'label_5993f7:
                let rsi_4: u64 = arg7;
                arg7 = 1;
                std::fs::metadata::h0f528178d24a74c4(&var_e8, rsi_4);
                
                if var_e8 == 2
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h4d6173845b848954(&var_e8);
                    r8 = 0;
                    rcx = arg3;
                    r15_1 = *arg3;
                    
                    if (r15_1 & 1) == 0
                    {
                        goto 'label_599448;
                    }
                    
                    goto 'label_599325;
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h4d6173845b848954(&var_e8);
                let var_b0: i32;
                r8 = (var_b0 & 0xf000) == 0x4000;
                rcx = arg3;
                r15_1 = *arg3;
                
                if (r15_1 & 1) != 0
                {
                    goto 'label_599325;
                }
                
                goto 'label_599448;
            }
            2 =>
            {
                'label_599456:
                r8 = arg8;
                rcx = arg3;
                r15_1 = *arg3;
                
                if (r15_1 & 1) != 0
                {
                    goto 'label_599325;
                }
                
                goto 'label_599448;
            }
            3 =>
            {
                'label_599434:
                r8 = 1;
                rcx = arg3;
                r15_1 = *arg3;
                
                if (r15_1 & 1) != 0
                {
                    goto 'label_599325;
                }
                
                goto 'label_599448;
            }
        }
    }
    else if arg8 == 0
    {
        arg7 = *arg2.byte_offset(8);
        let r12_2: i64 = arg2[1];
        let mut rax_15: i64;
        let mut rdx_2: u64;
        rax_15 = std::path::Path::file_name::h6d40d88bf3fb287a(arg7, r12_2);
        
        if rax_15 == 0
        {
            rax_15 =
                uu_ls::PathData::new::_$u7b$$u7b$closure$u7d$$u7d$::hc527681ad6086ee7(arg7, r12_2);
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_e8, rax_15, rdx_2);
        var_148 = var_e8;
        var_140 = var_e0;
        var_138 = var_d8;
        let mut rax_18: i64;
        rax_18 = 1;
        var_154 = rax_18;
        r8 = 0;
        
        match arg6
        {
            0 =>
            {
                goto 'label_59930c;
            }
            1 =>
            {
                goto 'label_5993dc;
            }
            2 =>
            {
                goto 'label_599456;
            }
            3 =>
            {
                goto 'label_599434;
            }
        }
    }
    else
    {
        arg7 = *arg2.byte_offset(8);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h523154303afc7abc(&var_e8, arg7, arg2[1]);
        var_148 = var_e8;
        var_140 = var_e0;
        var_138 = var_d8;
        let mut rax_4: i64;
        rax_4 = 1;
        var_154 = rax_4;
        
        match arg6
        {
            0 =>
            {
                goto 'label_5995de;
            }
            1 =>
            {
                var_154 = arg6;
                goto 'label_5993f7;
            }
            2 =>
            {
                goto 'label_599456;
            }
            3 =>
            {
                goto 'label_599434;
            }
        }
    }
    
    arg1[0x24] = var_f8;
    let zmm0: i128 = var_118;
    *arg1.byte_offset(0x110) = var_108;
    *arg1.byte_offset(0x100) = zmm0;
    arg1[6] = var_e8;
    arg1[7] = var_e0;
    arg1[8] = var_d8;
    arg1[9] = 3;
    arg1[0x1f] = rbp_3;
    *arg1.byte_offset(0xfc) = arg7;
    *arg1 = var_148;
    arg1[1] = var_140;
    arg1[2] = var_138;
    *arg1.byte_offset(0x18) = *arg2;
    arg1[5] = arg2[1];
    arg1[0x25] = r8;
    *arg1.byte_offset(0x129) = arg8;
    
    if -(rdx) != -0x8000000000000000 && (var_154 & 1) != 0
    {
        return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(rdx, 
            arg4[1]);
    }
    
    arg8
}
