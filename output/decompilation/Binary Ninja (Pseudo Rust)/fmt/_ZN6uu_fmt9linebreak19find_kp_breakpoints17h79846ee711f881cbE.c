
  fn uu_fmt::linebreak::find_kp_breakpoints::h79846ee711f881cb(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i64) -> i64

{
    let mut var_d0: i64;
    core::iter::traits::iterator::Iterator::peekable::h8afc4466af8768bc(&var_d0, arg2, arg3);
    let s: *mut c_void = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x28);
    
    if s == 0
    {
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
        /* no return */
    }
    
    let rcx: i64 = arg4[4];
    __builtin_memset(s, 0, 0x18);
    *s.byte_offset(0x18) = rcx;
    *s.byte_offset(0x20) = 0;
    *s.byte_offset(0x24) = 0;
    let mut var_1a8: ();
    alloc::slice::hack::into_vec::heda36ef041044304(&var_1a8, s, 1);
    let rax: *mut i64 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(8);
    
    if rax == 0
    {
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
        /* no return */
    }
    
    *rax = 0;
    let mut var_120: ();
    alloc::slice::hack::into_vec::h3287efa8d919cd9f(&var_120, rax, 1);
    let mut var_180: i64 = 0;
    let var_178: i64 = 8;
    let var_170: i64 = 0;
    let rax_1: *mut c_void = *arg4;
    let rcx_1: i64 = *rax_1.byte_offset(0x30);
    let rdi_3: i64 = *rax_1.byte_offset(0x38);
    let r14_1: i64 = rcx_1 - rdi_3;
    let rax_3: i64 = core::cmp::max_by::h34a806462d46b061(rdi_3, r14_1 + 1) - r14_1;
    let mut var_168: i64 = 0;
    let var_160: i64 = 8;
    let var_158: i64 = 0;
    let rax_4: i8 = arg4[6];
    let rax_5: i64 = arg4[5];
    let mut rbx_1: bool = false;
    let mut var_150: *mut *mut c_void = &data_526870;
    let mut var_190: i64 = 0;
    let mut var_1b0_1: i64;
    let mut rbx_2: i64;
    let mut rsi_6: i64;
    
    loop
    {
        let var_c8: *mut i64;
        let mut r14_2: *mut i64 = var_c8;
        let cond:0_1: bool = var_d0 != 0;
        var_d0 = 0;
        let mut var_c0: ();
        
        if !cond:0_1
        {
            r14_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7b82053f9b8098c(&var_c0);
        }
        
        let var_1a0: i64;
        let var_198: i64;
        let var_118: i64;
        let var_110: i64;
        
        if r14_2 == 0
        {
            uu_fmt::linebreak::build_best_path::h4613d5d21e8bb56e(arg1, var_1a0, var_198, var_118, 
                var_110);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_fmt..linebreak..LineBreak$GT$$GT$::hc1a93e97adcb19f9(&var_168);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h8af847b80d99ba2c(
                &var_180);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h8af847b80d99ba2c(
                &var_120);
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_fmt..linebreak..LineBreak$GT$$GT$::hc1a93e97adcb19f9(&var_1a8);
        }
        
        let r15_1: *mut c_void =
            *core::option::Option$LT$T$GT$::get_or_insert_with::hcbe477171ba51fdb(&var_d0, &var_c0);
        let mut rax_9: u64;
        rax_9 = 1;
        
        if r15_1 != 0 && *r15_1.byte_offset(0x38) == 0
        {
            if *r15_1.byte_offset(0x3a) == 0
            {
                rax_9 = 0;
            }
            else
            {
                rax_9 = *r14_2.byte_offset(0x39);
            }
        }
        
        let mut rcx_3: i64 = 0;
        
        if (*r14_2.byte_offset(0x3a) | rax_4) != 0
        {
            rcx_3 = (rbx_1 & 1) + 1;
        }
        
        let var_158_1: i64 = 0;
        let var_170_1: i64 = 0;
        let mut var_e0: i64 = var_118;
        let var_d8_1: i64 = var_118 + (var_110 << 3);
        let mut i: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6091de4c9f40793f(&var_e0);
        let mut rax_6: i64;
        
        if i == 0
        {
            var_1b0_1 = 0;
            
            if var_170_1 != 0
            {
                rax_6 = core::cmp::max_by::h71cc3e7b7be030ce(0x7fffffffffffffff);
            }
            else
            {
                'label_4bbfbd:
                rsi_6 = var_198;
                
                if var_1b0_1 >= rsi_6
                {
                    break;
                }
                
                let rdx_5: i64 = var_1b0_1 * 5;
                let mut var_58: ();
                uu_fmt::linebreak::restart_active_breaks::h2b91feff430673ac(&var_58, rax_1, rax_5, 
                    *(var_1a0 + (rdx_5 << 3) + 0x18), *(var_1a0 + (rdx_5 << 3) + 0x25), var_1b0_1, 
                    r14_2, rcx_3, rax_3);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h287ff18087d76cdb(&var_180, var_198);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hf091c64d56a1d8fa(&var_1a8, &var_58);
                rax_6 = 0;
            }
        }
        else
        {
            var_1b0_1 = 0;
            let mut r13_1: i64 = 0x7fffffffffffffff;
            let mut var_140_1: i64 = 0x7fffffffffffffff;
            
            do
            {
                rbx_2 = *i;
                rsi_6 = var_198;
                
                if rbx_2 >= rsi_6
                {
                    goto 'label_4bc0bb;
                }
                
                let rcx_6: i64 = r13_1;
                let rbp_1: i64 = rbx_2 * 5;
                r13_1 = *(var_1a0 + (rbp_1 << 3) + 0x10) - var_190;
                let rdx: i64 = *(var_1a0 + (rbp_1 << 3) + 0x18);
                *(var_1a0 + (rbp_1 << 3) + 0x10) = r13_1;
                let cond:2_1: bool = r13_1 < rcx_6;
                
                if r13_1 >= rcx_6
                {
                    r13_1 = rcx_6;
                }
                
                let mut rax_16: i64 = var_1b0_1;
                
                if cond:2_1
                {
                    rax_16 = rbx_2;
                }
                
                var_1b0_1 = rax_16;
                let r14_3: i64 = r14_2[5];
                let r15_3: *mut c_void = var_1a0 + (rbp_1 << 3);
                let r12_3: i64 = uu_fmt::linebreak::BreakArgs::compute_width::hfc2bd23d7c87d18b(
                    rax_1, r14_2, rdx, *(var_1a0 + (rbp_1 << 3) + 0x25)) + rcx_3 + r14_3
                    + *r15_3.byte_offset(0x18);
                
                if r12_3 <= rcx_1
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h287ff18087d76cdb(&var_180, rbx_2);
                    *r15_3.byte_offset(0x25) = 0;
                    *r15_3.byte_offset(0x18) = r12_3;
                    
                    if r12_3 >= rax_3
                    {
                        let mut rax_20: i64;
                        let mut zmm0_1: [u32; 0x4];
                        
                        if r15_1 == 0
                        {
                            zmm0_1 = {0};
                            rax_20 = 0;
                        }
                        else
                        {
                            zmm0_1 = uu_fmt::linebreak::compute_demerits::he468f5733cc0155b(
                                rdi_3 - r12_3, r14_1, r14_3, *r15_3.byte_offset(0x20));
                        }
                        
                        if rax_20 <= 0x5af3107a3fff
                        {
                            let rcx_8: i64 = *r15_3.byte_offset(0x10);
                            let r14_4: i64 = rcx_8 + rax_20;
                            
                            if r14_4 < var_140_1
                            {
                                let cond:3_1: bool = rax_20 < 0;
                                rax_20 = rax_20 == 0;
                                
                                if rcx_8 >= 0
                                {
                                    rax_20 &= rcx_8 != 0;
                                }
                                
                                if rcx_8 < 0 || (cond:3_1 | rax_20) == 0
                                {
                                    let mut var_b0: i64 = rbx_2;
                                    let var_a8_1: *mut i64 = r14_2;
                                    let var_8c_1: i16 = 0x100;
                                    let var_a0_1: i64 = r14_4;
                                    let var_90_1: u32 = zmm0_1[0];
                                    let var_98_1: i64 = rax_5;
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::hf091c64d56a1d8fa(&var_168, 
                                        &var_b0);
                                    var_140_1 = r14_4;
                                }
                            }
                        }
                    }
                }
                
                i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6091de4c9f40793f(&var_e0);
            } while i != 0;
            
            if var_158_1 != 0
            {
                let var_158_2: i64 = var_158_1 - 1;
                let rdx_3: i64 = (var_158_1 - 1) * 5;
                let rax_23: i8 = *(var_160 + (rdx_3 << 3) + 0x25);
                
                if rax_23 != 2
                {
                    let rcx_10: *mut [u32; 0x4] = var_160 + (rdx_3 << 3);
                    let rdx_4: i16 = *rcx_10.byte_offset(0x26);
                    let var_6b_1: i64 = *rcx_10.byte_offset(0x1d);
                    let var_78_1: i128 = rcx_10[1];
                    let mut var_88: [u32; 0x4] = *rcx_10;
                    let var_63_1: i8 = rax_23;
                    let var_62_1: i16 = rdx_4;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h287ff18087d76cdb(&var_180, var_198);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hf091c64d56a1d8fa(&var_1a8, &var_88);
                }
            }
            
            if var_170_1 == 0
            {
                goto 'label_4bbfbd;
            }
            
            rax_6 = core::cmp::max_by::h71cc3e7b7be030ce(r13_1);
        }
        
        var_190 = rax_6;
        core::intrinsics::typed_swap::h941b9e9a3023958d(&var_120, &var_180);
        rbx_1 = rax_9 != 0;
    }
    
    rbx_2 = var_1b0_1;
    var_150 = &data_526858;
    'label_4bc0bb:
    core::panicking::panic_bounds_check::h25a5330941572dd1(rbx_2, rsi_6);
    /* no return */
}
