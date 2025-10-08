
  int64_t uu_runcon::errors::Error::from_io1::h2e5a1b363c345453(int32_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6)

{
    int64_t var_40 = arg6;
    int128_t var_38;
    _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::he2ce1db898fd2834(&var_38, arg4);
    *(arg1 + 0x20) = arg2;
    *(arg1 + 0x28) = arg3;
    *(arg1 + 8) = var_38;
    int64_t result;
    *(arg1 + 0x18) = result;
    *(arg1 + 0x30) = arg6;
    *arg1 = 0x10;
    return result;
}
