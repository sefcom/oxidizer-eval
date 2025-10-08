
  fn just::function::invocation_directory_native::h9d701e5d86df925d(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let r14: *mut i64 = *arg2;
    let rax: *mut c_void = *r14;
    let mut var_28: i32;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_28, *rax.byte_offset(0x20), 
        *rax.byte_offset(0x28));
    let mut rax_2: i64;
    
    if var_28 != 1
    {
        let var_20: i64;
        let var_18: u64;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_28, var_20, var_18);
        let rax_3: i64 = var_28;
        *arg1.byte_offset(0x10) = var_20;
        arg1[1] = rax_3;
        rax_2 = 0;
    }
    else
    {
        let rax_1: *mut c_void = *r14;
        just::function::invocation_directory_native::_$u7b$$u7b$closure$u7d$$u7d$::heec667df0d6555fc(&arg1[1], *rax_1.byte_offset(0x20), *rax_1.byte_offset(0x28));
        rax_2 = 1;
    }
    
    *arg1 = rax_2;
    arg1
}
