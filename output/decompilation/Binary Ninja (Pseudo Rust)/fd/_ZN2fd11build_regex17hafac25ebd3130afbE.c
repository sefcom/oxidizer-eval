
  fn fd::build_regex::hafac25ebd3130afb(arg1: *mut i128, arg2: *mut i64, arg3: i8) -> i64

{
    let var_23: i8 = arg3 ^ 1;
    let var_21: i8 = 1;
    let mut var_f8: i64;
    let mut var_c0: ();
    regex::builders::bytes::RegexBuilder::build::h23923507195ef952(&var_f8, &var_c0, 
        regex::builders::bytes::RegexBuilder::new::h2f32573bd11b65d4(&var_c0, arg2[1]));
    let var_f0: i128;
    
    if var_f8 == 0
    {
        let var_e0: i64;
        let var_c8_1: i64 = var_e0;
        let mut var_d8: i128 = var_f0;
        *arg1.byte_offset(8) =
            fd::build_regex::_$u7b$$u7b$closure$u7d$$u7d$::h05e71917cf7509f8(&var_d8);
        *arg1 = 0;
    }
    else
    {
        let zmm0: i128 = var_f8;
        arg1[1] = var_f0;
        *arg1 = zmm0;
    }
    core::ptr::drop_in_place$LT$regex..builders..bytes..RegexBuilder$GT$::h884a6b40962375bb(
        &var_c0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6194a405d9e61c9b(arg2)
}
