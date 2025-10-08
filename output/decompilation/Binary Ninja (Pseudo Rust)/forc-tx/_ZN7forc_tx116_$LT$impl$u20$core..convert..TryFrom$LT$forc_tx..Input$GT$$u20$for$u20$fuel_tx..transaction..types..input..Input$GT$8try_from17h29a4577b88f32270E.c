
  fn forc_tx::_$LT$impl$u20$core..convert..TryFrom$LT$forc_tx..Input$GT$$u20$for$u20$fuel_tx..transaction..types..input..Input$GT$::try_from::h29a4577b88f32270(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let mut r12: u64 = -0x8000000000000000;
    let mut rcx_1: i64 = *arg2 ^ 0x8000000000000000;
    let mut rax: i64 = 2;
    
    if rcx_1 < 2
    {
        rax = rcx_1;
    }
    
    let mut var_1c4_1: u16;
    let mut var_1c0_1: u32;
    let mut var_1b8: i64;
    let mut var_1a8: u64;
    let mut var_1a0_1: u16;
    let mut var_198_1: i16;
    let mut var_190_1: u64;
    let mut var_188_1: u32;
    let mut var_178_1: u32;
    let mut var_170_1: u32;
    let mut var_168: u64;
    let mut var_150_1: u16;
    let mut var_148_1: u32;
    let mut var_138_1: u32;
    let mut var_118: u64;
    let mut var_110: u64;
    let var_108: u64;
    let var_100: u64;
    let mut var_e8_1: u32;
    let mut var_e0_1: u16;
    let mut var_d8: u64;
    let mut var_90: u64;
    let mut var_88: u64;
    let mut var_80: u64;
    let mut var_78: i64;
    let mut var_60: i64;
    let mut rax_10: u64;
    let mut rcx_7: u64;
    let mut rdx_1: u64;
    let mut rbp: u16;
    let mut rdi: u64;
    let mut r8_1: u64;
    let mut r9_1: u64;
    let mut r10_1: u64;
    let mut r11_1: u64;
    let mut r13_2: u64;
    let mut r14: u32;
    let mut r15: u64;
    
    if rax == 0
    {
        let rdx_2: u64 = arg2[0x13];
        let rdi_1: u64 = arg2[0x14];
        let r9_2: u64 = arg2[0x15];
        var_80 = arg2[0x16];
        var_168 = arg2[0x17];
        let mut var_160_1: u64 = arg2[7];
        let mut var_128_1: u64 = arg2[8];
        let mut var_120_1: u64 = arg2[9];
        let mut var_130_1: u64 = arg2[0xa];
        var_1a8 = arg2[0xb];
        r11_1 = arg2[0xc];
        r10_1 = arg2[0xd];
        let mut var_180_1: u64 = arg2[0xe];
        let mut var_158_1: u64 = arg2[0xf];
        let mut r8_2: u32 = arg2[0x10];
        var_148_1 = *arg2.byte_offset(0x84);
        var_118 = arg2[0x11];
        let rbp_1: i64 = arg2[1];
        let r14_1: i64 = arg2[2];
        let r13_3: i64 = arg2[4];
        let r15_1: i64 = arg2[5];
        let mut var_1b0_1: u64;
        let mut var_140_1: u32;
        let mut rax_24: u64;
        let mut rcx_11: u16;
        let mut rdi_2: u64;
        
        if (arg2[0x12] & 1) != 0
        {
            let rax_23: i64 = rbp_1 ^ 0x8000000000000000;
            
            if ((r13_3 ^ 0x8000000000000000) | rax_23) != 0
            {
                goto 'label_52a796;
            }
            
            var_1b0_1 = rdx_2;
            rcx_11 = *arg2.byte_offset(0x92);
            var_140_1 = rax_23;
            var_e0_1 = rax_23;
            var_190_1 = rdi_1;
            rdi_2 = r9_2;
            rax_24 = var_80;
            var_150_1 = var_148_1;
            var_1b8 = r8_2;
            var_188_1 = var_148_1;
            var_1c4_1 = arg2;
            var_138_1 = arg2;
            'label_52a474:
            var_e8_1 = rdi_2;
            var_1c0_1 = r8_2;
            var_1a0_1 = rcx_11;
            var_198_1 = rax_24;
            r13_2 = rax_24 >> 0x10;
            rbp = rdi_2 >> 0x20;
            var_178_1 = rdi_2 >> 0x30;
            var_170_1 = rax_24;
            rax_10 = var_128_1;
            r15 = var_160_1;
            rdi = var_130_1;
            r9_1 = var_120_1;
            rcx_7 = var_1b0_1;
            r8_1 = var_180_1;
            rdx_1 = var_158_1;
            r14 = var_140_1;
            goto 'label_52a4db;
        }
        
        let mut rax_21: u64;
        rax_21 = rbp_1 == -0x8000000000000000;
        rcx_1 = r13_3 == -0x8000000000000000;
        rcx_1 |= rax_21;
        
        if rcx_1 == 0
        {
            var_90 = r9_2;
            var_1b8 = r8_2;
            var_d8 = rdi_1;
            let rcx_32: i64 = arg2[3];
            let rax_84: i64 = arg2[6];
            var_78 = rbp_1;
            let var_70_1: i64 = r14_1;
            let var_68_1: i64 = rcx_32;
            var_60 = r13_3;
            let var_58_1: i64 = r15_1;
            let var_50_1: i64 = rax_84;
            std::fs::read::haeaee0c12cdc07fd(&var_110, &var_78);
            let rcx_33: u64 = var_110;
            
            if rcx_33 != -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$forc_tx..$LT$impl$u20$core..convert..TryFrom$LT$forc_tx..Input$GT$$u20$for$u20$fuel_tx..transaction..types..input..Input$GT$..try_from..$u7b$$u7b$closure$u7d$$u7d$$GT$::h463f3a0706b0b287(rbp_1, r14_1);
                std::fs::read::haeaee0c12cdc07fd(&var_110, &var_60);
                let rbp_4: u64 = var_110;
                
                if rbp_4 != -0x8000000000000000
                {
                    var_1c4_1 = rdx_2 >> 0x10;
                    var_138_1 = rdx_2 >> 0x20;
                    var_88 = var_168;
                    core::ptr::drop_in_place$LT$forc_tx..$LT$impl$u20$core..convert..TryFrom$LT$forc_tx..Input$GT$$u20$for$u20$fuel_tx..transaction..types..input..Input$GT$..try_from..$u7b$$u7b$closure$u7d$$u7d$$GT$::h463f3a0706b0b287(r13_3, r15_1);
                    var_150_1 = var_130_1 >> 0x20;
                    r8_2 = var_130_1;
                    rcx_11 = var_158_1 >> 0x10;
                    var_188_1 = var_158_1 >> 0x20;
                    r12 = -0x7fffffffffffffff;
                    var_140_1 = rdx_2;
                    var_e0_1 = var_130_1 >> 0x30;
                    var_1b0_1 = var_1a8;
                    var_190_1 = r11_1;
                    var_130_1 = rbp_4;
                    rdi_2 = r10_1;
                    rax_24 = var_180_1;
                    var_1a8 = var_120_1;
                    var_168 = var_158_1;
                    r11_1 = var_108;
                    r10_1 = var_100;
                    var_180_1 = var_160_1;
                    var_158_1 = var_128_1;
                    var_120_1 = var_100;
                    var_160_1 = rcx_33;
                    var_128_1 = var_108;
                    goto 'label_52a474;
                }
                
                arg1[1] = 2;
                arg1[2] = var_108;
                arg1[3] = r13_3;
                arg1[4] = r15_1;
                arg1[5] = rax_84;
                *arg1 = -0x7ffffffffffffffa;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h420b33f3a20bf669(
                    rcx_33, var_108);
            }
            else
            {
                arg1[1] = 1;
                arg1[2] = var_108;
                arg1[3] = rbp_1;
                arg1[4] = r14_1;
                arg1[5] = rcx_32;
                *arg1 = -0x7ffffffffffffffa;
                core::mem::drop::h395863031f54f8e3(r13_3, r15_1);
            }
        }
        else
        {
            'label_52a796:
            arg1[1] = 3;
            *arg1 = -0x7ffffffffffffffa;
            
            if rbp_1 != -0x8000000000000000
            {
                core::mem::drop::h395863031f54f8e3(rbp_1, r14_1);
            }
            
            if r13_3 != -0x8000000000000000
            {
                core::mem::drop::h395863031f54f8e3(r13_3, r15_1);
            }
        }
    }
    else
    {
        let mut rsi: u64;
        
        if rax != 1
        {
            let rax_46: u64 = arg2[9];
            let mut var_158_2: u64 = arg2[0xa];
            let rax_48: u64 = arg2[0xb];
            let rax_49: u64 = arg2[0xc];
            let rax_50: u64 = arg2[0xd];
            var_190_1 = arg2[0xe];
            let mut var_180_2: u64 = arg2[0xf];
            let rax_53: u64 = arg2[0x10];
            var_168 = arg2[0x11];
            var_1a8 = arg2[0x12];
            var_118 = arg2[0x13];
            let rax_57: u64 = arg2[0x14];
            var_d8 = arg2[0x15];
            let rax_59: i64 = arg2[2];
            let rbp_3: i16 = arg2[0x17];
            var_198_1 = *arg2.byte_offset(0xba);
            var_88 = arg2[0x16];
            let r14_2: i64 = arg2[3];
            let rax_62: i64 = arg2[4];
            let rax_63: i64 = arg2[5];
            let r13_6: i64 = arg2[6];
            var_1b8 = arg2[7];
            let rax_65: i64 = arg2[8];
            let mut var_48: i128 = *arg2;
            std::fs::read::haeaee0c12cdc07fd(&var_110, &var_48);
            let rdi_5: i64 = var_48;
            let rsi_2: i64 = *var_48[8];
            let rax_66: u64 = var_110;
            
            if rax_66 != -0x8000000000000000
            {
                let r15_4: u32 = var_180_2 >> 0x10;
                let mut var_c0_1: u16 = var_180_2 >> 0x20;
                var_178_1 = var_180_2 >> 0x30;
                let rcx_16: u32 = var_1a8 >> 0x10;
                var_148_1 = var_1a8 >> 0x20;
                var_170_1 = var_1a8 >> 0x30;
                var_1c4_1 = rax_57 >> 0x10;
                var_138_1 = rax_57 >> 0x20;
                core::ptr::drop_in_place$LT$forc_tx..$LT$impl$u20$core..convert..TryFrom$LT$forc_tx..Input$GT$$u20$for$u20$fuel_tx..transaction..types..input..Input$GT$..try_from..$u7b$$u7b$closure$u7d$$u7d$$GT$::h463f3a0706b0b287(rdi_5, rsi_2);
                let mut var_1b0_4: u64;
                let mut var_160_2: u64;
                let mut var_130_2: u64;
                let mut var_128_2: u64;
                let mut var_120_2: u64;
                let mut var_d0_2: u64;
                let mut var_c8_2: u64;
                let mut rcx_38: u64;
                
                if rbp_3 != 0
                {
                    if ((r14_2 ^ 0x8000000000000000) | (r13_6 ^ 0x8000000000000000)) != 0
                    {
                        goto 'label_52aa95;
                    }
                    
                    r13_2 = var_118;
                    
                    if var_100 != 0
                    {
                        var_e8_1 = var_1a8 | rcx_16 << 0x10;
                        let r15_6: u64 = var_198_1;
                        var_198_1 = r13_2;
                        r13_2 >>= 0x10;
                        var_e0_1 = var_178_1;
                        var_150_1 = var_c0_1;
                        var_1b8 = var_d8;
                        r12 = -0x7ffffffffffffffb;
                        var_1a8 = var_190_1;
                        r8_1 = rax_49;
                        rbp = var_148_1;
                        var_148_1 = var_d8 >> 0x20;
                        var_178_1 = var_170_1;
                        var_170_1 = var_d8 >> 0x30;
                        var_118 = r15_6;
                        rcx_7 = rax_53;
                        var_190_1 = var_168;
                        rdi = rax_46;
                        var_1c0_1 = var_180_2 | r15_4 << 0x10;
                        var_188_1 = var_138_1;
                        var_1a0_1 = var_1c4_1;
                        r11_1 = var_158_2;
                        r10_1 = rax_48;
                        rdx_1 = rax_50;
                        r9_1 = var_100;
                        r15 = rax_66;
                        rax_10 = var_108;
                        r14 = rax_57;
                        rsi = r14;
                        var_168 = rsi;
                        goto 'label_52a33d;
                    }
                    
                    var_128_2 = var_158_2;
                    var_130_2 = rax_49;
                    var_d0_2 = var_190_1;
                    var_c0_1 = var_168 >> 0x20;
                    let rax_119: u32 = var_168 >> 0x30;
                    var_178_1 = rax_119;
                    r12 = -0x7ffffffffffffffd;
                    var_148_1 = rax_119;
                    var_170_1 = rax_119;
                    rcx_38 = r13_2;
                    var_1b0_4 = rax_57;
                    var_190_1 = var_d8;
                    var_c8_2 = rax_50;
                    var_158_2 = rax_53;
                    var_120_2 = rax_48;
                    var_160_2 = rax_46;
                    var_188_1 = rax_46;
                    var_1a0_1 = rax_46;
                    var_1c4_1 = rax_46;
                    var_e8_1 = var_168;
                    var_138_1 = rax_46;
                    'label_52aea0:
                    var_1c0_1 = rcx_38;
                    var_150_1 = rcx_38 >> 0x20;
                    var_e0_1 = rcx_38 >> 0x30;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h420b33f3a20bf669(
                        rax_66, var_108);
                    var_90 = var_88;
                    rdx_1 = var_158_2;
                    r14 = rax_57;
                    r8_1 = var_180_2;
                    rax_10 = var_128_2;
                    r15 = var_160_2;
                    rdi = var_130_2;
                    r9_1 = var_120_2;
                    r11_1 = var_c8_2;
                    r10_1 = var_d0_2;
                    rbp = var_c0_1;
                    rcx_7 = var_1b0_4;
                    goto 'label_52a4db;
                }
                
                if (r14_2 == -0x8000000000000000 | r13_6 == -0x8000000000000000) == 0
                {
                    var_78 = r14_2;
                    let var_70_2: i64 = rax_62;
                    let var_68_2: i64 = rax_63;
                    var_60 = r13_6;
                    let var_58_2: i64 = var_1b8;
                    let var_50_2: i64 = rax_65;
                    std::fs::read::haeaee0c12cdc07fd(&var_110, &var_78);
                    let rax_95: u64 = var_110;
                    
                    if rax_95 != -0x8000000000000000
                    {
                        var_160_2 = rax_95;
                        var_120_2 = var_100;
                        core::ptr::drop_in_place$LT$forc_tx..$LT$impl$u20$core..convert..TryFrom$LT$forc_tx..Input$GT$$u20$for$u20$fuel_tx..transaction..types..input..Input$GT$..try_from..$u7b$$u7b$closure$u7d$$u7d$$GT$::h463f3a0706b0b287(r14_2, rax_62);
                        std::fs::read::haeaee0c12cdc07fd(&var_110, &var_60);
                        let rax_109: u64 = var_110;
                        
                        if rax_109 == -0x8000000000000000
                        {
                            arg1[1] = 2;
                            arg1[2] = var_108;
                            arg1[3] = r13_6;
                            arg1[4] = var_1b8;
                            arg1[5] = rax_65;
                            *arg1 = -0x7ffffffffffffffa;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h420b33f3a20bf669(var_160_2, var_108);
                            goto 'label_52adbb;
                        }
                        
                        var_130_2 = rax_109;
                        var_128_2 = var_108;
                        core::ptr::drop_in_place$LT$forc_tx..$LT$impl$u20$core..convert..TryFrom$LT$forc_tx..Input$GT$$u20$for$u20$fuel_tx..transaction..types..input..Input$GT$..try_from..$u7b$$u7b$closure$u7d$$u7d$$GT$::h463f3a0706b0b287(r13_6, var_1b8);
                        
                        if var_100 == 0
                        {
                            var_d0_2 = var_100;
                            var_c8_2 = var_108;
                            var_e8_1 = var_180_2 | r15_4 << 0x10;
                            r13_2 = rax_53 >> 0x10;
                            var_1b8 = var_1a8 | rcx_16 << 0x10;
                            var_1a0_1 = var_168 >> 0x10;
                            var_188_1 = var_168 >> 0x20;
                            r12 = -0x7ffffffffffffffc;
                            var_1b0_4 = rax_50;
                            var_198_1 = rax_53;
                            var_1a8 = rax_48;
                            var_180_2 = rax_46;
                            rcx_38 = rax_49;
                            goto 'label_52aea0;
                        }
                        
                        var_188_1 = var_c0_1 | var_178_1 << 0x10;
                        var_138_1 = var_148_1 | var_170_1 << 0x10;
                        var_150_1 = var_158_2 >> 0x20;
                        var_e0_1 = var_158_2 >> 0x30;
                        var_1a0_1 = r15_4;
                        var_198_1 = var_190_1;
                        r13_2 = var_190_1 >> 0x10;
                        var_190_1 = rax_49;
                        var_1c0_1 = var_158_2;
                        rdx_1 = var_100;
                        r10_1 = var_130_2;
                        var_90 = rax_57;
                        var_80 = var_d8;
                        var_d8 = var_118;
                        var_118 = var_168;
                        var_168 = var_180_2;
                        r8_1 = var_108;
                        var_1b8 = rax_53;
                        var_148_1 = rax_53 >> 0x20;
                        var_170_1 = rax_53 >> 0x30;
                        r14 = var_1a8;
                        rcx_7 = rax_48;
                        rdi = var_128_2;
                        var_178_1 = rax_50 >> 0x30;
                        var_1a8 = rax_46;
                        r11_1 = var_120_2;
                        var_1c4_1 = rcx_16;
                        rbp = rax_50 >> 0x20;
                        var_e8_1 = rax_50;
                        r9_1 = var_160_2;
                        r15 = var_108;
                        rax_10 = var_100;
                        r12 = rax_66;
                        goto 'label_52a4db;
                    }
                    
                    arg1[1] = 1;
                    arg1[2] = var_108;
                    arg1[3] = r14_2;
                    arg1[4] = rax_62;
                    arg1[5] = rax_63;
                    *arg1 = -0x7ffffffffffffffa;
                    core::mem::drop::h395863031f54f8e3(r13_6, var_1b8);
                    'label_52adbb:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h420b33f3a20bf669(
                        rax_66, var_108);
                }
                else
                {
                    'label_52aa95:
                    arg1[1] = 3;
                    *arg1 = -0x7ffffffffffffffa;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h420b33f3a20bf669(
                        rax_66, var_108);
                    
                    if r14_2 != -0x8000000000000000
                    {
                        core::mem::drop::h395863031f54f8e3(r14_2, rax_62);
                    }
                    
                    if r13_6 != -0x8000000000000000
                    {
                        core::mem::drop::h395863031f54f8e3(r13_6, var_1b8);
                    }
                }
            }
            else
            {
                arg1[1] = 0;
                arg1[2] = var_108;
                arg1[3] = rdi_5;
                arg1[4] = rsi_2;
                arg1[5] = rax_59;
                *arg1 = -0x7ffffffffffffffa;
                core::ptr::drop_in_place$LT$forc_tx..Predicate$GT$::h6c0f0d5c8723ee41(&arg2[3]);
            }
        }
        else
        {
            var_198_1 = arg2[0xe];
            r13_2 = *arg2.byte_offset(0x76) << 0x20 | *arg2.byte_offset(0x72);
            var_168 = arg2[0xf];
            var_1a0_1 = *arg2.byte_offset(0x7a);
            var_188_1 = *arg2.byte_offset(0x7c);
            var_1b8 = arg2[0x10];
            var_148_1 = *arg2.byte_offset(0x84);
            var_170_1 = *arg2.byte_offset(0x86);
            var_118 = arg2[0x11];
            r14 = arg2[0x12];
            r15 = arg2[1];
            rax_10 = arg2[2];
            r9_1 = arg2[3];
            rdi = arg2[4];
            r11_1 = arg2[5];
            r10_1 = arg2[6];
            r8_1 = arg2[7];
            rdx_1 = arg2[8];
            var_e8_1 = arg2[0xd];
            rbp = *arg2.byte_offset(0x6c);
            var_1a8 = arg2[9];
            var_1c0_1 = arg2[0xa];
            var_150_1 = *arg2.byte_offset(0x54);
            var_e0_1 = *arg2.byte_offset(0x56);
            rcx_7 = arg2[0xb];
            rsi = arg2[0xc];
            var_190_1 = rsi;
            r12 = -0x7ffffffffffffffe;
            var_178_1 = rsi;
            'label_52a33d:
            var_1c4_1 = rsi;
            var_138_1 = rsi;
            'label_52a4db:
            *arg1 = r12;
            arg1[1] = r15;
            arg1[2] = rax_10;
            arg1[3] = r9_1;
            arg1[4] = rdi;
            arg1[5] = r11_1;
            arg1[6] = r10_1;
            arg1[7] = r8_1;
            arg1[8] = rdx_1;
            arg1[9] = var_1a8;
            arg1[0xa] = var_1c0_1;
            *arg1.byte_offset(0x54) = var_150_1;
            *arg1.byte_offset(0x56) = var_e0_1;
            arg1[0xb] = rcx_7;
            arg1[0xc] = var_190_1;
            arg1[0xd] = var_e8_1;
            *arg1.byte_offset(0x6c) = rbp;
            *arg1.byte_offset(0x6e) = var_178_1;
            arg1[0xe] = var_198_1;
            *arg1.byte_offset(0x72) = r13_2;
            *arg1.byte_offset(0x76) = r13_2 >> 0x20;
            arg1[0xf] = var_168;
            *arg1.byte_offset(0x7a) = var_1a0_1;
            *arg1.byte_offset(0x7c) = var_188_1;
            arg1[0x10] = var_1b8;
            *arg1.byte_offset(0x84) = var_148_1;
            *arg1.byte_offset(0x86) = var_170_1;
            arg1[0x11] = var_118;
            arg1[0x12] = r14;
            *arg1.byte_offset(0x92) = var_1c4_1;
            *arg1.byte_offset(0x94) = var_138_1;
            arg1[0x13] = var_d8;
            arg1[0x14] = var_90;
            arg1[0x15] = var_80;
            arg1[0x16] = var_88;
        }
    }
    arg1
}
