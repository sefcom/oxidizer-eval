
  fn alacritty_terminal::term::TermDamageState::new::h0fc83946f2a9c521(arg1: *mut i128, arg2: i64) -> *mut i128

{
    let mut var_40: i64 = arg2;
    let var_30: i64 = 0;
    let rdx: i64;
    let var_28: i64 = rdx;
    let mut var_38: *mut i64 = &var_40;
    let mut var_20: i128;
    core::iter::traits::iterator::Iterator::collect::h28cc7b857207be39(&var_20, &var_38);
    let zmm0: i128 = var_20;
    *arg1.byte_offset(0x28) = 1;
    *arg1 = zmm0;
    let var_10: i64;
    arg1[1] = var_10;
    *arg1.byte_offset(0x18) = 0;
    arg1[2] = 0;
    arg1
}
