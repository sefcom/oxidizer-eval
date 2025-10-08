
  fn uu_env::native_int_str::NativeStr::match_cow::h8b6998fcb53fa1c3(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64) -> i64

{
    let r10: i64 = arg2[1];
    let rax: i64 = arg2[2];
    
    if !(0 + -(*arg2))
    {
        let mut var_28: i64;
        uu_env::native_int_str::NativeStr::slice::_$u7b$$u7b$closure$u7d$$u7d$::h456473c1385a89bd(
            &var_28, arg5, arg6, r10, rax);
        let mut rax_2: i64 = var_28;
        let var_20: i128;
        
        if rax_2 != -0x8000000000000000
        {
            *arg1.byte_offset(8) = var_20;
        }
        else
        {
            rax_2 = -0x7fffffffffffffff;
        }
        *arg1 = rax_2;
        return rax_2;
    }
    
    let mut rax_1: i64;
    let mut rdx_1: i64;
    rax_1 =
        uu_env::native_int_str::NativeStr::slice::_$u7b$$u7b$closure$u7d$$u7d$::h7067d6e8c3543060(
        arg3, arg4, r10, rax);
    
    if rax_1 == 0
    {
        *arg1 = -0x7fffffffffffffff;
        return rax_1;
    }
    
    *arg1 = -0x8000000000000000;
    arg1[1] = rax_1;
    arg1[2] = rdx_1;
    rax_1
}
