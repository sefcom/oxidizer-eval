
  int64_t uu_tail::follow::files::PathData::new::h86625b3b593f4467(void* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, uint64_t arg6)

{
    int128_t var_38;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha6b2ce04d4e70875(&var_38, arg5, arg6);
    int64_t var_28;
    *(arg1 + 0xc0) = var_28;
    *(arg1 + 0xb0) = var_38;
    *(arg1 + 0xc8) = arg2;
    *(arg1 + 0xd0) = arg3;
    /* tailcall */
    return memcpy(arg1, arg4, 0xb0);
}
