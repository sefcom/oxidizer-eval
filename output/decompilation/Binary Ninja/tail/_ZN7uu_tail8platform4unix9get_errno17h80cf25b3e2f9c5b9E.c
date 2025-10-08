
  uint64_t uu_tail::platform::unix::get_errno::h80cf25b3e2f9c5b9()

{
    int64_t rsi_2 = *__errno_location() << 0x20 | 2;
    int64_t var_20 = rsi_2;
    char var_18;
    std::io::error::repr_bitpacked::decode_repr::h81d2266bae0a83f6(&var_18, rsi_2);
    
    if (!var_18)
    {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf9bb92bdb8e06921(&var_20);
        int32_t var_14;
        return var_14;
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
