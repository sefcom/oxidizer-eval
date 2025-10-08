
  void uu_paste::DelimiterState::reset_to_first_delimiter::h68b38c960fbec6e1(int32_t* arg1)

{
    if (*arg1 == 2)
    {
        int64_t rsi_1 = *(arg1 + 0x18);
        int128_t var_28;
        core::iter::adapters::cycle::Cycle$LT$I$GT$::new::h1924fbb896f97455(&var_28, rsi_1, 
            (*(arg1 + 0x20) << 4) + rsi_1);
        int128_t zmm0 = var_28;
        int128_t var_18;
        *(arg1 + 0x38) = var_18;
        *(arg1 + 0x28) = zmm0;
    }
}
