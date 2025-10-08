
  uint64_t uu_env::parse_program_opt::h7280c27efa5c6406(void* arg1, int64_t arg2, int64_t arg3)

{
    if (*(arg1 + 0x99))
    {
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6ca0b45f5c80c114(arg1 + 0x48, arg2, arg3);
        return 0;
    }
    
    void var_28;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf510679057ea9fe7(&var_28, "cannot specify --null (-0) with …", 0x27);
    int32_t var_10 = 0x7d;
    return alloc::boxed::Box$LT$T$GT$::new::h0cd361b0827381d8(&var_28);
}
