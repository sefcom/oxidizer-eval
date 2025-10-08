
  fn just::positional::Positional::override_from_value::h0d8f5d3e1a677c8c(arg1: *mut i128, arg2: *mut i8, arg3: i64) -> i64

{
    let mut result: i64;
    let mut rdx: i64;
    result = core::str::_$LT$impl$u20$str$GT$::find::h77d5b5a2072a0d64(arg2, arg3, 0x3d);
    
    if (result & 1) == 0
    {
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let mut var_98: i64;
        core::str::_$LT$impl$u20$str$GT$::split_at_checked::h496d55096ddfbaef(&var_98, arg2, arg3, 
            rdx);
        let r14_1: i64 = var_98;
        
        if r14_1 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 0, rdx);
            /* no return */
        }
        
        let var_88: *mut i8;
        let mut result_1: i64;
        let mut rax: *mut c_void;
        let mut rdx_3: u64;
        rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, var_88, result_1);
        
        if rax == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(var_88, result_1, 1, result_1);
            /* no return */
        }
        
        let var_90: u64;
        result = just::lexer::Lexer::is_identifier::h7647ec4ff2f9f03d(r14_1, var_90);
        
        if result == 0
        {
            *arg1 = -0x8000000000000000;
        }
        else
        {
            let mut var_60: i128;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_60, r14_1, var_90);
            let mut var_48: i128;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_48, rax, rdx_3);
            result_1 = var_48;
            let zmm0_1: i128 = var_60;
            var_98 = zmm0_1;
            let var_78: i64;
            arg1[2] = var_78;
            let var_38: i64;
            *arg1.byte_offset(0x28) = var_38;
            let var_50: i64;
            arg1[1] = var_50;
            result = result_1;
            *arg1.byte_offset(0x18) = result;
            *arg1 = zmm0_1;
        }
    }
    
    result
}
