
  fn just::function::justfile::h93d9ea79c0ffb490(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let r14: *mut c_void = *arg2;
    let rax: *mut c_void = *r14.byte_offset(0x18);
    let mut var_28: i32;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_28, *rax.byte_offset(8), 
        *rax.byte_offset(0x10));
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
        let rax_1: *mut c_void = *r14.byte_offset(0x18);
        just::function::justfile::_$u7b$$u7b$closure$u7d$$u7d$::h90a61bfe481a18c7(&arg1[1], 
            *rax_1.byte_offset(8), *rax_1.byte_offset(0x10));
        rax_2 = 1;
    }
    
    *arg1 = rax_2;
    arg1
}
