
  int64_t bat::pager::Pager::new::h0869a180ded80220(int128_t* arg1, int64_t arg2, uint64_t arg3, int64_t arg4, int64_t arg5, char arg6, char arg7)

{
    int128_t var_50;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(&var_50, arg2, arg3);
    int128_t var_38;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h5b13b0fd63bfa0b3(&var_38, arg4, arg5);
    int64_t var_40;
    arg1[1] = var_40;
    *arg1 = var_50;
    *(arg1 + 0x18) = var_38;
    int64_t var_28;
    *(arg1 + 0x28) = var_28;
    *(arg1 + 0x31) = arg6;
    arg1[3] = arg7;
    return arg7;
}
