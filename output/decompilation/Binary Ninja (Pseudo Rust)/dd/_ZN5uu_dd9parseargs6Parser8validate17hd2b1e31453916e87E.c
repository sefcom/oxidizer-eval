
  fn uu_dd::parseargs::Parser::validate::hd2b1e31453916e87(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let r13: i8 = arg2[0x14];
    let rdi: i8 = *arg2.byte_offset(0xa1);
    let rsi: i8 = *arg2.byte_offset(0xa2);
    let rcx: i8 = *arg2.byte_offset(0xa3);
    let mut rax: bool = *arg2.byte_offset(0xa4);
    let rdx: i8 = *arg2.byte_offset(0xa5);
    let mut r15: u32 = *arg2.byte_offset(0xa6);
    let r10: i8 = *arg2.byte_offset(0xa7);
    let rdx_1: i8 = arg2[0x15];
    let r11: i8 = *arg2.byte_offset(0xa9);
    let mut zmm0: u128 = *arg2.byte_offset(0xaa);
    let r8: i8 = *arg2.byte_offset(0xae);
    let r9: i8 = *arg2.byte_offset(0xaf);
    let mut rdx_2: i64;
    let mut var_5e_1: i8;
    let mut var_5d_1: i8;
    let mut var_5c_1: i8;
    let mut var_5b_1: i8;
    let mut var_58_1: u128;
    let mut r12: i64;
    
    if r13 != 0
    {
        rdx_2 = 1;
        
        if (rsi | rdi) == 0
        {
            if rcx == 0
            {
                var_5b_1 = r11;
                var_5e_1 = r10;
                var_5d_1 = r9;
                var_5c_1 = r8;
                var_58_1 = zmm0;
                rax = (rax == 0) * 2;
                r12 = 0;
                'label_4d2cba:
                let mut rbp_1: u32 = r12;
                let rax_1: *mut c_void =
                    uu_dd::parseargs::get_ctable::h8e7446a764b1d972(rbp_1, rax);
                let mut zmm1: u128 = _mm_cmpeq_epi8({0}, _mm_unpacklo_epi8(var_58_1, var_58_1));
                zmm0 = _mm_shufflelo_epi16(zmm1, 0x55) | zmm1;
                let mut rcx_1: u64 = _mm_extract_epi16(_mm_cmpeq_epi32(zmm1, zmm1) ^ zmm0, 2);
                rdx_2 = 4;
                
                if (rcx_1 & 1) == 0
                {
                    let mut var_5e_2: i8;
                    let mut var_5d_2: i8;
                    let mut var_5c_2: i8;
                    let mut rdx_4: i64;
                    let mut r12_1: i8;
                    
                    if arg2[6] == 0
                    {
                        rdx_2 = 9;
                        r15 |= rdx;
                        
                        if r15 == 0
                        {
                            r12_1 = var_5b_1;
                            var_5e_2 = var_5e_1;
                            var_5d_2 = var_5d_1;
                            var_5c_2 = var_5c_1;
                            rdx_4 = 2;
                            rbp_1 = 0;
                            'label_4d2dec:
                            let mut var_48: u128;
                            uu_dd::parseargs::conversion_mode::h18084a71126044cd(&var_48, rax_1, 
                                rdx_4, rcx_1, r13, rdx_1);
                            let rsi_5: i64 = *arg2;
                            let mut rax_3: i64;
                            let mut rcx_3: i64;
                            
                            if rsi_5 == 0
                            {
                                rcx_3 = 0x200;
                                rax_3 = 0x200;
                                
                                if arg2[2] != 0
                                {
                                    rax_3 = arg2[3];
                                }
                                
                                zmm1 = var_58_1;
                                
                                if arg2[4] != 0
                                {
                                    rcx_3 = arg2[5];
                                }
                            }
                            else
                            {
                                rax_3 = arg2[1];
                                rcx_3 = rax_3;
                                zmm1 = var_58_1;
                            }
                            
                            let mut rdx_5: i8 = 1;
                            
                            if rsi_5 != 0
                            {
                                rdx_5 = arg2[0x18];
                            }
                            
                            let mut rsi_6: i64 = rax_3;
                            
                            if *arg2.byte_offset(0xbf) != 0
                            {
                                rsi_6 = 1;
                            }
                            
                            let temp0_6: i64 = arg2[8];
                            
                            if temp0_6 != 0
                            {
                                rsi_6 = rax_3;
                            }
                            
                            if temp0_6 != 0
                            {
                                rsi_6 = 1;
                            }
                            
                            let rsi_7: i64 = rsi_6 * arg2[9];
                            let mut rdi_6: i64 = rcx_3;
                            
                            if *arg2.byte_offset(0xcf) != 0
                            {
                                rdi_6 = 1;
                            }
                            
                            let temp1: i64 = arg2[0xa];
                            
                            if temp1 != 0
                            {
                                rdi_6 = rcx_3;
                            }
                            
                            if temp1 != 0
                            {
                                rdi_6 = 1;
                            }
                            
                            let rdi_7: i64 = rdi_6 * arg2[0xb];
                            let mut r9_4: u64 = arg2[0xc];
                            let r8_4: i64 = arg2[0xd];
                            
                            if r9_4 == 0
                            {
                                r9_4 = *arg2.byte_offset(0xbe);
                            }
                            else if r9_4 == 1
                            {
                                r9_4 = 1;
                            }
                            
                            arg1[4] = arg2[0x10];
                            *arg1.byte_offset(0x10) = *arg2.byte_offset(0x70);
                            arg1[7] = arg2[0x13];
                            *arg1.byte_offset(0x28) = *arg2.byte_offset(0x88);
                            *arg1.byte_offset(0x40) = *arg2.byte_offset(0xb0);
                            *arg1.byte_offset(0x96) = *arg2.byte_offset(0xc1);
                            *arg1.byte_offset(0x9d) = arg2[0x19];
                            let var_38: i64;
                            arg1[0xc] = var_38;
                            *arg1.byte_offset(0x50) = var_48;
                            *arg1 = r9_4;
                            arg1[1] = r8_4;
                            arg1[0xd] = rdx_1;
                            *arg1.byte_offset(0x69) = rbp_1;
                            *arg1.byte_offset(0x6a) = var_5e_2;
                            *arg1.byte_offset(0x6b) = r12_1;
                            arg1[0xe] = rax_3;
                            arg1[0xf] = rcx_3;
                            arg1[0x10] = rsi_7;
                            arg1[0x11] = rdi_7;
                            arg1[0x12] = zmm1;
                            *arg1.byte_offset(0x94) = var_5c_2;
                            *arg1.byte_offset(0x95) = var_5d_2;
                            *arg1.byte_offset(0xa5) = rdx_5;
                            let result: i8 = arg2[0x1a];
                            *arg1.byte_offset(0xa6) = result;
                            return result;
                        }
                    }
                    else
                    {
                        rcx_1 = arg2[7];
                        
                        if r12 == 0
                        {
                            rbp_1 = 0x20;
                            r12_1 = var_5b_1;
                            var_5e_2 = var_5e_1;
                            var_5d_2 = var_5d_1;
                            var_5c_2 = var_5c_1;
                            rdx_4 = 1;
                            goto 'label_4d2dec;
                        }
                        
                        if rbp_1 != 3
                        {
                            'label_4d2d57:
                            rbp_1 = 0x20;
                            r12_1 = var_5b_1;
                            var_5e_2 = var_5e_1;
                            var_5d_2 = var_5d_1;
                            var_5c_2 = var_5c_1;
                            rdx_4 = 0;
                            goto 'label_4d2dec;
                        }
                        
                        if rdx == 0
                        {
                            r12_1 = var_5b_1;
                            var_5e_2 = var_5e_1;
                            var_5d_2 = var_5d_1;
                            var_5c_2 = var_5c_1;
                            rdx_4 = 0 + 1;
                            r15 <<= 5;
                            rbp_1 = r15;
                            goto 'label_4d2dec;
                        }
                        
                        rdx_2 = 3;
                        
                        if r15 == 0
                        {
                            goto 'label_4d2d57;
                        }
                    }
                }
            }
            else
            {
                rdx_2 = 2;
                
                if rax == 0
                {
                    var_5b_1 = r11;
                    var_5e_1 = r10;
                    var_5d_1 = r9;
                    var_5c_1 = r8;
                    var_58_1 = zmm0;
                    rax = true;
                    r12 = 0;
                    goto 'label_4d2cba;
                }
            }
        }
    }
    else if rdi != 0
    {
        rdx_2 = 1;
        
        if rsi == 0
        {
            if rcx == 0
            {
                var_5b_1 = r11;
                var_5e_1 = r10;
                var_5d_1 = r9;
                var_5c_1 = r8;
                var_58_1 = zmm0;
                rax = (rax == 0) * 2;
                r12 = 1;
                goto 'label_4d2cba;
            }
            
            rdx_2 = 2;
            
            if rax == 0
            {
                var_5b_1 = r11;
                var_5e_1 = r10;
                var_5d_1 = r9;
                var_5c_1 = r8;
                var_58_1 = zmm0;
                rax = true;
                r12 = 1;
                goto 'label_4d2cba;
            }
        }
    }
    else if rsi == 0
    {
        if rcx == 0
        {
            var_5b_1 = r11;
            var_5e_1 = r10;
            var_5d_1 = r9;
            var_5c_1 = r8;
            var_58_1 = zmm0;
            rax = (rax == 0) * 2;
            r12 = 3;
            goto 'label_4d2cba;
        }
        
        rdx_2 = 2;
        
        if rax == 0
        {
            var_5b_1 = r11;
            var_5e_1 = r10;
            var_5d_1 = r9;
            var_5c_1 = r8;
            var_58_1 = zmm0;
            r12 = 3;
            'label_4d2c46:
            rax = true;
            goto 'label_4d2cba;
        }
    }
    else
    {
        if rcx == 0
        {
            var_5b_1 = r11;
            var_5e_1 = r10;
            var_5d_1 = r9;
            var_5c_1 = r8;
            var_58_1 = zmm0;
            rax = (rax == 0) * 2;
            r12 = 2;
            goto 'label_4d2cba;
        }
        
        rdx_2 = 2;
        
        if rax == 0
        {
            var_5b_1 = r11;
            var_5e_1 = r10;
            var_5d_1 = r9;
            var_5c_1 = r8;
            var_58_1 = zmm0;
            r12 = 2;
            goto 'label_4d2c46;
        }
    }
    arg1[1] = rdx_2;
    *arg1 = 3;
    /* tailcall */
    core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::h57b892102145e56e(arg2)
}
