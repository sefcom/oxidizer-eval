
  fn just::function::justfile_directory::ha9a6716f71b3c245(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let r15: *mut c_void = *arg2;
    let rax: *mut c_void = *r15.byte_offset(0x18);
    let mut rax_1: *mut i8;
    let mut rdx: u64;
    rax_1 = std::path::Path::parent::hef287f60afa56900(*rax.byte_offset(8), *rax.byte_offset(0x10));
    let mut rax_5: i64;
    let mut var_30: i128;
    let var_20: u64;
    
    if rax_1 == 0
    {
        let rax_2: *mut c_void = *r15.byte_offset(0x18);
        just::function::justfile_directory::_$u7b$$u7b$closure$u7d$$u7d$::hb8e430af5dd1690b(
            &var_30, *rax_2.byte_offset(8), *rax_2.byte_offset(0x10));
        *arg1.byte_offset(8) = var_30;
        arg1[3] = var_20;
        rax_5 = 1;
    }
    else
    {
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_30, rax_1, rdx);
        
        if (var_30 & 1) == 0
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_30, *var_30[8], var_20);
            let rax_4: i64 = var_30;
            *arg1.byte_offset(0x10) = var_30;
            arg1[1] = rax_4;
            rax_5 = 0;
        }
        else
        {
            just::function::justfile_directory::_$u7b$$u7b$closure$u7d$$u7d$::h0987920aa1e182e9(
                &arg1[1], rax_1, rdx);
            rax_5 = 1;
        }
    }
    *arg1 = rax_5;
    arg1
}
