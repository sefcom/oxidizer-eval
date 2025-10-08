
  int64_t uu_ls::calculate_padding_collection::h3b8c962303b7ca71(int64_t* arg1, void* arg2, int64_t arg3, void* arg4, void* arg5)

{
    void* rbp = arg2;
    void* r14_1 = arg3 * 0x130 + arg2;
    char rax = *(arg4 + 0xf1);
    char rdx = *(arg4 + 0xf2);
    int64_t rax_1 = *(arg4 + 0xd8);
    char rax_2 = *(arg4 + 0xf9);
    int64_t result;
    int64_t rcx_3;
    int64_t rdx_6;
    int64_t rbx_2;
    int64_t rsi_23;
    int64_t r8;
    int64_t r9;
    int64_t r10_1;
    int64_t r13_3;
    int64_t var_88;
    int64_t var_78;
    
    if (*(arg4 + 0x100) == 1)
    {
        char rax_3 = *(arg4 + 0xf3);
        int64_t rax_4 = 1;
        int64_t result_1 = 1;
        int64_t r13 = 1;
        int64_t rbx_1 = 1;
        int64_t var_d8_1 = 1;
        int64_t var_c8_1;
        __builtin_memcpy(&var_c8_1, 
            "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00", 0x20);
        int64_t var_c0_1;
        int64_t var_b8_1;
        int64_t var_b0_1;
        
        while (true)
        {
            r10_1 = rbx_1;
            rbx_2 = r13;
            int64_t var_90_1 = rax_4;
            int64_t var_40_1;
            void* r12_1;
            
            if (!(rax & 1))
            {
                if (rbp == r14_1)
                    break;
                
                r12_1 = rbp + 0x130;
                var_40_1 = rbx_2;
                
                if (rdx & 1)
                {
                    label_59f605:
                    void* rax_6 = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(rbp, arg5);
                    
                    if (rax_6)
                    {
                        uu_ls::display_size::hb2e480a0d8619531(&var_88, 
                            uu_ls::get_block_size::hab622dcab93c70df(*(rax_6 + 0x38), 
                                *(rax_6 + 0x60), rax_1, rax_2), 
                            rax_2);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(
                            &var_88);
                        result_1 = core::cmp::Ord::max::h3082798d7e57ba36(var_78, result_1);
                    }
                }
            }
            else
            {
                void* i;
                
                do
                {
                    if (rbp == r14_1)
                    {
                        r13_3 = var_c8_1;
                        result = result_1;
                        rcx_3 = var_c0_1;
                        rdx_6 = var_d8_1;
                        rsi_23 = var_b0_1;
                        r8 = var_b8_1;
                        r9 = var_90_1;
                        goto label_59f9a2;
                    }
                    
                    r12_1 = rbp + 0x130;
                    i = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(rbp, arg5);
                    rbp = r12_1;
                } while (!i);
                
                uu_ls::display_inode::hb17e23d9a426a075(&var_88, *(i + 0x28));
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_88);
                var_c8_1 = core::cmp::Ord::max::h3082798d7e57ba36(var_78, var_c8_1);
                rbp = r12_1 - 0x130;
                var_40_1 = rbx_2;
                
                if (rdx & 1)
                    goto label_59f605;
            }
            
            int64_t rbx_7 = *(rbp + 0x40);
            uu_ls::display_dir_entry_size::h765544fbf6779e6b(&var_88, rbp, arg4, arg5);
            var_b8_1 = core::cmp::Ord::max::h3082798d7e57ba36(var_88, var_b8_1);
            int64_t var_80;
            var_b0_1 = core::cmp::Ord::max::h3082798d7e57ba36(var_80, var_b0_1);
            var_d8_1 = core::cmp::Ord::max::h3082798d7e57ba36(var_78, var_d8_1);
            
            if (rax_3 & 1)
                var_c0_1 = core::cmp::Ord::max::h3082798d7e57ba36(rbx_7, var_c0_1);
            
            rbp = r12_1;
            r13 = 0;
            rbx_1 = 0;
            rax_4 = 0;
            
            if (arg3 != 1)
            {
                int64_t var_68;
                rbx_1 = core::cmp::Ord::max::h3082798d7e57ba36(var_68, r10_1);
                int64_t var_60;
                r13 = core::cmp::Ord::max::h3082798d7e57ba36(var_60, var_40_1);
                int64_t var_70;
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
    else if (!(rdx & 1))
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
        
        if (rax & 1)
        {
            while (true)
            {
                void* rdi_26 = rbp;
                void* i_1;
                
                do
                {
                    if (rdi_26 == r14_1)
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
                        goto label_59f9a2;
                    }
                    
                    rbp = rdi_26 + 0x130;
                    i_1 = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(rdi_26, arg5);
                    rdi_26 = rbp;
                } while (!i_1);
                
                uu_ls::display_inode::hb17e23d9a426a075(&var_88, *(i_1 + 0x28));
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_88);
                rbx_2 = core::cmp::Ord::max::h3082798d7e57ba36(var_78, rbx_2);
            }
        }
    }
    else
    {
        int64_t result_2 = 1;
        r13_3 = 1;
        
        while (true)
        {
            void* rdi_18 = rbp;
            void* i_2;
            
            do
            {
                if (!(rax & 1))
                {
                    if (rdi_18 == r14_1)
                    {
                        label_59f93f:
                        rbx_2 = 1;
                        result = result_2;
                        r10_1 = 1;
                        r9 = 1;
                        r8 = 1;
                        rsi_23 = 1;
                        rdx_6 = 1;
                        rcx_3 = 1;
                        goto label_59f9a2;
                    }
                    
                    rbp = rdi_18 + 0x130;
                }
                else
                {
                    void* j;
                    
                    do
                    {
                        if (rdi_18 == r14_1)
                            goto label_59f93f;
                        
                        rbp = rdi_18 + 0x130;
                        j = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(rdi_18, arg5);
                        rdi_18 = rbp;
                    } while (!j);
                    
                    uu_ls::display_inode::hb17e23d9a426a075(&var_88, *(j + 0x28));
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(
                        &var_88);
                    r13_3 = core::cmp::Ord::max::h3082798d7e57ba36(var_78, r13_3);
                    rdi_18 = rbp - 0x130;
                }
                
                i_2 = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(rdi_18, arg5);
                rdi_18 = rbp;
            } while (!i_2);
            
            uu_ls::display_size::hb2e480a0d8619531(&var_88, 
                uu_ls::get_block_size::hab622dcab93c70df(*(i_2 + 0x38), *(i_2 + 0x60), rax_1, 
                    rax_2), 
                rax_2);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_88);
            result_2 = core::cmp::Ord::max::h3082798d7e57ba36(var_78, result_2);
        }
    }
    label_59f9a2:
    *arg1 = r13_3;
    arg1[1] = r8;
    arg1[2] = rsi_23;
    arg1[3] = rdx_6;
    arg1[4] = rcx_3;
    arg1[5] = r9;
    arg1[6] = r10_1;
    arg1[7] = rbx_2;
    arg1[8] = result;
    return result;
}
