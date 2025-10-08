
  fn ruff_python_formatter::format_node::h929a73521b20fa9a(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void, arg4: i64, arg5: i64, arg6: *mut i128) -> i64

{
    let mut rax: i64;
    let mut rdx: *mut i64;
    rax = _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::hb7bf8dbcda5123a7(arg2.
        byte_offset(0x48));
    let rax_1: u64 =
        ruff_python_formatter::comments::Comments::from_ast::collect_comments::h79a548927313f77b(
        rax, rdx, arg4, arg5, arg3);
    let var_ac: i128 = *arg6;
    let mut var_d8: i64 = arg4;
    let var_d0: i64 = arg5;
    let var_c8: u64 = rax_1;
    let var_c0: *mut c_void = arg2;
    let var_b8: i16 = 0x100;
    let var_b0: i16 = 0;
    let var_9c: i8 = 2;
    let var_ae: i8 = 2;
    let mut var_e0: *mut i64 = arg2.byte_offset(0x48);
    let mut var_98: *mut *mut i64 = &var_e0;
    let var_90: *mut c_void = &data_97f528;
    let mut result_1: i64;
    ruff_formatter::format::hfa250cea0bef8d02(&result_1, &var_d8, &var_98);
    let result: i64 = result_1;
    let var_80: i128;
    var_d8 = var_80;
    
    if -(result) != -0x8000000000000000
    {
        let var_38: i64;
        arg1[0xa] = var_38;
        let var_48: i128;
        *arg1.byte_offset(0x40) = var_48;
        let var_58: i128;
        *arg1.byte_offset(0x30) = var_58;
        let var_68: i128;
        *arg1.byte_offset(0x20) = var_68;
    }
    
    let var_70: i64;
    arg1[3] = var_70;
    *arg1.byte_offset(8) = var_d8;
    *arg1 = result;
    result
}
