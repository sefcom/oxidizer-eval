
  fn uu_fmt::linebreak::find_kp_breakpoints::h8e1b34bce65123f0(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i64) -> i64

{
    let mut rbp: u64;
    let var_8: u64 = rbp;
    let mut var_d0: i8;
    core::iter::traits::iterator::Iterator::peekable::h5f288455ab1c5fee(&var_d0, arg2, arg3);
    let s: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x28);
    
    if s == 0
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    let rax: i64 = arg4[4];
    __builtin_memset(s, 0, 0x18);
    *(s + 0x18) = rax;
    *(s + 0x20) = 0;
    *(s + 0x24) = 0;
    let mut var_180: i64 = 1;
    let var_170: i64 = 1;
    let rax_1: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 8);
    
    if rax_1 == 0
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    *rax_1 = 0;
    let mut var_130: i64 = 1;
    let var_120: i64 = 1;
    let mut var_168: i64 = 0;
    let var_160: i64 = 8;
    let var_158: i64 = 0;
    let rax_2: *mut c_void = *arg4;
    let rdi_1: i64 = *rax_2.byte_offset(0x38);
    let r14_2: i64 = *rax_2.byte_offset(0x30) - rdi_1;
    let rax_4: i64 = core::cmp::Ord::max::hec69546a31dcf558(rdi_1, r14_2 + 1) - r14_2;
    let mut var_148: i64 = 0;
    let var_140: i64 = 8;
    let var_138: i64 = 0;
    let rax_5: i8 = arg4[6];
    let rax_6: i64 = arg4[5];
    let mut var_150: i64 = 0;
    let mut var_118: *mut *mut c_void = &data_4f03b0;
    let mut rbx_1: i8 = 0;
    let mut var_198_1: i64;
    let mut rbx_2: i64;
    
    loop
    {
        let var_c8: *mut i32;
        let mut r15_1: *mut i32 = var_c8;
        var_d0 = 0;
        let mut var_c0: ();
        
        if (var_d0 & 1) == 0
        {
            r15_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h686fc6b9d9a31eab(&var_c0);
        }
        
        if r15_1 == 0
        {
            uu_fmt::linebreak::build_best_path::h2478ba822abd2f37(arg1, s, var_170, rax_1, var_120);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_fmt..linebreak..LineBreak$GT$$GT$::h01ccd16f2d847b8d(var_148, var_140);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hd6f642ba435ff10e(
                var_168, var_160);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hd6f642ba435ff10e(
                var_130, rax_1);
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_fmt..linebreak..LineBreak$GT$$GT$::h01ccd16f2d847b8d(var_180, s);
        }
        
        let rsi_3: *mut c_void =
            *core::option::Option$LT$T$GT$::get_or_insert_with::h63c7918c86c6958e(&var_d0, &var_c0);
        rbp = 1;
        
        if rsi_3 != 0 && *rsi_3.byte_offset(0x38) != 1
        {
            if *rsi_3.byte_offset(0x3a) != 1
            {
                rbp = 0;
            }
            else
            {
                rbp = *r15_1.byte_offset(0x39);
            }
        }
        
        let mut rdx_4: i64 = 0;
        
        if (rax_5 & 1) != 0
        {
            rdx_4 = (rbx_1 & 1) + 1;
        }
        
        if rax_5 != *r15_1.byte_offset(0x3a)
        {
            rdx_4 = (rbx_1 & 1) + 1;
        }
        
        let var_138_1: i64 = 0;
        let var_158_1: i64 = 0;
        let mut r12_1: i64 = 0x7fffffffffffffff;
        rbx_2 = 0;
        
        if var_120 != 0
        {
            let var_1a4_1: i32 = rbp;
            var_198_1 = var_170;
            let mut i: i64 = 0;
            let mut var_108_1: i64 = 0x7fffffffffffffff;
            let mut var_190_1: i64 = 0;
            
            do
            {
                rbx_2 = *(rax_1 + i);
                
                if rbx_2 >= var_198_1
                {
                    goto 'label_462226;
                }
                
                let rax_17: i64 = r12_1;
                let r15_3: i64 = rbx_2 * 5;
                r12_1 = *(s + (r15_3 << 3) + 0x10) - var_150;
                let rdx_5: i64 = *(s + (r15_3 << 3) + 0x18);
                *(s + (r15_3 << 3) + 0x10) = r12_1;
                let mut rcx_4: i64 = var_190_1;
                
                if r12_1 < rax_17
                {
                    rcx_4 = rbx_2;
                }
                
                var_190_1 = rcx_4;
                
                if r12_1 >= rax_17
                {
                    r12_1 = rax_17;
                }
                
                let r15_4: i64 = s + (r15_3 << 3);
                let rbp_4: i64 = *r15_1.byte_offset(0x28) + rdx_4 +
                    uu_fmt::linebreak::BreakArgs::compute_width::h78d96ea40f73ab18(rax_2, r15_1, 
                    rdx_5, *(s + (r15_3 << 3) + 0x25)) + *(r15_4 + 0x18);
                
                if rbp_4 <= *rax_2.byte_offset(0x30)
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h45fd097459a66f62(&var_168, rbx_2);
                    *(r15_4 + 0x25) = 0;
                    *(r15_4 + 0x18) = rbp_4;
                    
                    if rbp_4 >= rax_4
                    {
                        let mut rax_22: i64;
                        let mut zmm0_1: [u32; 0x4];
                        
                        if rsi_3 == 0
                        {
                            zmm0_1 = {0};
                            rax_22 = 0;
                            'label_46200b:
                            let mut rcx_6: i64 = *(r15_4 + 0x10);
                            let r15_5: i64 = rcx_6 + rax_22;
                            
                            if r15_5 < var_108_1
                            {
                                let cond:5_1: bool = rcx_6 > 0;
                                rcx_6 = rcx_6 < 0;
                                let rdx_7: bool = cond:5_1 - rcx_6;
                                let cond:6_1: bool = rax_22 > 0;
                                rax_22 = rax_22 < 0;
                                rcx_6 = cond:6_1;
                                rcx_6 -= rax_22;
                                
                                if rdx_7 <= rcx_6
                                {
                                    let mut var_b0: i64 = rbx_2;
                                    let var_a8_1: *mut i32 = r15_1;
                                    let var_8c_1: i16 = 0x100;
                                    let var_a0_1: i64 = r15_5;
                                    let var_90_1: u32 = zmm0_1[0];
                                    let var_98_1: i64 = rax_6;
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::hd06750a8c7e97312(&var_148, 
                                        &var_b0);
                                    var_108_1 = r15_5;
                                }
                            }
                        }
                        else
                        {
                            zmm0_1 = uu_fmt::linebreak::compute_demerits::hbbee1174f2c8e20d(
                                *rax_2.byte_offset(0x38) - rbp_4, r14_2, *r15_1.byte_offset(0x28), 
                                *(r15_4 + 0x20));
                            
                            if rax_22 <= 0x5af3107a3fff
                            {
                                goto 'label_46200b;
                            }
                        }
                    }
                }
                
                i += 8;
            } while var_120 << 3 != i;
            
            if var_138_1 == 0
            {
                rbp = var_1a4_1;
                rbx_2 = var_190_1;
            }
            else
            {
                let var_138_2: i64 = var_138_1 - 1;
                let rdx_10: i64 = (var_138_1 - 1) * 5;
                let rax_27: i8 = *(var_140 + (rdx_10 << 3) + 0x25);
                rbp = var_1a4_1;
                rbx_2 = var_190_1;
                
                if rax_27 != 2
                {
                    let rcx_8: *mut [u32; 0x4] = var_140 + (rdx_10 << 3);
                    let rdx_11: i16 = *rcx_8.byte_offset(0x26);
                    let var_6b_1: i64 = *rcx_8.byte_offset(0x1d);
                    let var_78_1: i128 = rcx_8[1];
                    let mut var_88: [u32; 0x4] = *rcx_8;
                    let var_63_1: i8 = rax_27;
                    let var_62_1: i16 = rdx_11;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h45fd097459a66f62(&var_168, var_170);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hd06750a8c7e97312(&var_180, &var_88);
                }
            }
        }
        
        if var_158_1 == 0
        {
            var_198_1 = var_170;
            
            if rbx_2 >= var_170
            {
                break;
            }
            
            let rdx: i64 = rbx_2 * 5;
            let mut var_58: ();
            uu_fmt::linebreak::restart_active_breaks::h7c37ac9084c76f9e(&var_58, rax_2, rax_6, 
                *(s + (rdx << 3) + 0x18), *(s + (rdx << 3) + 0x25), rbx_2, r15_1, rdx_4, rax_4);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h45fd097459a66f62(&var_168, var_198_1);
            alloc::vec::Vec$LT$T$C$A$GT$::push::hd06750a8c7e97312(&var_180, &var_58);
            var_150 = 0;
        }
        else
        {
            var_150 = core::cmp::Ord::max::hb4e4eb600e630cd2(r12_1);
        }
        
        core::intrinsics::typed_swap_nonoverlapping::h77cfee96c4607c98(&var_130, &var_168);
        rbx_1 = rbp;
    }
    
    var_118 = &data_4f0368;
    'label_462226:
    core::panicking::panic_bounds_check::h025cadc56a971af7(rbx_2, var_198_1);
    /* no return */
}
