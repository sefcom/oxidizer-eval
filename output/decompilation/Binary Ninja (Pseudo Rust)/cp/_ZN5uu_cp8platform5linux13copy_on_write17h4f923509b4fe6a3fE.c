
  fn uu_cp::platform::linux::copy_on_write::h4f923509b4fe6a3f(arg1: *mut i64, arg2: u64, arg3: i64, arg4: i64, arg5: i64, arg6: i8, arg7: i8, arg8: i64, arg9: i64, arg10: i8) -> *mut i64

{
    let mut rbp: u64;
    let mut r12: u64;
    let mut r13: u64;
    let mut r14_1: *mut *mut c_void;
    
    if arg6 == 0
    {
        if arg7 == 1
        {
            rbp = 0;
            r14_1 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(arg2, arg3, arg4, arg5, 0);
            r12 = 2;
            r13 = 1;
            'label_513b3c:
            
            if r14_1 == 0
            {
                goto 'label_513b8d;
            }
            
            goto 'label_513b4e;
        }
        
        _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h3a818a2f4f98d944(arg1, "`--reflink=always` can be used o…", 0x36);
    }
    else
    {
        let mut var_50: i64;
        let var_48: i64;
        let mut var_38_3: i8;
        let mut rax_16: *mut *mut c_void;
        let mut rdx_1: *mut *mut c_void;
        
        if arg6 == 1
        {
            if arg7 == 0
            {
                if arg10 != 0
                {
                    let mut rax_5: i64;
                    rax_5 = uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(arg2, 
                        arg3, arg4);
                    
                    if rax_5 != 0
                    {
                        goto 'label_51387a;
                    }
                    
                    rbp = 3;
                    r12 = 4;
                    r13 = 2;
                    goto 'label_513b8d;
                }
                
                uu_cp::platform::linux::handle_reflink_auto_sparse_always::h5f3f09720d2fa6c3(
                    &var_50, arg2, arg3, arg4);
                let rax_13: i8 = var_50;
                var_38_3 = rax_13;
                
                if rax_13 == 0
                {
                    rbp = *var_50[1];
                    r12 = *var_50[2];
                    r13 = *var_50[3];
                    
                    if *var_50[4] != 1
                    {
                        rax_16 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(arg2, arg3, arg4, 
                            arg5, 2);
                    }
                    else
                    {
                        rax_16 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(arg2, arg3, arg4, 
                            arg5, 1);
                    }
                }
                else
                {
                    r13 = 2;
                    r12 = 4;
                    rbp = 0;
                    rax_16 =
                        uu_cp::platform::linux::clone::hdce2a0051aad38c1(arg2, arg3, arg4, arg5, 2);
                }
                
                goto 'label_513b2a;
            }
            
            if arg7 != 1
            {
                if arg10 != 0
                {
                    goto 'label_513870;
                }
                
                uu_cp::platform::linux::handle_reflink_auto_sparse_never::hbf2c8fb4c904c675(
                    &var_50);
                let rax_6: i8 = var_50;
                let rbp_1: i8 = *var_50[1];
                let rax_7: i8 = *var_50[2];
                let rax_8: i8 = *var_50[3];
                r14_1 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(arg2, arg3, arg4, arg5, 1);
                rbp = rbp_1;
                
                if rax_6 != 0
                {
                    rbp = 0;
                }
                
                r12 = rax_7;
                
                if rax_6 != 0
                {
                    r12 = 1;
                }
                
                r13 = rax_8;
                
                if rax_6 != 0
                {
                    r13 = 1;
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_cp..CopyDebug$C$std..io..error..Error$GT$$GT$::h667acd789a27d2af(rax_6, var_48);
                goto 'label_513b3c;
            }
            
            if arg10 != 0
            {
                let mut rax_2: i64;
                rax_2 =
                    uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(arg2, arg3, arg4);
                
                if rax_2 != 0
                {
                    goto 'label_51387a;
                }
                
                r12 = 4;
                r13 = 1;
                rbp = 4;
                goto 'label_513b8d;
            }
            
            uu_cp::platform::linux::handle_reflink_auto_sparse_auto::h1e687e1533235ec7(&var_50, 
                arg2, arg3, arg4);
            let rax_12: i8 = var_50;
            var_38_3 = rax_12;
            
            if rax_12 == 0
            {
                rbp = *var_50[1];
                r12 = *var_50[2];
                r13 = *var_50[3];
                
                if *var_50[4] != 3
                {
                    rax_16 =
                        uu_cp::platform::linux::clone::hdce2a0051aad38c1(arg2, arg3, arg4, arg5, 1);
                }
                else
                {
                    rax_16 =
                        uu_cp::platform::linux::clone::hdce2a0051aad38c1(arg2, arg3, arg4, arg5, 3);
                }
            }
            else
            {
                r13 = 1;
                r12 = 4;
                rbp = 0;
                rax_16 =
                    uu_cp::platform::linux::clone::hdce2a0051aad38c1(arg2, arg3, arg4, arg5, 1);
            }
            
            goto 'label_513b2a;
        }
        
        let mut rsi_14: i64;
        let mut rdi_24: i8;
        
        if arg7 != 0
        {
            if arg7 == 1
            {
                if arg10 != 0
                {
                    goto 'label_513870;
                }
                
                uu_cp::platform::linux::handle_reflink_never_sparse_auto::h6d31da0e17b67b00(
                    &var_50, arg2, arg3, arg4);
                let rax_4: i8 = var_50;
                
                if rax_4 == 0
                {
                    rbp = *var_50[1];
                    r12 = *var_50[2];
                    r13 = *var_50[3];
                    
                    if *var_50[4] != 3
                    {
                        goto 'label_513ab1;
                    }
                    
                    r14_1 = uu_cp::platform::linux::sparse_copy_without_hole::h5128473705372174(
                        arg2, arg3, arg4);
                    rsi_14 = var_48;
                    rdi_24 = 0;
                    goto 'label_513b37;
                }
                
                r12 = 1;
                rbp = 0;
                r13 = 1;
                'label_513ab1:
                let mut rax_18: i64;
                let mut rdx_15: *mut *mut c_void;
                rax_18 = std::fs::copy::h82e95226cca79e6a(arg2, arg3, arg4);
                
                if rax_18 == 0
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::ha7a49f29e481f844(rax_4, var_48);
                    goto 'label_513b8d;
                }
                
                r14_1 = rdx_15;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::ha7a49f29e481f844(rax_4, var_48);
                goto 'label_513b4e;
            }
            
            if arg10 != 0
            {
                'label_513870:
                let mut rax_11: i64;
                rax_11 =
                    uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(arg2, arg3, arg4);
                
                if rax_11 == 0
                {
                    rbp = 3;
                    r13 = 1;
                    r12 = 1;
                    goto 'label_513b8d;
                }
                
                goto 'label_51387a;
            }
            
            let var_58_5: i64 = arg5;
            let mut var_38: i8;
            var_38 = arg4;
            uu_cp::platform::linux::handle_reflink_never_sparse_never::h95a3d86a0846d4cd(&var_50);
            let rcx_7: i8 = var_50;
            r13 = *var_50[3];
            
            if rcx_7 != 0
            {
                r13 = 1;
            }
            
            r12 = *var_50[2];
            
            if rcx_7 != 0
            {
                r12 = 1;
            }
            
            rbp = *var_50[1];
            
            if rcx_7 != 0
            {
                rbp = 0;
            }
            
            let mut rax_15: i64;
            let mut rdx_8: *mut *mut c_void;
            rax_15 = std::fs::copy::h82e95226cca79e6a(arg2, arg3, var_38);
            
            if rax_15 == 0
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_cp..CopyDebug$C$std..io..error..Error$GT$$GT$::h667acd789a27d2af(rcx_7, var_48);
                goto 'label_513b8d;
            }
            
            r14_1 = rdx_8;
            core::ptr::drop_in_place$LT$core..result..Result$LT$uu_cp..CopyDebug$C$std..io..error..Error$GT$$GT$::h667acd789a27d2af(rcx_7, var_48);
            goto 'label_513b4e;
        }
        
        if arg10 == 0
        {
            uu_cp::platform::linux::handle_reflink_never_sparse_always::hfd312c6ed6d0a8ea(&var_50, 
                arg2, arg3, arg4);
            let rax_14: i8 = var_50;
            var_38_3 = rax_14;
            
            if rax_14 == 0
            {
                rbp = *var_50[1];
                r12 = *var_50[2];
                r13 = *var_50[3];
                
                if *var_50[4] == 1
                {
                    let mut rax_19: i64;
                    let mut rdx_17: *mut *mut c_void;
                    rax_19 = std::fs::copy::h82e95226cca79e6a(arg2, arg3, arg4);
                    
                    if rax_19 == 0
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::ha7a49f29e481f844(0, var_48);
                        goto 'label_513b8d;
                    }
                    
                    r14_1 = rdx_17;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::ha7a49f29e481f844(0, var_48);
                    goto 'label_513b4e;
                }
            }
            else
            {
                r13 = 2;
                r12 = 1;
                rbp = 0;
            }
            
            rax_16 = uu_cp::platform::linux::sparse_copy::ha5f85eebd4c718f5(arg2, arg3, arg4);
            'label_513b2a:
            r14_1 = rax_16;
            rsi_14 = var_48;
            rdi_24 = var_38_3;
            'label_513b37:
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::ha7a49f29e481f844(rdi_24, rsi_14);
            goto 'label_513b3c;
        }
        
        let mut rax_10: i64;
        rax_10 = uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(arg2, arg3, arg4);
        
        if rax_10 != 0
        {
            'label_51387a:
            r14_1 = rdx_1;
            'label_513b4e:
            var_50 = arg8;
            let var_48_1: i64 = arg9;
            let var_40_1: *mut *mut c_void = r14_1;
            _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(arg1, &var_50);
        }
        else
        {
            rbp = 3;
            r12 = 1;
            r13 = 2;
            'label_513b8d:
            arg1[1] = rbp;
            *arg1.byte_offset(9) = r12;
            *arg1.byte_offset(0xa) = r13;
            *arg1 = 0xd;
        }
    }
    arg1
}
