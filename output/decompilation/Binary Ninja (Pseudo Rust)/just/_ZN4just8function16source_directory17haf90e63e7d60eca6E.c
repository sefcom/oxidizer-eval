
  fn just::function::source_directory::haf90e63e7d60eca6(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let rax_1: *mut c_void = *(*arg2).byte_offset(0x18);
    let mut rax_2: *mut i8;
    let mut rdx: u64;
    rax_2 =
        std::path::Path::parent::hef287f60afa56900(*rax_1.byte_offset(8), *rax_1.byte_offset(0x10));
    
    if rax_2 == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let r14: i64 = arg2[1];
    let r15_1: u64 = arg2[2];
    let mut var_30: ();
    std::path::Path::join::h1eac0ae5e7efa361(&var_30, rax_2, rdx, r14);
    let var_28: i64;
    let var_20: i64;
    let mut rax_3: *mut i8;
    let mut rdx_1: i64;
    rax_3 = std::path::Path::parent::hef287f60afa56900(var_28, var_20);
    
    if rax_3 == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut var_48: i32;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_48, rax_3, rdx_1);
    let var_38: u64;
    
    if var_48 != 1
    {
        let var_40: i64;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_48, var_40, var_38);
        let rax_5: i64 = var_48;
        *arg1.byte_offset(0x10) = var_40;
        arg1[1] = rax_5;
        *arg1 = 0;
    }
    else
    {
        just::function::source_file::_$u7b$$u7b$closure$u7d$$u7d$::hcf6ded2bba2f6f75(&var_48, r14, 
            r15_1);
        arg1[3] = var_38;
        *arg1.byte_offset(8) = var_48;
        *arg1 = 1;
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_30);
    arg1
}
