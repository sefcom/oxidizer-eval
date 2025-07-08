
  fn uu_paste::DelimiterState::reset_to_first_delimiter::h9238978dbebe5df3(arg1: *mut i32)

{
    if *arg1 == 2
    {
        let rsi_1: i64 = *arg1.byte_offset(0x18);
        let mut var_28: i128;
        core::iter::adapters::cycle::Cycle$LT$I$GT$::new::hf1aa6bae6724cda9(&var_28, rsi_1, 
            (*arg1.byte_offset(0x20) << 4) + rsi_1);
        let zmm0: i128 = var_28;
        let var_18: i128;
        *arg1.byte_offset(0x38) = var_18;
        *arg1.byte_offset(0x28) = zmm0;
    }
}
