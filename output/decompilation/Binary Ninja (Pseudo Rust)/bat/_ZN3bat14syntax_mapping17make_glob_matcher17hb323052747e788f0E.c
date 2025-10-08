
  fn bat::syntax_mapping::make_glob_matcher::hb323052747e788f0(arg1: *mut i64, arg2: i64) -> i64

{
    let mut var_70: i64 = arg2;
    let rdx: i64;
    let var_68: i64 = rdx;
    let var_60: i32 = 0x10101;
    let mut var_108: i64;
    globset::glob::GlobBuilder::build::h3efb1676d63a8e5a(&var_108, &var_70);
    let rax: i64 = var_108;
    let var_100: i128;
    let var_f0: i128;
    let var_e0: i128;
    
    if -(rax) == -0x8000000000000000
    {
        *var_108[7] = var_100;
        arg1[1] = 5;
        *arg1.byte_offset(9) = var_108;
        *arg1.byte_offset(0x19) = var_f0;
        *arg1.byte_offset(0x29) = var_e0;
        arg1[7] = *var_e0[7];
        *arg1 = -0x8000000000000000;
        return rax;
    }
    
    let var_c0: i64;
    let var_10: i64 = var_c0;
    let var_d0: i128;
    let var_20: i128 = var_d0;
    let var_50: i128 = var_100;
    let var_40: i128 = var_f0;
    let var_30: i128 = var_e0;
    let mut var_58: i64 = rax;
    globset::glob::Glob::compile_matcher::hb9daa784a9bbb83d(&var_108, &var_58);
    let rax_1: i64 =
        core::ptr::drop_in_place$LT$globset..glob..Glob$GT$::ha01b8c20b49d9ad9(&var_58);
    let var_b8: i128;
    *arg1.byte_offset(0x50) = var_b8;
    *arg1.byte_offset(0x40) = var_d0;
    let zmm0_1: i128 = var_108;
    *arg1.byte_offset(0x30) = var_e0;
    *arg1.byte_offset(0x20) = var_f0;
    *arg1.byte_offset(0x10) = var_100;
    *arg1 = zmm0_1;
    rax_1
}
