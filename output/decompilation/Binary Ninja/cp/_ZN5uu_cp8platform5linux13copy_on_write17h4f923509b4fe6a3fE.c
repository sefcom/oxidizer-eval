
  int64_t* uu_cp::platform::linux::copy_on_write::h4f923509b4fe6a3f(int64_t* arg1, uint64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, char arg6, char arg7, int64_t arg8, int64_t arg9, char arg10)

{
    uint64_t rbp;
    uint64_t r12;
    uint64_t r13;
    void** r14_1;
    
    if (!arg6)
    {
        if (arg7 == 1)
        {
            rbp = 0;
            r14_1 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(arg2, arg3, arg4, arg5, 0);
            r12 = 2;
            r13 = 1;
            label_513b3c:
            
            if (!r14_1)
                goto label_513b8d;
            
            goto label_513b4e;
        }
        
        _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h3a818a2f4f98d944(arg1, "`--reflink=always` can be used o…", 0x36);
    }
    else
    {
        int64_t var_50;
        int64_t var_48;
        char var_38_3;
        void** rax_16;
        void** rdx_1;
        
        if (arg6 == 1)
        {
            if (!arg7)
            {
                if (arg10)
                {
                    int64_t rax_5;
                    rax_5 = uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(arg2, 
                        arg3, arg4);
                    
                    if (rax_5)
                        goto label_51387a;
                    
                    rbp = 3;
                    r12 = 4;
                    r13 = 2;
                    goto label_513b8d;
                }
                
                uu_cp::platform::linux::handle_reflink_auto_sparse_always::h5f3f09720d2fa6c3(
                    &var_50, arg2, arg3, arg4);
                char rax_13 = var_50;
                var_38_3 = rax_13;
                
                if (!rax_13)
                {
                    rbp = *var_50[1];
                    r12 = *var_50[2];
                    r13 = *var_50[3];
                    
                    if (*var_50[4] != 1)
                        rax_16 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(arg2, arg3, arg4, 
                            arg5, 2);
                    else
                        rax_16 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(arg2, arg3, arg4, 
                            arg5, 1);
                }
                else
                {
                    r13 = 2;
                    r12 = 4;
                    rbp = 0;
                    rax_16 =
                        uu_cp::platform::linux::clone::hdce2a0051aad38c1(arg2, arg3, arg4, arg5, 2);
                }
                
                goto label_513b2a;
            }
            
            if (arg7 != 1)
            {
                if (arg10)
                    goto label_513870;
                
                uu_cp::platform::linux::handle_reflink_auto_sparse_never::hbf2c8fb4c904c675(
                    &var_50);
                char rax_6 = var_50;
                char rbp_1 = *var_50[1];
                char rax_7 = *var_50[2];
                char rax_8 = *var_50[3];
                r14_1 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(arg2, arg3, arg4, arg5, 1);
                rbp = rbp_1;
                
                if (rax_6)
                    rbp = 0;
                
                r12 = rax_7;
                
                if (rax_6)
                    r12 = 1;
                
                r13 = rax_8;
                
                if (rax_6)
                    r13 = 1;
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_cp..CopyDebug$C$std..io..error..Error$GT$$GT$::h667acd789a27d2af(rax_6, var_48);
                goto label_513b3c;
            }
            
            if (arg10)
            {
                int64_t rax_2;
                rax_2 =
                    uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(arg2, arg3, arg4);
                
                if (rax_2)
                    goto label_51387a;
                
                r12 = 4;
                r13 = 1;
                rbp = 4;
                goto label_513b8d;
            }
            
            uu_cp::platform::linux::handle_reflink_auto_sparse_auto::h1e687e1533235ec7(&var_50, 
                arg2, arg3, arg4);
            char rax_12 = var_50;
            var_38_3 = rax_12;
            
            if (!rax_12)
            {
                rbp = *var_50[1];
                r12 = *var_50[2];
                r13 = *var_50[3];
                
                if (*var_50[4] != 3)
                    rax_16 =
                        uu_cp::platform::linux::clone::hdce2a0051aad38c1(arg2, arg3, arg4, arg5, 1);
                else
                    rax_16 =
                        uu_cp::platform::linux::clone::hdce2a0051aad38c1(arg2, arg3, arg4, arg5, 3);
            }
            else
            {
                r13 = 1;
                r12 = 4;
                rbp = 0;
                rax_16 =
                    uu_cp::platform::linux::clone::hdce2a0051aad38c1(arg2, arg3, arg4, arg5, 1);
            }
            
            goto label_513b2a;
        }
        
        int64_t rsi_14;
        char rdi_24;
        
        if (arg7)
        {
            if (arg7 == 1)
            {
                if (arg10)
                    goto label_513870;
                
                uu_cp::platform::linux::handle_reflink_never_sparse_auto::h6d31da0e17b67b00(
                    &var_50, arg2, arg3, arg4);
                char rax_4 = var_50;
                
                if (!rax_4)
                {
                    rbp = *var_50[1];
                    r12 = *var_50[2];
                    r13 = *var_50[3];
                    
                    if (*var_50[4] != 3)
                        goto label_513ab1;
                    
                    r14_1 = uu_cp::platform::linux::sparse_copy_without_hole::h5128473705372174(
                        arg2, arg3, arg4);
                    rsi_14 = var_48;
                    rdi_24 = 0;
                    goto label_513b37;
                }
                
                r12 = 1;
                rbp = 0;
                r13 = 1;
                label_513ab1:
                int64_t rax_18;
                void** rdx_15;
                rax_18 = std::fs::copy::h82e95226cca79e6a(arg2, arg3, arg4);
                
                if (!rax_18)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::ha7a49f29e481f844(rax_4, var_48);
                    goto label_513b8d;
                }
                
                r14_1 = rdx_15;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::ha7a49f29e481f844(rax_4, var_48);
                goto label_513b4e;
            }
            
            if (arg10)
            {
                label_513870:
                int64_t rax_11;
                rax_11 =
                    uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(arg2, arg3, arg4);
                
                if (!rax_11)
                {
                    rbp = 3;
                    r13 = 1;
                    r12 = 1;
                    goto label_513b8d;
                }
                
                goto label_51387a;
            }
            
            int64_t var_58_5 = arg5;
            char var_38;
            var_38 = arg4;
            uu_cp::platform::linux::handle_reflink_never_sparse_never::h95a3d86a0846d4cd(&var_50);
            char rcx_7 = var_50;
            r13 = *var_50[3];
            
            if (rcx_7)
                r13 = 1;
            
            r12 = *var_50[2];
            
            if (rcx_7)
                r12 = 1;
            
            rbp = *var_50[1];
            
            if (rcx_7)
                rbp = 0;
            
            int64_t rax_15;
            void** rdx_8;
            rax_15 = std::fs::copy::h82e95226cca79e6a(arg2, arg3, var_38);
            
            if (!rax_15)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_cp..CopyDebug$C$std..io..error..Error$GT$$GT$::h667acd789a27d2af(rcx_7, var_48);
                goto label_513b8d;
            }
            
            r14_1 = rdx_8;
            core::ptr::drop_in_place$LT$core..result..Result$LT$uu_cp..CopyDebug$C$std..io..error..Error$GT$$GT$::h667acd789a27d2af(rcx_7, var_48);
            goto label_513b4e;
        }
        
        if (!arg10)
        {
            uu_cp::platform::linux::handle_reflink_never_sparse_always::hfd312c6ed6d0a8ea(&var_50, 
                arg2, arg3, arg4);
            char rax_14 = var_50;
            var_38_3 = rax_14;
            
            if (!rax_14)
            {
                rbp = *var_50[1];
                r12 = *var_50[2];
                r13 = *var_50[3];
                
                if (*var_50[4] == 1)
                {
                    int64_t rax_19;
                    void** rdx_17;
                    rax_19 = std::fs::copy::h82e95226cca79e6a(arg2, arg3, arg4);
                    
                    if (!rax_19)
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::ha7a49f29e481f844(0, var_48);
                        goto label_513b8d;
                    }
                    
                    r14_1 = rdx_17;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::ha7a49f29e481f844(0, var_48);
                    goto label_513b4e;
                }
            }
            else
            {
                r13 = 2;
                r12 = 1;
                rbp = 0;
            }
            
            rax_16 = uu_cp::platform::linux::sparse_copy::ha5f85eebd4c718f5(arg2, arg3, arg4);
            label_513b2a:
            r14_1 = rax_16;
            rsi_14 = var_48;
            rdi_24 = var_38_3;
            label_513b37:
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::ha7a49f29e481f844(rdi_24, rsi_14);
            goto label_513b3c;
        }
        
        int64_t rax_10;
        rax_10 = uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(arg2, arg3, arg4);
        
        if (rax_10)
        {
            label_51387a:
            r14_1 = rdx_1;
            label_513b4e:
            var_50 = arg8;
            int64_t var_48_1 = arg9;
            void** var_40_1 = r14_1;
            _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(arg1, &var_50);
        }
        else
        {
            rbp = 3;
            r12 = 1;
            r13 = 2;
            label_513b8d:
            arg1[1] = rbp;
            *(arg1 + 9) = r12;
            *(arg1 + 0xa) = r13;
            *arg1 = 0xd;
        }
    }
    return arg1;
}
