
  fn just::function::module_file::hd15dea5ff665aa02(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let r14: *mut c_void = *(*arg2).byte_offset(0x10);
    let mut var_28: i32;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_28, *r14.byte_offset(0x50), 
        *r14.byte_offset(0x58));
    let mut rax_1: i64;
    
    if var_28 != 1
    {
        let var_20: i64;
        let var_18: u64;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_28, var_20, var_18);
        let rax_2: i64 = var_28;
        *arg1.byte_offset(0x10) = var_20;
        arg1[1] = rax_2;
        rax_1 = 0;
    }
    else
    {
        just::function::module_file::_$u7b$$u7b$closure$u7d$$u7d$::ha63e0615b0ae1fe0(&arg1[1], 
            *r14.byte_offset(0x50), *r14.byte_offset(0x58));
        rax_1 = 1;
    }
    
    *arg1 = rax_1;
    arg1
}
