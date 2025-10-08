
  fn just::executor::Executor::error::hb67514b2f69537b4(arg1: *mut i8, arg2: *mut i64, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    let var_38: i64 = arg3;
    let r13: i64 = *arg2;
    let mut result: i64;
    let mut var_80: i128;
    let var_70: i64;
    
    if r13 == 0
    {
        let r13_1: *mut c_void = arg2[1];
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_80, r13_1.byte_offset(0x18));
        let mut rbx_1: *mut c_void = *r13_1.byte_offset(8);
        let mut i: i64 = *r13_1.byte_offset(0x10) * 0x30;
        
        while i != 0
        {
            alloc::string::String::push::h0ede46164189e411(&var_80, 0x20);
            let rsi_2: i64 = *rbx_1.byte_offset(8);
            i -= 0x30;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb25a112a407b21ec(&var_80, rsi_2, *rbx_1.byte_offset(0x10) + rsi_2);
            rbx_1 += 0x30;
        }
        
        *arg1.byte_offset(0x30) = var_70;
        *arg1.byte_offset(0x20) = var_80;
        *arg1.byte_offset(8) = arg3;
        *arg1.byte_offset(0x10) = arg4;
        result = arg5;
        *arg1.byte_offset(0x18) = result;
        *arg1 = 0x29;
    }
    else
    {
        let rsi: i64 = arg2[2];
        let mut var_58: i64;
        let mut var_48: i64;
        
        if rsi == 0
        {
            var_58 = -0x8000000000000000;
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_80, rsi, arg2[3]);
            var_48 = var_70;
            var_58 = var_80;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_80, r13, arg2[1]);
        *arg1.byte_offset(0x48) = var_70;
        *arg1.byte_offset(0x38) = var_80;
        *arg1.byte_offset(0x30) = var_48;
        *arg1.byte_offset(0x20) = var_58;
        *arg1.byte_offset(8) = arg3;
        *arg1.byte_offset(0x10) = arg4;
        result = arg5;
        *arg1.byte_offset(0x18) = result;
        *arg1 = 0x2b;
    }
    result
}
