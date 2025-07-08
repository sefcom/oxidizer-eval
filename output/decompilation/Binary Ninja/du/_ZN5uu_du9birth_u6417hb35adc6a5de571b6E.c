
  int64_t uu_du::birth_u64::hb35adc6a5de571b6(int64_t* arg1)

{
    int64_t var_28;
    std::fs::Metadata::created::h8ccef99991753c93(&var_28, arg1);
    int32_t var_20;
    
    if (var_20 != 0x3b9aca00)
    {
        int64_t var_10 = var_28;
        int32_t var_8_1 = var_20;
        std::time::SystemTime::duration_since::hd2a32b95d4b7e9ed(&var_28, &var_10, 0);
        
        if (!var_28)
            return 1;
    }
    else
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..time..SystemTime$C$std..io..error..Error$GT$$GT$::h5f799c8f7658c15d(&var_28);
    
    return 0;
}
