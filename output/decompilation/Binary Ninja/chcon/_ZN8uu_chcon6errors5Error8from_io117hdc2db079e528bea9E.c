
  int64_t uu_chcon::errors::Error::from_io1::hdc2db079e528bea9(int32_t* arg1, void* arg2)

{
    int64_t var_30 = 0x3d00000002;
    int128_t var_28;
    _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::hed2fe8e10411cd2a(&var_28, arg2);
    *(arg1 + 0x20) = "Getting security context.Invalid…";
    *(arg1 + 0x28) = 0x18;
    *(arg1 + 8) = var_28;
    int64_t result;
    *(arg1 + 0x18) = result;
    *(arg1 + 0x30) = 0x3d00000002;
    *arg1 = 0x11;
    return result;
}
