
  fn uu_rm::is_writable::h35835a5ca0912bec(arg1: i64) -> u8

{
    let mut var_b0: i32;
    std::fs::metadata::h578d377c5d8d0272(&var_b0, arg1);
    let var_78: u8;
    
    if var_b0 != 2
    {
        return var_78 >> 7;
    }
    let var_a8: i64;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h33062896cdc75427(2, var_a8);
    0
}
