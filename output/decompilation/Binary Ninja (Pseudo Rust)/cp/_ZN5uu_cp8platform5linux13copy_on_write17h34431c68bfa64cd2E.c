
  fn uu_cp::platform::linux::copy_on_write::h34431c68bfa64cd2(arg1: *mut i64, arg2: i64, arg3: u64, arg4: i64, arg5: i64, arg6: i8, arg7: i8, arg8: u64, arg9: i64, arg10: i8, arg11: i8) -> *mut i64

{
    let mut result: *mut i64;
    let mut rbp: u64;
    let mut r12: u64;
    let mut r13: u64;
    let mut var_40_1: u64;
    let mut var_38_1: i64;
    let mut result_1: *mut i64;
    
    if arg6 == 0
    {
        if arg7 != 1
        {
            /* tailcall */
            return _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h0e3b1f2b5d04343d(arg1, "`--reflink=always` can be used o…", 0x36);
        }
        
        var_40_1 = arg8;
        var_38_1 = arg9;
        rbp = 0;
        result = uu_cp::platform::linux::clone::h7ec3609c902c4274(arg2, arg3, arg4, arg5, 0);
        result_1 = result;
        r12 = 2;
        r13 = 1;
        
        if result_1 != 0
        {
            goto 'label_49bf0d;
        }
    }
    else
    {
        let mut var_60: u64;
        let mut result_3: *mut i64;
        let mut result_4: *mut i64;
        
        if arg6 != 1
        {
            let mut rax_11: i8;
            let mut result_5: *mut i64;
            
            if arg7 != 0
            {
                if arg7 == 1
                {
                    if arg11 != 0
                    {
                        goto 'label_49bc5c;
                    }
                    
                    var_40_1 = arg8;
                    var_38_1 = arg9;
                    uu_cp::platform::linux::handle_reflink_never_sparse_auto::h718df85bcf1cef5c(
                        &var_60, arg2, arg3, arg4);
                    
                    if var_60 == 0
                    {
                        rbp = *var_60[1];
                        r12 = *var_60[2];
                        r13 = *var_60[3];
                        
                        if *var_60[4] == 3
                        {
                            result_3 =
                                uu_cp::platform::linux::sparse_copy_without_hole::h2d9392879b3e0cb0(
                                arg2, arg3, arg4);
                            goto 'label_49bef6;
                        }
                    }
                    else
                    {
                        r12 = 1;
                        rbp = 0;
                        r13 = 1;
                    }
                    
                    rax_11 = std::fs::copy::h705af7a8cd89b11d(arg2, arg3, arg4);
                    goto 'label_49bec2;
                }
                
                if arg11 == 0
                {
                    var_40_1 = arg8;
                    var_38_1 = arg9;
                    let var_68_5: i64 = arg5;
                    uu_cp::platform::linux::handle_reflink_auto_sparse_never::hd22b7d91bc1c3709(
                        &var_60, arg2);
                    let temp0_1: i8 = var_60;
                    r13 = *var_60[3];
                    
                    if temp0_1 != 0
                    {
                        r13 = 1;
                    }
                    
                    r12 = *var_60[2];
                    
                    if temp0_1 != 0
                    {
                        r12 = 1;
                    }
                    
                    rbp = *var_60[1];
                    
                    if temp0_1 != 0
                    {
                        rbp = 0;
                    }
                    
                    rax_11 = std::fs::copy::h705af7a8cd89b11d(arg2, arg3, arg4);
                    goto 'label_49bec2;
                }
                
                'label_49bc5c:
                result = uu_cp::platform::linux::copy_stream::h194a761372098ffc(arg2, arg3, arg4, 
                    arg5, arg10);
                
                if (result & 1) != 0
                {
                    goto 'label_49bc65;
                }
                
                rbp = 3;
                r13 = 1;
                r12 = 1;
            }
            else if arg11 == 0
            {
                var_40_1 = arg8;
                var_38_1 = arg9;
                uu_cp::platform::linux::handle_reflink_never_sparse_always::heed2137fe7113b5a(
                    &var_60, arg2, arg3, arg4);
                
                if var_60 == 0
                {
                    rbp = *var_60[1];
                    r12 = *var_60[2];
                    r13 = *var_60[3];
                    
                    if *var_60[4] != 1
                    {
                        goto 'label_49bef1;
                    }
                    
                    rax_11 = std::fs::copy::h705af7a8cd89b11d(arg2, arg3, arg4);
                    'label_49bec2:
                    
                    if (rax_11 & 1) != 0
                    {
                        result_1 = result_5;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::h045b393fe041be74(&var_60);
                        goto 'label_49bf0d;
                    }
                    
                    result = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::h045b393fe041be74(&var_60);
                }
                else
                {
                    r13 = 2;
                    r12 = 1;
                    rbp = 0;
                    'label_49bef1:
                    result_3 =
                        uu_cp::platform::linux::sparse_copy::h236dad6108a5e89b(arg2, arg3, arg4);
                    'label_49bef6:
                    result_1 = result_3;
                    'label_49befe:
                    result = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::h045b393fe041be74(&var_60);
                    
                    if result_1 != 0
                    {
                        goto 'label_49bf0d;
                    }
                }
            }
            else
            {
                result = uu_cp::platform::linux::copy_stream::h194a761372098ffc(arg2, arg3, arg4, 
                    arg5, arg10);
                
                if (result & 1) != 0
                {
                    'label_49bc65:
                    result_1 = result_4;
                    var_40_1 = arg8;
                    var_38_1 = arg9;
                    'label_49bf0d:
                    var_60 = var_40_1;
                    let var_58_1: i64 = var_38_1;
                    let result_2: *mut i64 = result_1;
                    return _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::hda2d8848c156368b(arg1, &var_60);
                }
                
                rbp = 3;
                r12 = 1;
                r13 = 2;
            }
        }
        else if arg7 == 0
        {
            if arg11 == 0
            {
                var_40_1 = arg8;
                var_38_1 = arg9;
                uu_cp::platform::linux::handle_reflink_auto_sparse_always::haaf9f37e7b58eafa(
                    &var_60, arg2, arg3, arg4);
                
                if var_60 == 0
                {
                    rbp = *var_60[1];
                    r12 = *var_60[2];
                    r13 = *var_60[3];
                    
                    if *var_60[4] != 1
                    {
                        result_3 = uu_cp::platform::linux::clone::h7ec3609c902c4274(arg2, arg3, 
                            arg4, arg5, 2);
                    }
                    else
                    {
                        result_3 = uu_cp::platform::linux::clone::h7ec3609c902c4274(arg2, arg3, 
                            arg4, arg5, 1);
                    }
                }
                else
                {
                    r13 = 2;
                    r12 = 4;
                    rbp = 0;
                    result_3 =
                        uu_cp::platform::linux::clone::h7ec3609c902c4274(arg2, arg3, arg4, arg5, 2);
                }
                
                goto 'label_49bef6;
            }
            
            result = uu_cp::platform::linux::copy_stream::h194a761372098ffc(arg2, arg3, arg4, arg5, 
                arg10);
            
            if (result & 1) != 0
            {
                goto 'label_49bc65;
            }
            
            rbp = 3;
            r12 = 4;
            r13 = 2;
        }
        else
        {
            if arg7 != 1
            {
                if arg11 != 0
                {
                    goto 'label_49bc5c;
                }
                
                var_40_1 = arg8;
                var_38_1 = arg9;
                uu_cp::platform::linux::handle_reflink_auto_sparse_never::hd22b7d91bc1c3709(
                    &var_60, arg2);
                let rax_4: i8 = var_60;
                let rbp_1: i8 = *var_60[1];
                let rax_5: i8 = *var_60[2];
                let rax_6: i8 = *var_60[3];
                result_1 =
                    uu_cp::platform::linux::clone::h7ec3609c902c4274(arg2, arg3, arg4, arg5, 1);
                rbp = 0;
                
                if rax_4 == 0
                {
                    rbp = rbp_1;
                }
                
                r12 = rax_5;
                
                if rax_4 != 0
                {
                    r12 = 1;
                }
                
                r13 = rax_6;
                
                if rax_4 != 0
                {
                    r13 = 1;
                }
                
                goto 'label_49befe;
            }
            
            if arg11 == 0
            {
                var_40_1 = arg8;
                var_38_1 = arg9;
                uu_cp::platform::linux::handle_reflink_auto_sparse_auto::hc3f72f8fab662c9c(&var_60, 
                    arg2, arg3, arg4);
                
                if var_60 == 0
                {
                    rbp = *var_60[1];
                    r12 = *var_60[2];
                    r13 = *var_60[3];
                    
                    if *var_60[4] != 3
                    {
                        result_3 = uu_cp::platform::linux::clone::h7ec3609c902c4274(arg2, arg3, 
                            arg4, arg5, 1);
                    }
                    else
                    {
                        result_3 = uu_cp::platform::linux::clone::h7ec3609c902c4274(arg2, arg3, 
                            arg4, arg5, 3);
                    }
                }
                else
                {
                    r13 = 1;
                    r12 = 4;
                    rbp = 0;
                    result_3 =
                        uu_cp::platform::linux::clone::h7ec3609c902c4274(arg2, arg3, arg4, arg5, 1);
                }
                
                goto 'label_49bef6;
            }
            
            result = uu_cp::platform::linux::copy_stream::h194a761372098ffc(arg2, arg3, arg4, arg5, 
                arg10);
            
            if (result & 1) != 0
            {
                goto 'label_49bc65;
            }
            
            r12 = 4;
            r13 = 1;
            rbp = 4;
        }
    }
    arg1[1] = rbp;
    *arg1.byte_offset(9) = r12;
    *arg1.byte_offset(0xa) = r13;
    *arg1 = -0x7ffffffffffffff4;
    result
}
