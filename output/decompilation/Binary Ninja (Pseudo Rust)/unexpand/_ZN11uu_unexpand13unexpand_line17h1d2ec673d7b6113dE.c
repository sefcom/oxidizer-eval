
  fn uu_unexpand::unexpand_line::h1d2ec673d7b6113d(arg1: *mut c_void, arg2: *mut i64, arg3: i8, arg4: i8, arg5: i64, arg6: *mut i64, arg7: u64) -> u64

{
    let mut rdx: u64 = arg7;
    let mut rax: u64 = *arg1.byte_offset(0x10);
    let var_70: u64 = rax;
    let mut result: u64;
    let mut rcx_10: u64;
    let mut r11: u64;
    let mut r13: u64;
    
    if rax == 0
    {
        r13 = 3;
        rax = 1;
        r11 = 0;
        rcx_10 = 0;
    }
    else
    {
        let mut r8: i64 = arg5 - 1;
        let mut rdx_1: *mut i8 = *arg1.byte_offset(8);
        r13 = 3;
        rax = 1;
        let mut var_94_1: i32 = rax;
        r11 = 0;
        let mut r15_1: i64 = 0;
        let mut var_78_1: u64 = 0;
        let mut rbx_1: u64 = var_70;
        let var_88_1: *mut i8 = rdx_1;
        let var_50_1: i64 = r8;
        
        loop
        {
            let rbp_1: i32 = r13;
            
            if r8 < r11
            {
                result = uu_unexpand::write_tabs::h3aaaa01eda901830(arg2, arg6, arg7, var_78_1, 
                    r11, rbp_1 == 2, var_94_1, 1);
                
                if result != 0
                {
                    return result;
                }
                
                let rbx_6: u64 = rbx_1 - r15_1;
                let rsi_11: *mut c_void = &var_88_1[r15_1];
                let rbx_7: i64 = arg2[2];
                
                if rbx_6 >= *arg2 - rbx_7
                {
                    if std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hccae24ef141405a2(arg2, rsi_11, rbx_6) != 0
                    {
                        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    }
                    
                    r13 = rbp_1;
                    rcx_10 = r11;
                }
                else
                {
                    memcpy(arg2[1] + rbx_7, rsi_11, rbx_6);
                    arg2[2] = rbx_7 + rbx_6;
                    r13 = rbp_1;
                    rcx_10 = r11;
                }
                
                rdx = arg7;
                rax = var_94_1;
                break;
            }
            
            let mut var_48: u64;
            uu_unexpand::next_char_info::hde71cd1c734c3431(&var_48, arg4, rdx_1, rbx_1, r15_1);
            let var_40: i8;
            r13 = var_40;
            let mut rdx_2: u64 = r13;
            let mut var_90_2: u64;
            let var_38: i64;
            let mut rbx_4: i64;
            let mut r11_1: u64;
            let mut r14_2: i64;
            
            match rdx_2
            {
                0 | 3 =>
                {
                    let rbx_2: u64 = var_48;
                    result = uu_unexpand::write_tabs::h3aaaa01eda901830(arg2, arg6, arg7, var_78_1, 
                        r11, rbp_1 == 2, var_94_1, arg3);
                    
                    if result != 0
                    {
                        return result;
                    }
                    
                    if r13 != 3
                    {
                        let mut rcx_6: u64 = r11 - 1;
                        
                        if r11 < 1
                        {
                            rcx_6 = 0;
                        }
                        
                        var_90_2 = rcx_6;
                    }
                    else
                    {
                        var_90_2 = r11 + rbx_2;
                    }
                    
                    r14_2 = var_38 + r15_1;
                    let mut rax_9: i64;
                    let mut rdx_9: u64;
                    rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h148ae85790082177(r15_1, r14_2, var_88_1, var_70);
                    let r15_3: i64 = arg2[2];
                    
                    if rdx_9 < *arg2 - r15_3
                    {
                        memcpy(arg2[1] + r15_3, rax_9, rdx_9);
                        rbx_4 = rdx_9 + r15_3;
                        var_94_1 = 0;
                        goto 'label_45d0c9;
                    }
                    
                    if std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hccae24ef141405a2(arg2, rax_9, rdx_9) != 0
                    {
                        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    }
                    
                    var_94_1 = 0;
                    goto 'label_45d0ce;
                }
                1 =>
                {
                    r11_1 = r11;
                    'label_45d000:
                    r11 = r11_1 + rdx_2;
                    r14_2 = var_38 + r15_1;
                    
                    if ((var_94_1 | arg3) & 1) != 0
                    {
                        rdx_1 = var_88_1;
                    }
                    else
                    {
                        var_90_2 = r11;
                        let mut rax_8: i64;
                        let mut rdx_6: u64;
                        rax_8 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h148ae85790082177(r15_1, r14_2, var_88_1, rbx_1);
                        let r15_2: i64 = arg2[2];
                        
                        if rdx_6 >= *arg2 - r15_2
                        {
                            r11 = var_90_2;
                            var_78_1 = r11;
                            rbx_1 = var_70;
                            rdx_1 = var_88_1;
                            
                            if std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hccae24ef141405a2(arg2, rax_8, rdx_6) != 0
                            {
                                return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                            }
                        }
                        else
                        {
                            memcpy(arg2[1] + r15_2, rax_8, rdx_6);
                            rbx_4 = rdx_6 + r15_2;
                            'label_45d0c9:
                            arg2[2] = rbx_4;
                            'label_45d0ce:
                            r11 = var_90_2;
                            var_78_1 = r11;
                            rbx_1 = var_70;
                            rdx_1 = var_88_1;
                        }
                    }
                }
                2 =>
                {
                    let mut rax_6: i8;
                    rax_6 = uu_unexpand::next_tabstop::h080f73c87180f742(arg6, arg7, r11);
                    r11_1 = r11;
                    
                    if (rax_6 & 1) == 0
                    {
                        rdx_2 = 1;
                    }
                    
                    goto 'label_45d000;
                }
            }
            
            r15_1 = r14_2;
            r8 = var_50_1;
            
            if r14_2 >= rbx_1
            {
                rdx = arg7;
                rax = var_94_1;
                rcx_10 = var_78_1;
                break;
            }
        }
    }
    
    result = uu_unexpand::write_tabs::h3aaaa01eda901830(arg2, arg6, rdx, rcx_10, r11, r13 == 2, 
        rax & 1, 1);
    
    if result != 0
    {
        return result;
    }
    
    if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3d4ee5ad78dae975(arg2) != 0
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
    }
    
    *arg1.byte_offset(0x10) = 0;
    0
}
