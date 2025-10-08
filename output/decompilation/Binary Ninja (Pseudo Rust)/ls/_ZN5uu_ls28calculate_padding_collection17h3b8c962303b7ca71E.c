
  fn uu_ls::calculate_padding_collection::h3b8c962303b7ca71(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: *mut c_void, arg5: *mut c_void) -> i64

{
    let mut rbp: *mut c_void = arg2;
    let r14_1: *mut c_void = (arg3 * 0x130).byte_offset(arg2);
    let rax: i8 = *arg4.byte_offset(0xf1);
    let rdx: i8 = *arg4.byte_offset(0xf2);
    let rax_1: i64 = *arg4.byte_offset(0xd8);
    let rax_2: i8 = *arg4.byte_offset(0xf9);
    let mut result: i64;
    let mut rcx_3: i64;
    let mut rdx_6: i64;
    let mut rbx_2: i64;
    let mut rsi_23: i64;
    let mut r8: i64;
    let mut r9: i64;
    let mut r10_1: i64;
    let mut r13_3: i64;
    let mut var_88: i64;
    let var_78: i64;
    
    if *arg4.byte_offset(0x100) == 1
    {
        let rax_3: i8 = *arg4.byte_offset(0xf3);
        let mut rax_4: i64 = 1;
        let mut result_1: i64 = 1;
        let mut r13: i64 = 1;
        let mut rbx_1: i64 = 1;
        let mut var_d8_1: i64 = 1;
        let mut var_c8_1: i64;
        __builtin_memcpy(&var_c8_1, 
            "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00", 0x20);
        let mut var_c0_1: i64;
        let mut var_b8_1: i64;
        let mut var_b0_1: i64;
        
        loop
        {
            r10_1 = rbx_1;
            rbx_2 = r13;
            let var_90_1: i64 = rax_4;
            let mut var_40_1: i64;
            let mut r12_1: *mut c_void;
            
            if (rax & 1) == 0
            {
                if rbp == r14_1
                {
                    break;
                }
                
                r12_1 = rbp.byte_offset(0x130);
                var_40_1 = rbx_2;
                
                if (rdx & 1) != 0
                {
                    'label_59f605:
                    let rax_6: *mut c_void =
                        uu_ls::PathData::get_metadata::h14c40f15e3077b4f(rbp, arg5);
                    
                    if rax_6 != 0
                    {
                        uu_ls::display_size::hb2e480a0d8619531(&var_88, 
                            uu_ls::get_block_size::hab622dcab93c70df(*rax_6.byte_offset(0x38), 
                                *rax_6.byte_offset(0x60), rax_1, rax_2), 
                            rax_2);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(
                            &var_88);
                        result_1 = core::cmp::Ord::max::h3082798d7e57ba36(var_78, result_1);
                    }
                }
            }
            else
            {
                let mut i: *mut c_void;
                
                do
                {
                    if rbp == r14_1
                    {
                        r13_3 = var_c8_1;
                        result = result_1;
                        rcx_3 = var_c0_1;
                        rdx_6 = var_d8_1;
                        rsi_23 = var_b0_1;
                        r8 = var_b8_1;
                        r9 = var_90_1;
                        goto 'label_59f9a2;
                    }
                    
                    r12_1 = rbp.byte_offset(0x130);
                    i = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(rbp, arg5);
                    rbp = r12_1;
                } while i == 0;
                
                uu_ls::display_inode::hb17e23d9a426a075(&var_88, *i.byte_offset(0x28));
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_88);
                var_c8_1 = core::cmp::Ord::max::h3082798d7e57ba36(var_78, var_c8_1);
                rbp = r12_1.byte_offset(-0x130);
                var_40_1 = rbx_2;
                
                if (rdx & 1) != 0
                {
                    goto 'label_59f605;
                }
            }
            
            let rbx_7: i64 = *rbp.byte_offset(0x40);
            uu_ls::display_dir_entry_size::h765544fbf6779e6b(&var_88, rbp, arg4, arg5);
            var_b8_1 = core::cmp::Ord::max::h3082798d7e57ba36(var_88, var_b8_1);
            let var_80: i64;
            var_b0_1 = core::cmp::Ord::max::h3082798d7e57ba36(var_80, var_b0_1);
            var_d8_1 = core::cmp::Ord::max::h3082798d7e57ba36(var_78, var_d8_1);
            
            if (rax_3 & 1) != 0
            {
                var_c0_1 = core::cmp::Ord::max::h3082798d7e57ba36(rbx_7, var_c0_1);
            }
            
            rbp = r12_1;
            r13 = 0;
            rbx_1 = 0;
            rax_4 = 0;
            
            if arg3 != 1
            {
                let var_68: i64;
                rbx_1 = core::cmp::Ord::max::h3082798d7e57ba36(var_68, r10_1);
                let var_60: i64;
                r13 = core::cmp::Ord::max::h3082798d7e57ba36(var_60, var_40_1);
                let var_70: i64;
                rax_4 = core::cmp::Ord::max::h3082798d7e57ba36(
                    core::cmp::Ord::max::h3082798d7e57ba36(var_70, var_90_1), rbx_1);
                rbp = r12_1;
            }
        }
        
        r9 = rax_4;
        r13_3 = var_c8_1;
        result = result_1;
        rcx_3 = var_c0_1;
        rdx_6 = var_d8_1;
        rsi_23 = var_b0_1;
        r8 = var_b8_1;
    }
    else if (rdx & 1) == 0
    {
        result = 1;
        rbx_2 = 1;
        r10_1 = 1;
        r9 = 1;
        rcx_3 = 1;
        rdx_6 = 1;
        rsi_23 = 1;
        r8 = 1;
        r13_3 = 1;
        
        if (rax & 1) != 0
        {
            loop
            {
                let mut rdi_26: *mut c_void = rbp;
                let mut i_1: *mut c_void;
                
                do
                {
                    if rdi_26 == r14_1
                    {
                        result = 1;
                        arg1 = arg1;
                        r10_1 = 1;
                        r9 = 1;
                        r8 = 1;
                        rsi_23 = 1;
                        rdx_6 = 1;
                        rcx_3 = 1;
                        r13_3 = rbx_2;
                        rbx_2 = 1;
                        goto 'label_59f9a2;
                    }
                    
                    rbp = rdi_26.byte_offset(0x130);
                    i_1 = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(rdi_26, arg5);
                    rdi_26 = rbp;
                } while i_1 == 0;
                
                uu_ls::display_inode::hb17e23d9a426a075(&var_88, *i_1.byte_offset(0x28));
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_88);
                rbx_2 = core::cmp::Ord::max::h3082798d7e57ba36(var_78, rbx_2);
            }
        }
    }
    else
    {
        let mut result_2: i64 = 1;
        r13_3 = 1;
        
        loop
        {
            let mut rdi_18: *mut c_void = rbp;
            let mut i_2: *mut c_void;
            
            do
            {
                if (rax & 1) == 0
                {
                    if rdi_18 == r14_1
                    {
                        'label_59f93f:
                        rbx_2 = 1;
                        result = result_2;
                        r10_1 = 1;
                        r9 = 1;
                        r8 = 1;
                        rsi_23 = 1;
                        rdx_6 = 1;
                        rcx_3 = 1;
                        goto 'label_59f9a2;
                    }
                    
                    rbp = rdi_18.byte_offset(0x130);
                }
                else
                {
                    let mut j: *mut c_void;
                    
                    do
                    {
                        if rdi_18 == r14_1
                        {
                            goto 'label_59f93f;
                        }
                        
                        rbp = rdi_18.byte_offset(0x130);
                        j = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(rdi_18, arg5);
                        rdi_18 = rbp;
                    } while j == 0;
                    
                    uu_ls::display_inode::hb17e23d9a426a075(&var_88, *j.byte_offset(0x28));
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(
                        &var_88);
                    r13_3 = core::cmp::Ord::max::h3082798d7e57ba36(var_78, r13_3);
                    rdi_18 = rbp.byte_offset(-0x130);
                }
                
                i_2 = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(rdi_18, arg5);
                rdi_18 = rbp;
            } while i_2 == 0;
            
            uu_ls::display_size::hb2e480a0d8619531(&var_88, 
                uu_ls::get_block_size::hab622dcab93c70df(*i_2.byte_offset(0x38), 
                    *i_2.byte_offset(0x60), rax_1, rax_2), 
                rax_2);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_88);
            result_2 = core::cmp::Ord::max::h3082798d7e57ba36(var_78, result_2);
        }
    }
    'label_59f9a2:
    *arg1 = r13_3;
    arg1[1] = r8;
    arg1[2] = rsi_23;
    arg1[3] = rdx_6;
    arg1[4] = rcx_3;
    arg1[5] = r9;
    arg1[6] = r10_1;
    arg1[7] = rbx_2;
    arg1[8] = result;
    result
}
