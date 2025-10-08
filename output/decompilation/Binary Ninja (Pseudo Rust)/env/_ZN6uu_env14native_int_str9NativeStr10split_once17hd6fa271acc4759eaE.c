
  fn uu_env::native_int_str::NativeStr::split_once::hd6fa271acc4759ea(arg1: *mut i128, arg2: *mut i64, arg3: *mut i32) -> *mut i128

{
    let mut rax: i8;
    let mut rdx: i8;
    rax = uu_env::native_int_str::get_single_native_int_value::h3916294b36a5dcb6(arg3);
    let mut var_88: i64;
    let mut rax_3: i8;
    let mut rdx_1: i64;
    let mut r15_1: i64;
    
    if (rax & 1) != 0
    {
        let mut var_89: i8 = rdx;
        let rax_1: i64 = arg2[1];
        r15_1 = arg2[2];
        var_88 = rax_1;
        let var_80_1: i64 = rax_1 + r15_1;
        rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h63e9c5b79db2e425(&var_88, &var_89);
    }
    
    if (rax & 1) == 0 || (rax_3 & 1) == 0
    {
        *arg1 = -0x7fffffffffffffff;
    }
    else
    {
        let mut var_58: i128;
        uu_env::native_int_str::NativeStr::slice::h43fb2a01de359fa5(&var_58, arg2, 0, rdx_1);
        let mut var_40: i128;
        uu_env::native_int_str::NativeStr::slice::h43fb2a01de359fa5(&var_40, arg2, rdx_1 + 1, 
            r15_1);
        let zmm0_1: i128 = var_58;
        var_88 = zmm0_1;
        let zmm1_1: i128 = var_40;
        *arg1 = zmm0_1;
        arg1[2] = *zmm1_1[8];
        let var_30: i64;
        *arg1.byte_offset(0x28) = var_30;
        let var_48: i64;
        arg1[1] = var_48;
        *arg1.byte_offset(0x18) = zmm1_1;
    }
    
    arg1
}
