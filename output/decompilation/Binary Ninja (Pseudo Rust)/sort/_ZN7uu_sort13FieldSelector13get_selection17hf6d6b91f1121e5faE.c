
  fn uu_sort::FieldSelector::get_selection::hf6d6b91f1121e5fa(arg1: *mut u64, arg2: *mut i64, arg3: *mut i8, arg4: u64, arg5: *mut i64, arg6: i64) -> u64

{
    let mut r12: u64 = arg4;
    let mut rcx: *mut i64 = nullptr;
    
    if *arg2.byte_offset(0x36) != 0
    {
        rcx = arg5;
    }
    
    let mut rax: u64;
    let mut rdx_1: i64;
    rax = uu_sort::FieldSelector::get_range::h36eed4fe0a7f87ec(arg2, arg3, r12, rcx, arg6);
    let mut rbx: u64 = rax;
    let mut r14: i64 = rdx_1;
    let mut rax_1: *mut c_void;
    let mut rdx_3: u64;
    rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax, rdx_1, arg3, r12);
    let mut rdi_7: *mut c_void;
    
    if rax_1 == 0
    {
        rdi_7 = arg3;
    }
    else
    {
        let mut result: u64 = *(arg2 + 0x35);
        let mut var_60: i64;
        let var_58: i8;
        
        if result < 2
        {
            let var_34_1: bool = result == 1;
            let mut var_3c: i64 = 0x2e00110000;
            uu_sort::numeric_str_cmp::NumInfo::parse::h9568947bf0c3d82d(&var_60, rax_1, rdx_3, 
                &var_3c);
            let r12_1: i64 = var_60;
            let var_50: i64;
            let var_48: i64;
            let mut rdx_5: i64;
            result = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(var_50, var_48, rax_1, rdx_3);
            
            if result == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(rax_1, rdx_3, var_50, var_48);
                /* no return */
            }
            
            *arg1 = result;
            arg1[1] = rdx_5;
            arg1[2] = r12_1;
            arg1[3] = var_58;
            return result;
        }
        
        let mut rbp: u64;
        
        if result != 2
        {
            *arg1 = rax_1;
            arg1[1] = rdx_3;
            rbp = 4;
            arg1[3] = rbp;
            return result;
        }
        
        r12 = rdx_3;
        let mut rax_2: u64;
        let mut rdx_6: i64;
        rax_2 = uu_sort::get_leading_gen::h7fd24a66a114d51a(rax_1, rdx_3);
        rbx = rax_2;
        r14 = rdx_6;
        let mut rax_3: *mut c_void;
        let mut rdx_8: *mut i64;
        rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_2, rdx_6, rax_1, r12);
        
        if rax_3 != 0
        {
            let mut zmm0_1: f64 = core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::h05023748d9faa6d2(&var_60, rax_3, rdx_8);
            let mut rcx_4: *mut u64;
            
            if var_60 == 0
            {
                zmm0_1 = var_58;
                rcx_4 = arg1;
                
                if FCMP_UO(zmm0_1, zmm0_1)
                {
                    result = 1;
                }
                else if -0x10000000000000 < zmm0_1
                {
                    zmm0_1 - inf.0;
                    result = 3 + 1;
                }
                else
                {
                    result = 2;
                }
            }
            else
            {
                result = 0;
                rcx_4 = arg1;
            }
            
            *rcx_4 = result;
            rcx_4[1] = zmm0_1;
            rbp = 2;
            rcx_4[3] = rbp;
            return result;
        }
        
        rdi_7 = rax_1;
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(rdi_7, r12, rbx, r14);
    /* no return */
}
