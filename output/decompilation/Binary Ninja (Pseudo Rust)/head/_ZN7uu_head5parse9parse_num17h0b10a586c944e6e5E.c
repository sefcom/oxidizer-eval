
  fn uu_head::parse::parse_num::h0b10a586c944e6e5(arg1: u64, arg2: i64, arg3: u64) -> u64

{
    let mut rax: *mut i8;
    let mut rdx: *mut c_void;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::h3f31f53537262b42(arg2, arg3);
    let mut r15: *mut i8 = rax;
    let mut r14: *mut c_void = rdx;
    let mut var_50: *mut i8 = r15;
    let mut rax_2: i32;
    let mut rdx_1: i32;
    rax_2 = core::str::validations::next_code_point::hbd45400f08067c57(&var_50, arg1);
    
    if rax_2 == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h06f047f66f37fa7f(arg1 + 8, 
            arg2, arg3);
        *arg1 = 1;
    }
    else
    {
        let mut rbp_1: i32;
        
        if rdx_1 == 0x2b || rdx_1 == 0x2d
        {
            let mut rax_3: *mut i8;
            let mut rdx_2: *mut c_void;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r15, r14);
            
            if rax_3 == 0
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(r15, r14, 1, r14);
                /* no return */
            }
            
            rbp_1 = rdx_1 == 0x2d;
            r15 = rax_3;
            r14 = rdx_2;
        }
        else
        {
            rbp_1 = 0;
        }
        
        let mut rax_4: *mut c_void;
        let mut rdx_4: u64;
        rax_4 =
            core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h64aa6c7f4fac8ad0(r15, r14, 0x30);
        
        if rdx_4 == 0
        {
            *(arg1 + 8) = 0;
            *(arg1 + 0x10) = rbp_1;
            *arg1 = 3;
        }
        else
        {
            uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_50, rax_4, rdx_4);
            
            if var_50 != 3
            {
                let zmm0_1: i128 = var_50;
                let var_40: i128;
                *(arg1 + 0x10) = var_40;
                *arg1 = zmm0_1;
            }
            else
            {
                *(arg1 + 8) = rax.byte_offset(rdx);
                *(arg1 + 0x10) = rbp_1;
                *arg1 = 3;
            }
        }
    }
    
    arg1
}
