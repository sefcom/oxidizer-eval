
  fn uu_dd::stdout_canonicalized::hef58783e4e0e6eba(arg1: *mut i128) -> i64

{
    let mut var_38: i64;
    std::fs::canonicalize::ha7e4f88fb6f253b5(&var_38);
    
    if !(0 + -(var_38))
    {
        let result: i64;
        arg1[1] = result;
        *arg1 = var_38;
        return result;
    }
    
    let mut var_20: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h074386e79a8fa9e7(&var_20, "/dev/stdout(uutils coreutils) 0.…", 0xb);
    let var_10: i64;
    arg1[1] = var_10;
    *arg1 = var_20;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hadbbabfab163644f(&var_38)
}
