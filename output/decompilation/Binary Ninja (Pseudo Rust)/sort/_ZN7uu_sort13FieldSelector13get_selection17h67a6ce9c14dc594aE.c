
  fn uu_sort::FieldSelector::get_selection::h67a6ce9c14dc594a(arg1: *mut u64, arg2: *mut i64, arg3: *mut i8, arg4: u64, arg5: *mut *mut c_void, arg6: i64) -> u64

{
    let mut r12: u64 = arg4;
    let mut rcx: *mut *mut c_void = nullptr;
    
    if *arg2.byte_offset(0x36) != 0
    {
        rcx = arg5;
    }
    
    let mut rax: *mut c_void;
    let mut rdx_1: *mut c_void;
    rax = uu_sort::FieldSelector::get_range::h94d5816cf09723a2(arg2, arg3, r12, rcx, arg6);
    let mut rbx: *mut c_void = rax;
    let mut r14: *mut c_void = rdx_1;
    let mut rax_1: *mut c_void;
    let mut rdx_3: *mut c_void;
    rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(rax, rdx_1, arg3, r12);
    let mut rdi_7: *mut c_void;
    
    if rax_1 == 0
    {
        rdi_7 = arg3;
        'label_521caa:
        core::str::slice_error_fail::h5dbb61534404fe7e(rdi_7, r12, rbx, r14);
        /* no return */
    }
    
    let mut result: u64 = *(arg2 + 0x35);
    let mut var_60: i64;
    let var_58: i8;
    
    if result < 2
    {
        let var_34_1: bool = result == 1;
        let mut var_3c: i64 = 0x2e00110000;
        uu_sort::numeric_str_cmp::NumInfo::parse::h2d1625adef450396(&var_60, rax_1, rdx_3, &var_3c);
        let r12_1: i64 = var_60;
        let var_50: *mut c_void;
        let var_48: *mut c_void;
        let mut rdx_5: i64;
        result = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(var_50, var_48, rax_1, rdx_3);
        
        if result == 0
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(rax_1, rdx_3, var_50, var_48);
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
    let mut rax_2: *mut c_void;
    let mut rdx_6: *mut c_void;
    rax_2 = uu_sort::get_leading_gen::h381fabafeef8de83(rax_1, rdx_3);
    rbx = rax_2;
    r14 = rdx_6;
    let mut rax_3: *mut c_void;
    let mut rdx_8: u64;
    rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(rax_2, rdx_6, rax_1, r12);
    
    if rax_3 == 0
    {
        rdi_7 = rax_1;
        goto 'label_521caa;
    }
    
    let mut zmm0_1: f64 = core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::hfde7dd7a3aaead31(&var_60, rax_3, rdx_8);
    let mut rcx_4: *mut u64;
    
    if var_60 == 0
    {
        zmm0_1 = var_58;
        
        if FCMP_UO(zmm0_1, zmm0_1)
        {
            result = 1;
            rcx_4 = arg1;
        }
        else
        {
            rcx_4 = arg1;
            
            if -inf.0 < zmm0_1
            {
                zmm0_1 - inf.0;
                result = 3 + 1;
            }
            else
            {
                result = 2;
            }
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
    result
}
