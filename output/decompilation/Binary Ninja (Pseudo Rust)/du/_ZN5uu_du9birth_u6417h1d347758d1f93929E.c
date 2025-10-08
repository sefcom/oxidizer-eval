
  fn uu_du::birth_u64::h1d347758d1f93929(arg1: *mut i32) -> i64

{
    let mut var_28: i64;
    std::fs::Metadata::created::hedfca1c6312fe34e(&var_28, arg1);
    let var_20: i32;
    
    if var_20 == 0x3b9aca00
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..time..SystemTime$C$std..io..error..Error$GT$$GT$::h35db9f67a6db3bdc(&var_28);
        return 0;
    }
    
    let mut var_10: i64 = var_28;
    let var_8: i32 = var_20;
    std::time::SystemTime::duration_since::h5eaa6a008fb4c137(&var_28, &var_10, 0);
    
    if (var_28 & 1) == 0
    {
        return 1;
    }
    
    0
}
