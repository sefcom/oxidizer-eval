
  fn uu_tail::args::parse_num::hf0843dd0db285fb1(arg1: u64, arg2: i64, arg3: i64) -> i64

{
    let mut rax: *mut c_void;
    let mut rdx: u64;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::h4e90a49aa4a98ea5(arg2, arg3);
    let mut r15: *mut c_void = rax;
    let mut r14: u64 = rdx;
    let rax_2: *mut c_void = rdx + r15;
    let mut var_58: *mut c_void = r15;
    let mut rax_3: i32;
    let mut rdx_1: i32;
    rax_3 = core::str::validations::next_code_point::habe44cbb115926fa(&var_58, arg1);
    let mut rbp: i64;
    
    if rax_3 == 0
    {
        rbp = 0;
    }
    else
    {
        let mut rax_4: *mut c_void;
        let mut rdx_2: u64;
        
        if rdx_1 == 0x2b
        {
            rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r15, r14);
            
            if rax_4 == 0
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(r15, r14, 1, r14);
                /* no return */
            }
            
            rbp = 1;
            r14 = rdx_2;
            r15 = rax_4;
        }
        else if rdx_1 != 0x2d
        {
            rbp = 0;
        }
        else
        {
            rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r15, r14);
            
            if rax_4 == 0
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(r15, r14, 1, r14);
                /* no return */
            }
            
            rbp = 0;
            r14 = rdx_2;
            r15 = rax_4;
        }
    }
    
    uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_58, r15, r14);
    let mut rax_7: i64;
    
    if var_58 != 3
    {
        let mut var_38: i128;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&var_38, 
            r15, r14);
        let var_28: i64;
        *(arg1 + 0x18) = var_28;
        *(arg1 + 8) = var_38;
        rax_7 = 1;
    }
    else
    {
        if rax_2 == 0
        {
            if rbp == 0
            {
                *(arg1 + 8) = 3;
            }
            else
            {
                *(arg1 + 8) = 2;
            }
        }
        else if rbp == 0
        {
            *(arg1 + 8) = 0;
            *(arg1 + 0x10) = rax_2;
        }
        else
        {
            *(arg1 + 8) = 1;
            *(arg1 + 0x10) = rax_2;
        }
        
        rax_7 = 3;
    }
    
    *arg1 = rax_7;
    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::h1cd421d162b21d56(&var_58)
}
