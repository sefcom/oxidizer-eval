
  fn just::function::module_directory::h0cd8c27649f24539(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let rax_1: *mut c_void = *(*arg2).byte_offset(0x10);
    let mut rax_2: *mut i8;
    let mut rdx: u64;
    rax_2 = std::path::Path::parent::hef287f60afa56900(*rax_1.byte_offset(0x50), 
        *rax_1.byte_offset(0x58));
    
    if rax_2 == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut var_30: i8;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_30, rax_2, rdx);
    let mut rax_3: i64;
    
    if (var_30 & 1) == 0
    {
        let var_28: i64;
        let var_20: u64;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_30, var_28, var_20);
        let rax_4: i64 = var_30;
        *arg1.byte_offset(0x10) = var_28;
        arg1[1] = rax_4;
        rax_3 = 0;
    }
    else
    {
        just::function::module_directory::_$u7b$$u7b$closure$u7d$$u7d$::hbe078cf44c80cd1c(&arg1[1], 
            rax_2, rdx);
        rax_3 = 1;
    }
    
    *arg1 = rax_3;
    arg1
}
