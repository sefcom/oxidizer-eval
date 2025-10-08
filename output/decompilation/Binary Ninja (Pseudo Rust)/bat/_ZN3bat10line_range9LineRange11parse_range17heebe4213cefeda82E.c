
  fn bat::line_range::LineRange::parse_range::heebe4213cefeda82(arg1: *mut i8, arg2: *mut i8, arg3: i64) -> u64

{
    if arg3 != 0
    {
        let rbp_1: i8 = *arg2;
        let mut var_98: *mut i8;
        let mut result: u64;
        
        if rbp_1 == 0x3a
        {
            let result_1: u64;
            let mut rcx_1: i64;
            
            if arg3 != 1 && arg2[1] == 0x2d
            {
                let mut rax_1: *mut c_void;
                let mut rdx_1: i64;
                rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(2, arg2, arg3);
                
                if rax_1 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 2, arg3);
                    /* no return */
                }
                
                core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_98, 
                    rax_1, rdx_1);
                
                if var_98 != 0
                {
                    goto 'label_83c3e6;
                }
                
                result = result_1;
                rcx_1 = 1;
                goto 'label_83c400;
            }
            
            let mut rax_6: *mut c_void;
            let mut rdx_6: i64;
            rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, arg2, arg3);
            
            if rax_6 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 1, arg3);
                /* no return */
            }
            
            core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_98, rax_6, 
                rdx_6);
            
            if var_98 != 0
            {
                'label_83c3e6:
                result = *var_98[1];
                *arg1 = 4;
                arg1[1] = result;
                return result;
            }
            
            result = result_1;
            rcx_1 = 0;
            'label_83c400:
            *arg1.byte_offset(8) = {0};
            *arg1.byte_offset(0x18) = rcx_1;
            *arg1.byte_offset(0x20) = result;
            *arg1 = 0xd;
            return result;
        }
        
        var_98 = arg2;
        let result_2: u64 = &arg2[arg3];
        let rax_3: *mut i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::he12edd73c094a135(&var_98);
        
        if rax_3 != 0
        {
            if *rax_3 == 0x3a
            {
                let mut r13_1: i64;
                
                if rbp_1 != 0x2d
                {
                    let mut rax_8: *mut i8;
                    let mut rdx_10: i64;
                    rax_8 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(arg3 - 1, arg2, arg3);
                    
                    if rax_8 == 0
                    {
                        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 0, arg3 - 1);
                        /* no return */
                    }
                    
                    core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
                        &var_98, rax_8, rdx_10);
                    
                    if var_98 != 0
                    {
                        goto 'label_83c3e6;
                    }
                    
                    result = result_2;
                    r13_1 = 0;
                }
                else
                {
                    r13_1 = 1;
                    let mut rax_4: *mut c_void;
                    let mut rdx_3: i64;
                    rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(1, arg3 - 1, arg2, arg3);
                    
                    if rax_4 == 0
                    {
                        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 1, arg3 - 1);
                        /* no return */
                    }
                    
                    core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
                        &var_98, rax_4, rdx_3);
                    
                    if var_98 != 0
                    {
                        goto 'label_83c3e6;
                    }
                    
                    result = result_2;
                }
                
                *arg1.byte_offset(8) = r13_1;
                *arg1.byte_offset(0x10) = result;
                *arg1.byte_offset(0x18) = 0;
                *arg1.byte_offset(0x20) = -1;
                *arg1 = 0xd;
                return result;
            }
            
            let mut var_88: i128;
            _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
                &var_88, 0x3a, arg2, arg3);
            var_98 = nullptr;
            let var_58_1: i16 = 1;
            let mut var_48: i64;
            core::iter::traits::iterator::Iterator::collect::h9b072ccbbd6d7802(&var_48, &var_98);
            let var_38: i64;
            let mut r14_2: *mut i64;
            let var_40: *mut i64;
            
            if var_38 == 1
            {
                r14_2 = var_40;
                core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_98, 
                    *r14_2, r14_2[1]);
                
                if var_98 != 0
                {
                    'label_83c69b:
                    let rax_12: i8 = *var_98[1];
                    *arg1 = 4;
                    arg1[1] = rax_12;
                }
                else
                {
                    *arg1.byte_offset(8) = 0;
                    *arg1.byte_offset(0x10) = arg3;
                    *arg1.byte_offset(0x18) = 0;
                    *arg1.byte_offset(0x20) = arg3;
                    *arg1 = 0xd;
                }
            }
            else if var_38 == 2
            {
                r14_2 = var_40;
                core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_98, 
                    *r14_2, r14_2[1]);
                
                if var_98 == 1
                {
                    goto 'label_83c69b;
                }
                
                let mut r13_2: i64 = arg3;
                let r12_2: *mut i8 = r14_2[2];
                let r15_3: i64 = r14_2[3];
                let mut rax_13: i64;
                
                if r15_3 == 0
                {
                    'label_83c68c:
                    core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
                        &var_98, r12_2, r15_3);
                    
                    if var_98 == 1
                    {
                        goto 'label_83c69b;
                    }
                    
                    rax_13 = r13_2;
                    r13_2 = arg3;
                }
                else
                {
                    let rax_9: u32 = *r12_2;
                    
                    if rax_9 == 0x2b
                    {
                        let mut rax_14: *mut c_void;
                        let mut rdx_21: i64;
                        rax_14 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, r12_2, r15_3);
                        
                        if rax_14 == 0
                        {
                            core::str::slice_error_fail::h1a2885084e28d077(r12_2, r15_3, 1, r15_3);
                            /* no return */
                        }
                        
                        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
                            &var_98, rax_14, rdx_21);
                        
                        if var_98 != 0
                        {
                            _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(&var_98, "Invalid character after +Invalid…", 0x19);
                            goto 'label_83c802;
                        }
                        
                        let rcx_8: i64 = arg3 + r13_2;
                        let c_2: bool = arg3 + r13_2 < arg3;
                        rax_13 = r13_2;
                        r13_2 = -1;
                        
                        if !c_2
                        {
                            r13_2 = rcx_8;
                        }
                    }
                    else
                    {
                        if rax_9 != 0x2d
                        {
                            goto 'label_83c68c;
                        }
                        
                        let mut rax_10: *mut c_void;
                        let mut rdx_13: i64;
                        rax_10 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, r12_2, r15_3);
                        
                        if rax_10 == 0
                        {
                            core::str::slice_error_fail::h1a2885084e28d077(r12_2, r15_3, 1, r15_3);
                            /* no return */
                        }
                        
                        if rdx_13 != 0 && *rax_10 == 0x2b
                        {
                            _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(&var_98, "Invalid character after -Invalid…", 0x19);
                            goto 'label_83c802;
                        }
                        
                        let mut rax_16: *mut i8;
                        let mut rdx_25: i64;
                        rax_16 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, r12_2, r15_3);
                        
                        if rax_16 == 0
                        {
                            core::str::slice_error_fail::h1a2885084e28d077(r12_2, r15_3, 1, r15_3);
                            /* no return */
                        }
                        
                        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
                            &var_98, rax_16, rdx_25);
                        
                        if var_98 == 1
                        {
                            _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(&var_98, "Invalid character after -Invalid…", 0x19);
                            goto 'label_83c802;
                        }
                        
                        rax_13 = 0;
                        
                        if r13_2 >= arg3
                        {
                            rax_13 = r13_2 - arg3;
                        }
                    }
                }
                
                *arg1.byte_offset(8) = 0;
                *arg1.byte_offset(0x10) = rax_13;
                *arg1.byte_offset(0x18) = 0;
                *arg1.byte_offset(0x20) = r13_2;
                *arg1 = 0xd;
            }
            else
            {
                let var_78: i128;
                let var_68: i128;
                
                if var_38 != 3
                {
                    _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(&var_98, "Line range contained too many ':…", 0x5d);
                    *arg1.byte_offset(0x40) = var_58_1;
                    let zmm0_3: i128 = var_98;
                    let zmm1_3: i128 = var_88;
                    *arg1.byte_offset(0x30) = var_68;
                    *arg1.byte_offset(0x20) = var_78;
                    *arg1.byte_offset(0x10) = zmm1_3;
                    *arg1 = zmm0_3;
                    r14_2 = var_40;
                }
                else
                {
                    r14_2 = var_40;
                    let r15_2: i64 = r14_2[3];
                    let mut rax_15: i64;
                    let mut rcx_5: i64;
                    let mut r15_4: i64;
                    
                    if r15_2 != 0
                    {
                        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
                            &var_98, *r14_2, r14_2[1]);
                        
                        if var_98 == 1
                        {
                            _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(&var_98, "Invalid start line number in N:M…", 0x29);
                            goto 'label_83c802;
                        }
                        
                        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
                            &var_98, r14_2[2], r15_2);
                        
                        if var_98 == 1
                        {
                            _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(&var_98, "Invalid end line number in N:M:C…", 0x27);
                            goto 'label_83c802;
                        }
                        
                        r15_4 = arg3;
                        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
                            &var_98, r14_2[4], r14_2[5]);
                        
                        if var_98 == 1
                        {
                            _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(&var_98, "Invalid context number in N:M:C …", 0x26);
                            goto 'label_83c802;
                        }
                        
                        rcx_5 = arg3;
                        rax_15 = 0;
                        
                        if arg3 >= rcx_5
                        {
                            rax_15 = arg3 - rcx_5;
                        }
                        
                        goto 'label_83c796;
                    }
                    
                    core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
                        &var_98, *r14_2, r14_2[1]);
                    
                    if var_98 != 1
                    {
                        r15_4 = arg3;
                        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
                            &var_98, r14_2[4], r14_2[5]);
                        
                        if var_98 == 1
                        {
                            _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(&var_98, "Invalid context number in N::C f…", 0x25);
                            goto 'label_83c802;
                        }
                        
                        rcx_5 = arg3;
                        rax_15 = 0;
                        
                        if r15_4 >= rcx_5
                        {
                            rax_15 = r15_4 - rcx_5;
                        }
                        
                        'label_83c796:
                        let mut rcx_6: i64 = -1;
                        
                        if r15_4 + rcx_5 >= r15_4
                        {
                            rcx_6 = r15_4 + rcx_5;
                        }
                        
                        *arg1.byte_offset(8) = 0;
                        *arg1.byte_offset(0x10) = rax_15;
                        *arg1.byte_offset(0x18) = 0;
                        *arg1.byte_offset(0x20) = rcx_6;
                        *arg1 = 0xd;
                    }
                    else
                    {
                        _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(&var_98, "Invalid line number in N::C form…", 0x22);
                        'label_83c802:
                        *arg1.byte_offset(0x40) = var_58_1;
                        let zmm0_2: i128 = var_98;
                        let zmm1_2: i128 = var_88;
                        *arg1.byte_offset(0x30) = var_68;
                        *arg1.byte_offset(0x20) = var_78;
                        *arg1.byte_offset(0x10) = zmm1_2;
                        *arg1 = zmm0_2;
                    }
                }
            }
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$$RF$alloc..string..String$C$$RF$alloc..string..String$RP$$GT$$GT$::h5d217fd71d6c8aa5(var_48, r14_2);
        }
    }
    
    /* tailcall */
    _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(arg1, "Empty line range", 0x10)
}
