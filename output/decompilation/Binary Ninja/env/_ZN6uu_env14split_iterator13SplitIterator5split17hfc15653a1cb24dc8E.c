
  int32_t* uu_env::split_iterator::SplitIterator::split::hfc15653a1cb24dc8(int32_t* arg1, int128_t* arg2)

{
    int32_t var_38;
    uu_env::split_iterator::SplitIterator::state_root::hc4d795535555f919(&var_38, arg2);
    
    if (var_38 != 0xc)
    {
        int64_t var_18;
        *(arg1 + 0x20) = var_18;
        int128_t zmm0 = var_38;
        int128_t var_28;
        *(arg1 + 0x10) = var_28;
        *arg1 = zmm0;
        core::ptr::drop_in_place$LT$uu_env..split_iterator..SplitIterator$GT$::h99564937bce00632(
            arg2);
    }
    else
    {
        *(arg1 + 0x18) = arg2[5];
        *(arg1 + 8) = arg2[4];
        *arg1 = 0xc;
        core::ptr::drop_in_place$LT$std..sys..os_str..bytes..Buf$GT$::he7d5b41560417e9b(*arg2, 
            *(arg2 + 8));
    }
    
    return arg1;
}
