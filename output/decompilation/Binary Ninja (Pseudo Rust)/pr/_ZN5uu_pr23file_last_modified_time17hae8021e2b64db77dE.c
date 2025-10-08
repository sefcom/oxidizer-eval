
  fn uu_pr::file_last_modified_time::hae8021e2b64db77d(arg1: *mut i64, arg2: i64) -> i64

{
    let mut var_b8: i32;
    std::fs::metadata::h17f73c8d2a6d1ec6(&var_b8, arg2);
    let mut var_d0: i64;
    
    if var_b8 != 2
    {
        uu_pr::file_last_modified_time::_$u7b$$u7b$closure$u7d$$u7d$::h39d1768db5370a89(&var_d0);
    }
    else
    {
        let var_b0: i64;
        let var_c8_1: i64 = var_b0;
        var_d0 = -0x8000000000000000;
    }
    
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::hf6638d2eb1437ac8(arg1, &var_d0)
}
