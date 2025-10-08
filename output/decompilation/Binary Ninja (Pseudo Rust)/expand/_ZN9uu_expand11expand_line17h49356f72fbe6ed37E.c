
  fn uu_expand::expand_line::h49356f72fbe6ed37(arg1: *mut c_void, arg2: *mut i64, arg3: *mut i64, arg4: i64, arg5: *mut c_void) -> ssize_t

{
    let mut rbx: u64;
    let var_30: u64 = rbx;
    let mut rcx: i64 = *arg1.byte_offset(0x10);
    let mut rax_18: ssize_t;
    
    if rcx != 0
    {
        let rax_1: i8 = *arg5.byte_offset(0x49);
        let rax_3: *mut i8 = *arg1.byte_offset(8);
        let rax_4: i8 = *arg5.byte_offset(0x4a);
        let rdx: *mut i8 = *arg5.byte_offset(0x38);
        let var_58_1: i64 = *arg5.byte_offset(0x40);
        let mut rax_5: u32;
        rax_5 = *arg5.byte_offset(0x48) ^ 1;
        let var_ab_1: i8 = rax_5;
        rax_5 = 1;
        let mut var_9c_1: u32 = rax_5;
        let mut var_98_1: i64 = 0;
        let mut r15_1: i64 = 0;
        let var_a8_1: i64 = rcx;
        
        do
        {
            let rsi: i8 = rax_3[r15_1];
            let mut r13_1: i64;
            let mut var_78: i32;
            let var_70: i64;
            let var_68: u64;
            let mut rax_7: u64;
            let mut rdx_1: i64;
            let mut rdx_5: *mut i8;
            let mut rbx_2: i32;
            let mut rsi_4: u64;
            let mut rdi_2: i64;
            
            if rax_1 == 0
            {
                rdx_1 = rsi != 8;
                rax_7 = 1;
                
                if rsi != 9
                {
                    let mut rbx_1: i32;
                    rbx_1 = rdx_1;
                    rbx_2 = rbx_1 * 2;
                    'label_45d594:
                    r13_1 = 1;
                    'label_45d59a:
                    
                    if rbx_2 == 1
                    {
                        goto 'label_45d627;
                    }
                    
                    if rbx_2 == 2
                    {
                        goto 'label_45d5a8;
                    }
                    
                    let mut rdx_15: i64 = var_98_1 - 1;
                    
                    if var_98_1 < 1
                    {
                        rdx_15 = 0;
                    }
                    
                    var_98_1 = rdx_15;
                    goto 'label_45d5b7;
                }
                
                r13_1 = 1;
                'label_45d627:
                let rax_10: u64 =
                    uu_expand::next_tabstop::hf3e7dbb48d26e5ad(arg3, arg4, var_98_1, rax_4);
                var_98_1 += rax_10;
                
                if ((var_9c_1 | var_ab_1) & 1) == 0
                {
                    let mut rax_14: i64;
                    let mut rdx_11: u64;
                    rax_14 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h04d82ad3fffd2dd8(r15_1, r15_1 + r13_1, rax_3, var_a8_1);
                    rbx = arg2[2];
                    
                    if rdx_11 >= *arg2 - rbx
                    {
                        rax_18 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hecf72c601b7ca3f8(arg2, rax_14, rdx_11);
                        
                        if rax_18 != 0
                        {
                            return rax_18;
                        }
                    }
                    else
                    {
                        memcpy(arg2[1] + rbx, rax_14, rdx_11);
                        arg2[2] = rdx_11 + rbx;
                    }
                    
                    var_9c_1 = 0;
                    rcx = var_a8_1;
                }
                else
                {
                    rcx = var_58_1;
                    
                    if rax_10 <= rcx
                    {
                        rdi_2 = 0;
                        rsi_4 = rax_10;
                        rdx_5 = rdx;
                        goto 'label_45d5d5;
                    }
                    
                    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h6af23d6fde4d821e(&var_78, 
                        rax_10);
                    let rax_11: i64 = var_78;
                    rbx = arg2[2];
                    let mut rbp_1: i64;
                    
                    if var_68 >= *arg2 - rbx
                    {
                        rbp_1 = var_70;
                        let rax_19: ssize_t = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hecf72c601b7ca3f8(arg2, var_70, var_68);
                        
                        if rax_19 != 0
                        {
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec05db6bc18b7f0(rax_11, rbp_1);
                            return rax_19;
                        }
                    }
                    else
                    {
                        rbp_1 = var_70;
                        memcpy(arg2[1] + rbx, var_70, var_68);
                        rbx += var_68;
                        arg2[2] = rbx;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec05db6bc18b7f0(
                        rax_11, rbp_1);
                    rcx = var_a8_1;
                }
            }
            else
            {
                let mut r12_1: i64;
                r12_1 = rsi < 0;
                r13_1 = 1;
                
                if r12_1 + r15_1 + 1 <= rcx
                {
                    let mut rax_8: *mut i8;
                    let mut rdx_3: i64;
                    rax_8 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h04d82ad3fffd2dd8(r15_1, r12_1 + r15_1 + 1, rax_3, rcx);
                    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_78, rax_8, rdx_3);
                    
                    if var_78 == 1
                    {
                        rax_7 = 1;
                        rcx = var_a8_1;
                        goto 'label_45d5a8;
                    }
                    
                    let mut var_40: i64 = var_70;
                    let var_38_1: i64 = var_68 + var_70;
                    let mut rax_16: i8;
                    let mut rdx_13: i32;
                    rax_16 =
                        core::str::validations::next_code_point::h4b26a3f38a1a709d(&var_40, rbx);
                    
                    if (rax_16 & 1) == 0
                    {
                        rdx_13 = 0x110000;
                    }
                    
                    if rdx_13 == 8
                    {
                        rbx_2 = 0;
                        rax_7 = 0;
                        rcx = var_a8_1;
                        r13_1 = r12_1 + 1;
                        goto 'label_45d59a;
                    }
                    
                    rcx = var_a8_1;
                    
                    if rdx_13 == 9
                    {
                        rbx_2 = 1;
                        rax_7 = 0;
                        r13_1 = r12_1 + 1;
                        goto 'label_45d59a;
                    }
                    
                    rax_7 = 1;
                    rbx_2 = 2;
                    
                    if rdx_13 == 0x110000
                    {
                        goto 'label_45d594;
                    }
                    
                    if rdx_13 < 0x7f
                    {
                        rax_7 = rdx_13 >= 0x20;
                        r13_1 = r12_1 + 1;
                    }
                    else if rdx_13 < 0xa0
                    {
                        rax_7 = 0;
                        r13_1 = r12_1 + 1;
                    }
                    else
                    {
                        rcx = var_a8_1;
                        rax_7 = unicode_width::tables::lookup_width::h2b8e7fd08bce4cb3(rdx_13);
                        r13_1 = r12_1 + 1;
                    }
                    
                    goto 'label_45d59a;
                }
                
                rax_7 = 1;
                'label_45d5a8:
                var_98_1 += rax_7;
                'label_45d5b7:
                rax_7 = rax_3[r15_1] == 0x20;
                let mut rdx_4: u32;
                rdx_4 = var_9c_1 & rax_7;
                var_9c_1 = rdx_4;
                rsi_4 = r15_1 + r13_1;
                rdi_2 = r15_1;
                rdx_5 = rax_3;
                'label_45d5d5:
                let mut rax_9: i64;
                let mut rdx_6: u64;
                rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h04d82ad3fffd2dd8(rdi_2, rsi_4, rdx_5, rcx);
                rbx = arg2[2];
                
                if rdx_6 >= *arg2 - rbx
                {
                    rax_18 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hecf72c601b7ca3f8(arg2, rax_9, rdx_6);
                    rcx = var_a8_1;
                    
                    if rax_18 != 0
                    {
                        return rax_18;
                    }
                }
                else
                {
                    memcpy(arg2[1] + rbx, rax_9, rdx_6);
                    arg2[2] = rdx_6 + rbx;
                    rcx = var_a8_1;
                }
            }
            r15_1 += r13_1;
        } while r15_1 < rcx;
    }
    
    rax_18 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::habf18e17bcf986f2(arg2);
    
    if rax_18 != 0
    {
        return rax_18;
    }
    
    *arg1.byte_offset(0x10) = 0;
    0
}
