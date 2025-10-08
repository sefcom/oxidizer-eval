
  fn alacritty::input::Processor$LT$T$C$A$GT$::scroll_terminal::h19a40c0c4c7b1806(arg1: *mut i64, arg2: [f64; 0x2] @ zmm0, arg3: u128 @ zmm1, arg4: [f64; 0x2] @ zmm2) -> i64

{
    let mut var_c8: u128 = arg4;
    let r14: *mut c_void = arg1[6];
    let mut var_58: i128;
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_58, r14);
    let var_40: i32;
    let zmm0: f64 = var_40;
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_58, r14);
    let var_3c: i32;
    let mut zmm0_1: [f64; 0x2] = var_3c;
    zmm0_1[0] = zmm0_1[0];
    let var_a8: i64 = zmm0_1;
    let r14_1: *mut c_void = arg1[1];
    let mut rbp: u64;
    let mut zmm1: u128;
    
    if _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::mouse_mode::h5645ae47cef353d4(r14_1) == 0
    {
        let mut r14_3: *mut i8;
        
        if (!*r14_1.byte_offset(0x6dc) & 0x9000) == 0
        {
            r14_3 = arg1[5];
        }
        
        if (!*r14_1.byte_offset(0x6dc) & 0x9000) != 0 || (*r14_3 & 4) != 0
        {
            zmm0_1 = arg3;
            zmm0_1[0] = zmm0_1[0] * var_c8;
            let r14_8: *mut c_void = arg1[3];
            zmm0_1[0] = zmm0_1[0] + *r14_8.byte_offset(0x18);
            *r14_8.byte_offset(0x18) = zmm0_1;
            var_c8 = r14_8;
            zmm1 = zmm0_1 / var_a8;
            let rax_8: i32 = __minsd_xmmsd_memsd(
                __maxsd_xmmsd_memsd(zmm1[0], -0x3e20000000000000)[0], 0x41dfffffffc00000)[0];
            let mut rdx_5: i32 = 0;
            
            if FCMP_O(zmm1, zmm1)
            {
                rdx_5 = rax_8;
            }
            
            if rdx_5 != 0
            {
                _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::scroll::h2700179c7835b4fb(arg1);
            }
        }
        else
        {
            let temp0_7: [f64; 0x2] = __unpcklpd_xmmpd_memdq(arg2, arg3);
            var_c8 = _mm_mul_pd(_mm_unpacklo_pd(var_c8, var_c8), temp0_7);
            let r13_1: *mut c_void = arg1[3];
            zmm1 = __addpd_xmmpd_mempd(*r13_1.byte_offset(0x10), var_c8);
            let var_98_2: u128 = zmm1;
            zmm0_1 = _mm_xor_pd(temp0_7, temp0_7);
            rbp = 0x42;
            rbp = 0x42 - (arg3[0] > zmm0_1[0]);
            let cond:1_1: bool = arg2[0] > zmm0_1[0];
            *r13_1.byte_offset(0x10) = zmm1;
            let mut var_b8: u128;
            var_b8 = cond:1_1 + 0x43;
            zmm0_1 = var_98_2;
            let temp0_12: [f64; 0x2] = _mm_unpackhi_pd(zmm0_1, zmm0_1[0]);
            temp0_12[0] = temp0_12[0] / var_a8;
            zmm0_1 = __andpd_xmmxuq_memxuq(temp0_12, data_4e7800);
            let rax_4: i64 = zmm0_1[0];
            zmm1 = zmm0_1 - 9.2233720368547758e+18;
            let mut r14_6: i64 = (zmm1 & rax_4 >> 0x3f) | rax_4;
            
            if zmm0_1[0] < 0.0
            {
                r14_6 = 0;
            }
            
            if zmm0_1[0] > 1.844674407370955e+19
            {
                r14_6 = -1;
            }
            
            var_c8 = r13_1;
            zmm1 = var_98_2 / zmm0;
            zmm1 = __andpd_xmmxuq_memxuq(zmm1, data_4e7800);
            let rax_5: i64 = zmm1;
            zmm0_1 = zmm1;
            zmm0_1[0] = zmm0_1[0] - 9.2233720368547758e+18;
            let mut r13_4: i64 = (zmm0_1[0] & rax_5 >> 0x3f) | rax_5;
            
            if zmm1 < 0.0
            {
                r13_4 = 0;
            }
            
            if zmm1 > 1.844674407370955e+19
            {
                r13_4 = -1;
            }
            
            let mut rax_7: i64;
            let mut rdx_1: i64;
            rax_7 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(
                (r13_4 + r14_6) * 3, 1, 1);
            let mut var_80: i64 = rax_7;
            let var_78_1: i64 = rdx_1;
            let var_70_1: i64 = 0;
            let mut r14_7: i64 = r14_6 + 1;
            
            loop
            {
                let temp2_1: i64 = r14_7;
                r14_7 -= 1;
                
                if temp2_1 == 1
                {
                    break;
                }
                
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_80, 0x1b);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_80, 0x4f);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_80, rbp);
            }
            
            let mut r13_5: i64 = r13_4 + 1;
            
            loop
            {
                let temp3_1: i64 = r13_5;
                r13_5 -= 1;
                
                if temp3_1 == 1
                {
                    break;
                }
                
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_80, 0x1b);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_80, 0x4f);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_80, var_b8);
            }
            
            let var_48_1: i64 = var_70_1;
            var_58 = var_80;
            _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::write_to_pty::h8c41aa14fceee80b(*arg1, &var_58);
        }
    }
    else
    {
        let r14_2: *mut c_void = arg1[3];
        zmm0_1 = *r14_2.byte_offset(0x10);
        let temp0_1: [f64; 0x2] = _mm_add_pd(_mm_unpacklo_pd(arg2, arg3), zmm0_1);
        let mut var_98_1: [f64; 0x2] = temp0_1;
        *r14_2.byte_offset(0x10) = temp0_1;
        rbp = arg3 > _mm_xor_pd(zmm0_1, zmm0_1)[0];
        var_c8 = r14_2;
        let temp0_3: [f64; 0x2] = _mm_unpackhi_pd(var_98_1, var_98_1[0]);
        temp0_3[0] = temp0_3[0] / var_a8;
        zmm0_1 = __andpd_xmmxuq_memxuq(temp0_3, data_4e7800);
        let cond:0_1: bool = FCMP_UO(zmm0_1[0], zmm0_1[0]);
        let mut i_2: i32 = __minsd_xmmsd_memsd(
            __maxsd_xmmsd_memsd(zmm0_1[0], -0x3e20000000000000)[0], 0x41dfffffffc00000)[0];
        
        if cond:0_1
        {
            i_2 = 0;
        }
        
        if i_2 > 0
        {
            rbp ^= 0x41;
            let mut i: i32;
            
            do
            {
                alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(arg1, 
                    rbp, 0);
                i = i_2;
                i_2 -= 1;
            } while i != 1;
            var_98_1 = *var_c8.byte_offset(0x10);
        }
        
        rbp = arg2[0] > 0.0;
        zmm1 = var_98_1 / zmm0;
        zmm1 = __andpd_xmmxuq_memxuq(zmm1, data_4e7800);
        let mut i_3: i32 = __minsd_xmmsd_memsd(
            __maxsd_xmmsd_memsd(zmm1[0], -0x3e20000000000000)[0], 0x41dfffffffc00000)[0];
        
        if FCMP_UO(zmm1, zmm1)
        {
            i_3 = 0;
        }
        
        if i_3 > 0
        {
            rbp ^= 0x43;
            let mut i_1: i32;
            
            do
            {
                alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(arg1, 
                    rbp, 0);
                i_1 = i_3;
                i_3 -= 1;
            } while i_1 != 1;
        }
    }
    let r14_9: *mut c_void = var_c8;
    *r14_9.byte_offset(0x10) = fmod((*r14_9.byte_offset(0x10))[0], zmm0);
    let mut result: i64;
    let mut zmm0_4: i64;
    result = fmod(*r14_9.byte_offset(0x18), var_a8);
    *r14_9.byte_offset(0x18) = zmm0_4;
    result
}
