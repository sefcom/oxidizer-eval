
  fn just::function::canonicalize::hfe002d29e7de8b87(arg1: *mut i64, arg2: *mut i64, arg3: i64) -> *mut i64

{
    let rax: *mut c_void = *arg2;
    let mut var_70: ();
    just::execution_context::ExecutionContext::working_directory::hcc9cc51d43cb6ad6(&var_70, 
        *rax.byte_offset(0x10), *rax.byte_offset(0x18));
    let mut var_a0: i32;
    let var_68: i64;
    let var_60: u64;
    std::path::Path::join::h1eac0ae5e7efa361(&var_a0, var_68, var_60, arg3);
    let mut var_88: i64;
    let rdx_2: u64 = std::fs::canonicalize::h0e68419a5b222fcb(&var_88, &var_a0);
    let mut rdi_4: *mut c_void;
    let var_90: u64;
    let var_80: *mut i8;
    
    if !(0 + -(var_88))
    {
        let zmm0: i128 = var_88;
        let var_58_1: i128 = zmm0;
        let var_78: u64;
        let var_48_1: u64 = var_78;
        var_88 = zmm0;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_70);
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_a0, var_80, var_78);
        
        if var_a0 != 1
        {
            let var_98: i64;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_a0, var_98, var_90);
            let rax_4: i64 = var_a0;
            *arg1.byte_offset(0x10) = var_98;
            arg1[1] = rax_4;
            *arg1 = 0;
        }
        else
        {
            just::function::canonicalize::_$u7b$$u7b$closure$u7d$$u7d$::h5fc101f594e3c7cd(&var_a0, 
                var_80, var_78);
            arg1[3] = var_90;
            *arg1.byte_offset(8) = var_a0;
            *arg1 = 1;
        }
        
        rdi_4 = &var_88;
    }
    else
    {
        just::function::canonicalize::_$u7b$$u7b$closure$u7d$$u7d$::h74a6ba135ea1e9ad(&var_a0, 
            var_80, rdx_2);
        let zmm0_1: i128 = var_a0;
        let var_58: i128 = zmm0_1;
        let var_48: u64 = var_90;
        arg1[3] = var_90;
        *arg1.byte_offset(8) = zmm0_1;
        *arg1 = 1;
        rdi_4 = &var_70;
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(rdi_4);
    arg1
}
