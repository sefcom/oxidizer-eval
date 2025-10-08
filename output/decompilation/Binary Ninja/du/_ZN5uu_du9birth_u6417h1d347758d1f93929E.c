
  int64_t uu_du::birth_u64::h1d347758d1f93929(int32_t* arg1)

{
    int64_t var_28;
    std::fs::Metadata::created::hedfca1c6312fe34e(&var_28, arg1);
    int32_t var_20;
    
    if (var_20 == 0x3b9aca00)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..time..SystemTime$C$std..io..error..Error$GT$$GT$::h35db9f67a6db3bdc(&var_28);
        return 0;
    }
    
    int64_t var_10 = var_28;
    int32_t var_8 = var_20;
    std::time::SystemTime::duration_since::h5eaa6a008fb4c137(&var_28, &var_10, 0);
    
    if (!(var_28 & 1))
        return 1;
    
    return 0;
}
