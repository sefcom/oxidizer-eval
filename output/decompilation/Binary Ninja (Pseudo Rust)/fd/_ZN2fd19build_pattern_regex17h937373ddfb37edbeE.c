
  fn fd::build_pattern_regex::h937373ddfb37edbe(arg1: *mut i128, arg2: i64, arg3: u64, arg4: i8, arg5: i8) -> u64

{
    let mut var_f8: i128;
    let mut var_e8: i128;
    
    if (arg3 != 0 & arg4) == 0
    {
        let rdi_3: *mut i128 = &var_f8;
        
        if (arg5 & 1) == 0
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc59efc0c75b13120(rdi_3, arg2, arg3);
        }
        else
        {
            regex::escape::ha1711af57c30542e(rdi_3, arg2, arg3);
        }
    }
    else
    {
        let mut var_78: i64 = arg2;
        let var_70_1: u64 = arg3;
        let var_68_1: i32 = 0x10100;
        let mut var_c8: i64;
        globset::glob::GlobBuilder::build::h0c1fa9f366774a6d(&var_c8, &var_78);
        let rax_1: i64 = var_c8;
        let mut var_c0: i128;
        var_f8 = var_c0;
        let mut var_b0: i128;
        let var_a0: i128;
        
        if -(rax_1) == -0x8000000000000000
        {
            let zmm1_1: i128 = var_b0;
            var_b0 = var_a0;
            var_c0 = zmm1_1;
            var_c8 = var_f8;
            let rax_4: u64 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h0a3f7d9fbbc01c83(&var_c8);
            *arg1.byte_offset(8) = rax_4;
            *arg1 = -0x8000000000000000;
            return rax_4;
        }
        
        let var_80: i64;
        let var_18_1: i64 = var_80;
        let var_90: i128;
        let var_28_1: i128 = var_90;
        let var_58_1: i128 = var_f8;
        let var_38_1: u64 = var_a0;
        let mut var_60: i64 = rax_1;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc59efc0c75b13120(&var_c8, *var_b0[8], var_38_1);
        var_e8 = *var_c0[8];
        var_f8 = var_c8;
        core::ptr::drop_in_place$LT$globset..glob..Glob$GT$::h2ed343c1b1664c8f(&var_60);
    }
    
    let rax_3: i64 = var_e8;
    arg1[1] = rax_3;
    *arg1 = var_f8;
    rax_3
}
