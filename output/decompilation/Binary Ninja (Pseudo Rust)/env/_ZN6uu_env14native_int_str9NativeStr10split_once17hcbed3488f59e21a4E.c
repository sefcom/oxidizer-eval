
  fn uu_env::native_int_str::NativeStr::split_once::hcbed3488f59e21a4(arg1: *mut i128, arg2: *mut i64, arg3: *mut i32) -> *mut i128

{
    let mut rax: i8;
    let mut rdx: i8;
    rax = uu_env::native_int_str::get_single_native_int_value::h9b0956bba8ba8cc0(arg3);
    let mut var_88: i64;
    let mut rax_3: i64;
    let mut rdx_1: i64;
    let mut r15_1: i64;
    
    if (rax & 1) != 0
    {
        let mut var_89: i8 = rdx;
        let rax_1: i64 = arg2[1];
        r15_1 = arg2[2];
        var_88 = rax_1;
        let var_80_1: i64 = rax_1 + r15_1;
        rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::hb87f3f3f23ac2fda(&var_88, &var_89);
    }
    
    if (rax & 1) == 0 || rax_3 == 0
    {
        *arg1 = -0x7fffffffffffffff;
    }
    else
    {
        let mut var_50: i128;
        uu_env::native_int_str::NativeStr::slice::ha03bc113a9a10a12(&var_50, arg2, 0, rdx_1);
        let mut var_38: i128;
        uu_env::native_int_str::NativeStr::slice::ha03bc113a9a10a12(&var_38, arg2, rdx_1 + 1, 
            r15_1);
        let zmm0_1: i128 = var_50;
        var_88 = zmm0_1;
        let zmm1_1: i128 = var_38;
        *arg1 = zmm0_1;
        arg1[2] = *zmm1_1[8];
        let var_28: i64;
        *arg1.byte_offset(0x28) = var_28;
        let var_40: i64;
        arg1[1] = var_40;
        *arg1.byte_offset(0x18) = zmm1_1;
    }
    
    arg1
}
