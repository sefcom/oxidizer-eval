
  fn uu_tail::platform::unix::get_errno::h80cf25b3e2f9c5b9() -> u64

{
    let rsi_2: i64 = *__errno_location() << 0x20 | 2;
    let mut var_20: i64 = rsi_2;
    let mut var_18: i8;
    std::io::error::repr_bitpacked::decode_repr::h81d2266bae0a83f6(&var_18, rsi_2);
    
    if var_18 == 0
    {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf9bb92bdb8e06921(&var_20);
        let var_14: i32;
        return var_14;
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
