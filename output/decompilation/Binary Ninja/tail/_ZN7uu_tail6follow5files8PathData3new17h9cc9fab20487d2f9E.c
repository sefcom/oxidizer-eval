
  void* uu_tail::follow::files::PathData::new::h9cc9fab20487d2f9(void* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, uint64_t arg6)

{
    int128_t var_38;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&var_38, arg5, 
        arg6);
    int64_t var_28;
    *(arg1 + 0xc0) = var_28;
    *(arg1 + 0xb0) = var_38;
    *(arg1 + 0xc8) = arg2;
    *(arg1 + 0xd0) = arg3;
    memcpy(arg1, arg4, 0xb0);
    return arg1;
}
