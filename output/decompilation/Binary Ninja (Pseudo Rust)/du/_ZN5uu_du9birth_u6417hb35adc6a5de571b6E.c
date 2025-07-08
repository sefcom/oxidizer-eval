
  fn uu_du::birth_u64::hb35adc6a5de571b6(arg1: *mut i64) -> i64

{
    let mut var_28: i64;
    std::fs::Metadata::created::h8ccef99991753c93(&var_28, arg1);
    let var_20: i32;
    
    if var_20 != 0x3b9aca00
    {
        let mut var_10: i64 = var_28;
        let var_8_1: i32 = var_20;
        std::time::SystemTime::duration_since::hd2a32b95d4b7e9ed(&var_28, &var_10, 0);
        
        if var_28 == 0
        {
            return 1;
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..time..SystemTime$C$std..io..error..Error$GT$$GT$::h5f799c8f7658c15d(&var_28);
    }
    
    0
}
