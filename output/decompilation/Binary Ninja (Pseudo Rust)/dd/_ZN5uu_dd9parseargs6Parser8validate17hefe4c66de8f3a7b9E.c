
  fn uu_dd::parseargs::Parser::validate::hefe4c66de8f3a7b9(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let rbp: i8 = arg2[0x14];
    let rdx: i8 = *arg2.byte_offset(0xa1);
    let mut rsi: u32 = *arg2.byte_offset(0xa2);
    let mut rcx: u32 = *arg2.byte_offset(0xa3);
    let mut rax: u32 = *arg2.byte_offset(0xa4);
    let rdi: i8 = *arg2.byte_offset(0xa5);
    let rdi_1: i8 = *arg2.byte_offset(0xa6);
    let r9: i8 = *arg2.byte_offset(0xa7);
    let r10: i8 = arg2[0x15];
    let rdi_2: i8 = *arg2.byte_offset(0xa9);
    let mut r11: u64 = *arg2.byte_offset(0xaa);
    let r13: i8 = *arg2.byte_offset(0xae);
    let r8: i8 = *arg2.byte_offset(0xaf);
    let mut var_68_1: u32;
    let mut rdx_1: u64;
    
    if rbp == 0
    {
        if rdx != 0
        {
            rdx_1 = 1;
            
            if rsi != 0
            {
                goto 'label_48cb6a;
            }
            
            if rcx == 0
            {
                rax ^= 1;
                rax *= 2;
                rcx = 1;
                var_68_1 = rcx;
                goto 'label_48cab9;
            }
            
            rcx = 1;
            rdx_1 = 2;
            rsi = 1;
            var_68_1 = rsi;
            
            if rax == 0
            {
                goto 'label_48cafd;
            }
            
            goto 'label_48cb6a;
        }
        
        if rsi == 0
        {
            if rcx == 0
            {
                rax ^= 1;
                rax *= 2;
                rcx = 3;
                var_68_1 = rcx;
                goto 'label_48cab9;
            }
            
            rdx_1 = 2;
            
            if rax != 0
            {
                goto 'label_48cb6a;
            }
            
            rax = 3;
        }
        else
        {
            if rcx == 0
            {
                rax ^= 1;
                rax *= 2;
                rcx = 2;
                var_68_1 = rcx;
                goto 'label_48cab9;
            }
            
            rdx_1 = 2;
            
            if rax != 0
            {
                goto 'label_48cb6a;
            }
            
            rax = 2;
        }
        
        var_68_1 = rax;
        rcx = 1;
        goto 'label_48cafd;
    }
    
    rdx_1 = 1;
    
    if (rdx | rsi) != 0
    {
        'label_48cb6a:
        arg1[1] = rdx_1;
        *arg1 = 3;
        core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::hddf27aabfacd7e95(arg2);
    }
    else
    {
        if rcx != 0
        {
            rdx_1 = 2;
            
            if rax != 0
            {
                goto 'label_48cb6a;
            }
            
            rcx = 1;
            var_68_1 = 0;
            goto 'label_48cafd;
        }
        
        rax ^= 1;
        rax *= 2;
        var_68_1 = 0;
        'label_48cab9:
        rcx = rax;
        'label_48cafd:
        let zmm1: u128 = _mm_shuffle_epi32(r11 >> 8 & 1, 0x44);
        let r15_1: i8 = _mm_movemask_epi8(_mm_slli_epi16(
            (r11 << 5 & 0x1000000) | (r11 >> 2 & 0x10000) | (r11 >> 0x10 & 1) | (r11 >> 9 & 0x100), 
            7)) & 1;
        let r12_3: i8 = _mm_movemask_epi8(_mm_slli_epi16(zmm1, 7)) >> 8 & 1;
        let rdi_3: u32 = var_68_1;
        let rax_11: *mut c_void = uu_dd::parseargs::get_ctable::h3225cb694e4d92e4(rdi_3, rcx);
        rdx_1 = 4;
        
        if (r15_1 & r12_3) != 0
        {
            goto 'label_48cb6a;
        }
        
        let mut rcx_1: u64;
        let mut rdx_10: i64;
        
        if arg2[6] != 1
        {
            rcx_1 = rdi | rdi_1;
            rdx_1 = 9;
            
            if rcx_1 != 0
            {
                goto 'label_48cb6a;
            }
            
            rdx_10 = 2;
            var_68_1 = 0;
        }
        else
        {
            rcx_1 = arg2[7];
            
            if var_68_1 == 0
            {
                rdx_1 = 0x20;
                var_68_1 = rdx_1;
                rdx_10 = 1;
            }
            else if rdi_3 != 3
            {
                'label_48cbbc:
                rdx_1 = 0x20;
                var_68_1 = rdx_1;
                rdx_10 = 0;
            }
            else
            {
                if rdi != 0
                {
                    rdx_1 = 3;
                    
                    if rdi_1 != 0
                    {
                        goto 'label_48cb6a;
                    }
                    
                    goto 'label_48cbbc;
                }
                
                let mut rdi_5: u64 = rdi_1;
                rdx_10 = 2 - rdi_5;
                rdi_5 <<= 5;
                var_68_1 = rdi_5;
            }
        }
        
        let mut var_50: u128;
        uu_dd::parseargs::conversion_mode::he1b2907b7b2f438d(&var_50, rax_11, rdx_10, rcx_1, rbp, 
            r10);
        let rsi_4: i64 = *arg2;
        let mut rax_13: i64;
        let mut rcx_2: i64;
        let mut rdx_11: i8;
        
        if rsi_4 == 0
        {
            rcx_2 = 0x200;
            rax_13 = 0x200;
            
            if arg2[2] != 0
            {
                rax_13 = arg2[3];
                
                if arg2[4] != 0
                {
                    goto 'label_48ccf1;
                }
            }
            else if arg2[4] != 0
            {
                'label_48ccf1:
                rcx_2 = arg2[5];
                rdx_11 = 1;
                
                if rsi_4 == 0
                {
                    goto 'label_48cc3b;
                }
                
                goto 'label_48cc7b;
            }
            
            rdx_11 = 1;
            
            if rsi_4 == 0
            {
                goto 'label_48cc3b;
            }
            
            goto 'label_48cc7b;
        }
        
        rax_13 = arg2[1];
        rcx_2 = rax_13;
        rdx_11 = 1;
        let mut rsi_5: i64;
        
        if rsi_4 != 0
        {
            'label_48cc7b:
            rdx_11 = arg2[0x18];
            rsi_5 = arg2[9];
            
            if arg2[8] == 1
            {
                rsi_5 *= 1;
            }
            else
            {
                'label_48cc9a:
                
                if *arg2.byte_offset(0xbf) != 1
                {
                    rsi_5 *= rax_13;
                }
            }
        }
        else
        {
            'label_48cc3b:
            rsi_5 = arg2[9];
            
            if arg2[8] != 1
            {
                goto 'label_48cc9a;
            }
            
            rsi_5 *= 1;
        }
        
        let mut rdi_8: i64 = arg2[0xb];
        let mut r8_2: i64 = 1;
        
        if arg2[0xa] != 1
        {
            r8_2 = rcx_2;
        }
        
        if arg2[0xa] == 1 || *arg2.byte_offset(0xcf) != 1
        {
            rdi_8 *= r8_2;
        }
        
        let zmm0: u128 = r11;
        let mut r8_3: i64 = arg2[0xc];
        
        if r8_3 != 2
        {
            r11 = arg2[0xd];
            
            if (r8_3 & 1) == 0 && *arg2.byte_offset(0xbe) != 0
            {
                r8_3 = 1;
            }
        }
        else
        {
            r8_3 = 2;
        }
        
        arg1[4] = arg2[0x10];
        *arg1.byte_offset(0x10) = *arg2.byte_offset(0x70);
        arg1[7] = arg2[0x13];
        *arg1.byte_offset(0x28) = *arg2.byte_offset(0x88);
        *arg1.byte_offset(0x40) = *arg2.byte_offset(0xb0);
        *arg1.byte_offset(0x9d) = arg2[0x19];
        *arg1.byte_offset(0x96) = *arg2.byte_offset(0xc1);
        *arg1 = r8_3;
        arg1[1] = r11;
        let var_40: i64;
        arg1[0xc] = var_40;
        *arg1.byte_offset(0x50) = var_50;
        arg1[0xd] = r10;
        *arg1.byte_offset(0x69) = var_68_1;
        *arg1.byte_offset(0x6a) = r9;
        *arg1.byte_offset(0x6b) = rdi_2;
        arg1[0xe] = rax_13;
        arg1[0xf] = rcx_2;
        arg1[0x10] = rsi_5;
        arg1[0x11] = rdi_8;
        arg1[0x12] = zmm0;
        *arg1.byte_offset(0x94) = r13;
        *arg1.byte_offset(0x95) = r8;
        *arg1.byte_offset(0xa5) = rdx_11;
        *arg1.byte_offset(0xa6) = arg2[0x1a];
    }
    
    arg1
}
