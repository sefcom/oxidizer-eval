
  fn zoxide::db::stream::Stream::filter_by_keywords::hfa6dd4ec6611dd54(arg1: i64, arg2: i64, arg3: i64, arg4: [u32; 0x4] @ zmm0, arg5: [i8; 0x10] @ zmm1, arg6: u128 @ zmm2) -> u64

{
    let mut r13: i64;
    
    if arg2 == 0
    {
        r13 = 1;
    }
    else
    {
        let r12_1: i64 = arg2 * 3;
        let mut var_58: ();
        zoxide::util::to_lowercase::h601373cb57afac0c(&var_58, arg3, arg4, arg5, arg6);
        let var_50: *mut i8;
        let mut r14_1: *mut i8 = var_50;
        let var_48: i64;
        let mut rbx_1: i64 = var_48;
        let mut rax_1: i8;
        let mut rdx_2: i64;
        rax_1 = core::str::_$LT$impl$u20$str$GT$::rfind::h2498f8c77f23dca1(r14_1, rbx_1, 
            arg1 + (r12_1 << 3) - 0x18);
        
        if (rax_1 & 1) == 0
        {
            r13 = 0;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_58);
        }
        else
        {
            let mut r15_1: i64 = rdx_2;
            let mut r12_3: i64 = *((r12_1 << 3) + arg1).byte_offset(-8) + rdx_2;
            let mut rax_4: *mut c_void;
            let mut rdx_4: i64;
            rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r12_3, r14_1, rbx_1);
            
            if rax_4 == 0
            {
                r15_1 = rbx_1;
                'label_4915f2:
                core::str::slice_error_fail::h1a2885084e28d077(r14_1, rbx_1, r12_3, r15_1);
                /* no return */
            }
            
            if core::str::pattern::Pattern::is_contained_in::h6661695b4151bb2c(rax_4, rdx_4) == 0
            {
                let mut rax_7: *mut i8;
                let mut rdx_6: i64;
                rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r15_1, r14_1, rbx_1);
                
                if rax_7 == 0
                {
                    r12_3 = 0;
                    goto 'label_4915f2;
                }
                
                let mut var_40: i64 = arg1;
                let var_38_1: *mut c_void = arg1 + (r12_1 << 3) - 0x18;
                r12_3 = 0;
                
                loop
                {
                    rbx_1 = rdx_6;
                    r14_1 = rax_7;
                    let rax_8: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hfecb16f7008b4458(&var_40);
                    r13 = rax_8 == 0;
                    
                    if rax_8 == 0
                    {
                        break;
                    }
                    
                    let mut rax_9: i8;
                    let mut rdx_8: i64;
                    rax_9 = core::str::_$LT$impl$u20$str$GT$::rfind::h2498f8c77f23dca1(r14_1, 
                        rbx_1, rax_8);
                    
                    if (rax_9 & 1) == 0
                    {
                        break;
                    }
                    
                    r15_1 = rdx_8;
                    rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rdx_8, r14_1, rbx_1);
                    
                    if rax_7 == 0
                    {
                        goto 'label_4915f2;
                    }
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_58);
            }
            else
            {
                r13 = 0;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_58);
            }
        }
    }
    
    r13
}
