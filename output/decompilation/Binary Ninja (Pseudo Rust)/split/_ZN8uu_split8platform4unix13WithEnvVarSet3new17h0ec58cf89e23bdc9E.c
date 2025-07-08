
  fn uu_split::platform::unix::WithEnvVarSet::new::h0ec58cf89e23bdc9(arg1: *mut i128, arg2: i64) -> i64

{
    let mut var_58: i128;
    std::env::var::h9ad1bceb8fc4ff71(&var_58, "FILE -> \x1b[2mAnsi -- \x1b[8mhe…");
    std::env::set_var::h1f8f4c2c764b6cfd("FILE -> \x1b[2mAnsi -- \x1b[8mhe…", 4, arg2);
    let mut var_38: i128;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha461c13160c52a35(&var_38, 
        "FILE -> \x1b[2mAnsi -- \x1b[8mhe…", 4);
    let result: i64;
    arg1[3] = result;
    arg1[2] = var_38;
    let zmm0: i128 = var_58;
    let var_48: i128;
    arg1[1] = var_48;
    *arg1 = zmm0;
    result
}
