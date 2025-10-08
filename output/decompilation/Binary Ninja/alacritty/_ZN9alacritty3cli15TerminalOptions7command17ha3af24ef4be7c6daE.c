
  void alacritty::cli::TerminalOptions::command::ha3af24ef4be7c6da(int128_t* arg1, void* arg2, int64_t arg3)

{
    if (!arg3)
    {
        *arg1 = -0x7fffffffffffffff;
        return;
    }
    
    int128_t var_48;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_48, 
        arg2);
    int128_t var_30;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha7488b37c10c715d(&var_30, arg2 + 0x18, arg3 - 1);
    int128_t zmm0_1 = var_48;
    int128_t var_78_1 = zmm0_1;
    int128_t zmm1_1 = var_30;
    arg1[2] = *zmm1_1[8];
    int64_t var_20;
    *(arg1 + 0x28) = var_20;
    int64_t var_38;
    arg1[1] = var_38;
    *(arg1 + 0x18) = zmm1_1;
    *arg1 = zmm0_1;
}
