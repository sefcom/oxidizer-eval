
  int128_t* forc_crypto::keys::vanity::HexMatcher::new::hd4658ac7716e1740(int128_t* arg1, char* arg2, uint64_t arg3, char* arg4, uint64_t arg5)

{
    int128_t var_50;
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::hb778be1bb3f3f772(&var_50, arg2, arg3);
    int128_t var_38;
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::hb778be1bb3f3f772(&var_38, arg4, arg5);
    int128_t zmm0 = var_50;
    int128_t var_88 = zmm0;
    int128_t zmm1 = var_38;
    arg1[2] = *zmm1[8];
    int64_t var_28;
    *(arg1 + 0x28) = var_28;
    int64_t var_40;
    arg1[1] = var_40;
    *(arg1 + 0x18) = zmm1;
    *arg1 = zmm0;
    return arg1;
}
