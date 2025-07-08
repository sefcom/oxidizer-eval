
  fn uu_unexpand::unexpand_line::hfe287a3731b6a7af(arg1: *mut c_void, arg2: *mut i64, arg3: i8, arg4: i8, arg5: i64, arg6: *mut i64, arg7: i64) -> *mut *mut c_void

{
    let mut r13: *mut c_void = arg1;
    let mut rcx: i64 = *arg1.byte_offset(0x10);
    let mut var_90: i8;
    let mut var_88: u64;
    let mut result: *mut *mut c_void;
    let mut r14: u64;
    let mut r15_1: u64;
    
    if rcx == 0
    {
        var_90 = 1;
        r14 = 3;
        r15_1 = 0;
        var_88 = 0;
    }
    else
    {
        let mut r8: i64 = arg5 - 1;
        r14 = 3;
        var_90 = 1;
        let mut rbx_1: u64 = 0;
        let mut r12_1: i64 = 0;
        var_88 = 0;
        let var_80_1: *mut c_void = r13;
        let var_60_1: i64 = rcx;
        let var_50_1: i64 = r8;
        let mut rbp_1: i64;
        
        do
        {
            let var_91_1: i8 = r14;
            
            if r8 < rbx_1
            {
                uu_unexpand::write_tabs::h8e9e933eb88f89cf(arg2, arg6, arg7, var_88, rbx_1, 
                    var_91_1 == 2, var_90 & 1, 1);
                let r15_5: u64 = var_60_1 - r12_1;
                
                if var_60_1 < r12_1
                {
                    core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(r12_1, 
                        var_60_1);
                    /* no return */
                }
                
                let r12_3: i64 = r12_1 + *r13.byte_offset(8);
                let r13_3: i64 = arg2[2];
                
                if r15_5 < *arg2 - r13_3
                {
                    memcpy(arg2[1] + r13_3, r12_3, r15_5);
                    arg2[2] = r13_3 + r15_5;
                    r14 = var_91_1;
                    r15_1 = rbx_1;
                    var_88 = rbx_1;
                    r13 = var_80_1;
                    break;
                }
                
                result = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h37baa5ae29b8f289(arg2, r12_3, r15_5);
                r14 = var_91_1;
                r15_1 = rbx_1;
                var_88 = rbx_1;
                r13 = var_80_1;
                
                if result != 0
                {
                    return result;
                }
                
                break;
            }
            
            let mut rsi_1: i32;
            rsi_1 = arg4 != 0;
            let r14_1: *mut i8 = *r13.byte_offset(8);
            let mut var_48: i64;
            uu_unexpand::next_char_info::hda448420cf4eb947(&var_48, rsi_1, r14_1, rcx, r12_1);
            let var_40: i8;
            let mut r15_2: u64 = var_40;
            let var_38: i64;
            
            match jump_table_41d1f4[r15_2]
            {
                0x95a90 =>
                {
                    let r15_3: i64 = var_48;
                    uu_unexpand::write_tabs::h8e9e933eb88f89cf(arg2, arg6, arg7, var_88, rbx_1, 
                        var_91_1 == 2, var_90 & 1, arg3 != 0);
                    r15_1 = 0;
                    
                    if rbx_1 >= 1
                    {
                        r15_1 = rbx_1 - 1;
                    }
                    
                    if var_40 == 3
                    {
                        r15_1 = r15_3 + rbx_1;
                    }
                    
                    let r13_2: i64 = var_38 + r12_1;
                    let mut rax_6: i64;
                    let mut rdx_4: u64;
                    rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h794715884ecee730(r12_1, r13_2, r14_1, var_60_1);
                    let r14_2: i64 = arg2[2];
                    rbp_1 = r13_2;
                    
                    if rdx_4 >= *arg2 - r14_2
                    {
                        result = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h37baa5ae29b8f289(arg2, rax_6, rdx_4);
                        
                        if result != 0
                        {
                            return result;
                        }
                        
                        var_90 = 0;
                        var_88 = r15_1;
                        r13 = var_80_1;
                    }
                    else
                    {
                        memcpy(arg2[1] + r14_2, rax_6, rdx_4);
                        var_90 = 0;
                        r13 = var_80_1;
                        arg2[2] = rdx_4 + r14_2;
                        var_88 = r15_1;
                    }
                }
                0x95b6c =>
                {
                    let mut rax_7: i64;
                    let mut rdx_7: u64;
                    rax_7 = uu_unexpand::next_tabstop::h948056bd8ee01f21(arg6, arg7, rbx_1);
                    r15_2 = rdx_7;
                    
                    if rax_7 == 0
                    {
                        r15_2 = 1;
                    }
                    
                    goto 'label_4b2d8a;
                }
                0x95b90 =>
                {
                    'label_4b2d8a:
                    r15_1 = r15_2 + rbx_1;
                    rbp_1 = var_38 + r12_1;
                    
                    if ((var_90 & 1) | arg3) != 0
                    {
                        r13 = var_80_1;
                    }
                    else
                    {
                        let mut rax_9: i64;
                        let mut rdx_9: u64;
                        rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h794715884ecee730(r12_1, rbp_1, r14_1, var_60_1);
                        let r14_3: i64 = arg2[2];
                        r13 = var_80_1;
                        
                        if rdx_9 >= *arg2 - r14_3
                        {
                            result = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h37baa5ae29b8f289(arg2, rax_9, rdx_9);
                            var_88 = r15_1;
                            
                            if result != 0
                            {
                                return result;
                            }
                        }
                        else
                        {
                            memcpy(arg2[1] + r14_3, rax_9, rdx_9);
                            arg2[2] = rdx_9 + r14_3;
                            var_88 = r15_1;
                        }
                    }
                }
            }
            
            rbx_1 = r15_1;
            r12_1 = rbp_1;
            rcx = var_60_1;
            r8 = var_50_1;
            r14 = var_40;
        } while rbp_1 < rcx;
    }
    
    uu_unexpand::write_tabs::h8e9e933eb88f89cf(arg2, arg6, arg7, var_88, r15_1, r14 == 2, 
        var_90 & 1, 1);
    result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h0afaa565343b58bd(arg2);
    
    if result != 0
    {
        return result;
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::truncate::h60643c48044eaa26(r13, 0);
    nullptr
}
