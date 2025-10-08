
  fn just::function::absolute_path::h744f9b4b771655ae(arg1: *mut i64, arg2: *mut i64, arg3: i64) -> *mut i64

{
    let r13: *mut c_void = *arg2;
    let mut var_b0: i32;
    just::execution_context::ExecutionContext::working_directory::hcc9cc51d43cb6ad6(&var_b0, 
        *r13.byte_offset(0x10), *r13.byte_offset(0x18));
    let var_a8: i64;
    let var_a0: u64;
    let mut var_80: i128;
    std::path::Path::join::h1eac0ae5e7efa361(&var_80, var_a8, var_a0, arg3);
    let var_78: i64;
    let var_70: u64;
    let mut var_58: ();
    _$LT$$RF$std..path..Path$u20$as$u20$lexiclean..Lexiclean$GT$::lexiclean::h6a5ff6ae87480de6(
        &var_58, var_78, var_70);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_80);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_b0);
    let var_50: *mut i8;
    let var_48: i64;
    let rdx_4: u64 = core::str::converts::from_utf8::h8a6dc80f786921e0(&var_b0, var_50, var_48);
    let mut rax_2: i64;
    
    if var_b0 != 1
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_b0, var_a8, var_a0);
        arg1[3] = var_a0;
        *arg1.byte_offset(8) = var_b0;
        rax_2 = 0;
    }
    else
    {
        var_80 = *(*r13.byte_offset(0x18)).byte_offset(0x20);
        let mut var_68: *mut i128 = &var_80;
        let var_60_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
        var_b0 = &data_82fd60;
        let var_a8_1: i64 = 1;
        let var_90_1: i64 = 0;
        let var_a0_1: *mut *mut i128 = &var_68;
        let var_98_1: i64 = 1;
        let mut var_40: i128;
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_40, 0, rdx_4, &var_b0);
        let var_30: i64;
        arg1[3] = var_30;
        *arg1.byte_offset(8) = var_40;
        rax_2 = 1;
    }
    
    *arg1 = rax_2;
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_58);
    arg1
}
