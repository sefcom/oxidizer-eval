
  fn uu_head::parse::parse_num::h03514696a27c7578(arg1: u64, arg2: i64, arg3: u64) -> *mut i64

{
    let mut rax: *mut i8;
    let mut rdx: i64;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::h3dd4052efcf88c0e(arg2, arg3);
    let mut r15: *mut i8 = rax;
    let mut r14: i64 = rdx;
    let mut var_50: *mut i8 = r15;
    let mut rax_2: i8;
    let mut rdx_1: i32;
    rax_2 = core::str::validations::next_code_point::h2ff41328517a3a4f(&var_50, arg1);
    let mut result: *mut i64;
    
    if (rax_2 & 1) == 0
    {
        result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc3a09e7815fd3a4c(arg1 + 8, arg2, arg3);
        *arg1 = 1;
    }
    else
    {
        let mut rbp_1: i32;
        
        if rdx_1 == 0x2b || rdx_1 == 0x2d
        {
            let mut rax_3: *mut i8;
            let mut rdx_2: i64;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15, r14);
            
            if rax_3 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(r15, r14, 1, r14);
                /* no return */
            }
            
            rbp_1 = rdx_1 == 0x2d;
            r14 = rdx_2;
            r15 = rax_3;
        }
        else
        {
            rbp_1 = 0;
        }
        
        let mut rdx_4: u64;
        result = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h92d05917bc16c8c8(r15, r14);
        
        if rdx_4 == 0
        {
            *(arg1 + 8) = 0;
            *(arg1 + 0x10) = rbp_1;
            *arg1 = 4;
        }
        else
        {
            result = uucore::features::parser::parse_size::parse_size_u64_max::hec104ac5ce610c62(
                &var_50, result, rdx_4);
            
            if var_50 != 4
            {
                let zmm0_1: i128 = var_50;
                let var_40: i128;
                *(arg1 + 0x10) = var_40;
                *arg1 = zmm0_1;
            }
            else
            {
                result = &rax[rdx];
                *(arg1 + 8) = result;
                *(arg1 + 0x10) = rbp_1;
                *arg1 = 4;
            }
        }
    }
    
    result
}
