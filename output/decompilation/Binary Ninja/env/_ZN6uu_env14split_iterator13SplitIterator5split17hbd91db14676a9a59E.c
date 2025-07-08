
  int32_t* uu_env::split_iterator::SplitIterator::split::hbd91db14676a9a59(int32_t* arg1, int128_t* arg2)

{
    int32_t var_38;
    uu_env::split_iterator::SplitIterator::state_root::ha7ad7ed6584dc219(&var_38, arg2);
    
    if (var_38 != 8)
    {
        int64_t var_18;
        *(arg1 + 0x20) = var_18;
        int128_t zmm0 = var_38;
        int128_t var_28;
        *(arg1 + 0x10) = var_28;
        *arg1 = zmm0;
        core::ptr::drop_in_place$LT$uu_env..split_iterator..SplitIterator$GT$::hd7192570ff598ae0(
            arg2);
    }
    else
    {
        *(arg1 + 0x18) = arg2[5];
        *(arg1 + 8) = arg2[4];
        *arg1 = 8;
        core::ptr::drop_in_place$LT$uu_env..string_expander..StringExpander$GT$::ha4fe71f9740e15f8(
            arg2);
    }
    
    return arg1;
}
