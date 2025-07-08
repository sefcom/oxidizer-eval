
  fn uu_dd::is_fifo::h9d574f34ee5f3724(arg1: i64) -> i64

{
    let mut var_b0: i32;
    std::fs::metadata::he5d63b9e36b09796(&var_b0, arg1);
    let var_78: i32;
    
    if var_b0 == 2 || (0xf000 & var_78) != 0x1000
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he8a2e51a512ba290(&var_b0);
        return 0;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he8a2e51a512ba290(&var_b0);
    let mut result: i64;
    result = 1;
    result
}
