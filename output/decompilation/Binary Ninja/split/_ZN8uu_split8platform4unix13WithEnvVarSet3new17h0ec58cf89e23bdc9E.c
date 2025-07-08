
  int64_t uu_split::platform::unix::WithEnvVarSet::new::h0ec58cf89e23bdc9(int128_t* arg1, int64_t arg2)

{
    int128_t var_58;
    std::env::var::h9ad1bceb8fc4ff71(&var_58, "FILE -> \x1b[2mAnsi -- \x1b[8mhe…");
    std::env::set_var::h1f8f4c2c764b6cfd("FILE -> \x1b[2mAnsi -- \x1b[8mhe…", 4, arg2);
    int128_t var_38;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha461c13160c52a35(&var_38, 
        "FILE -> \x1b[2mAnsi -- \x1b[8mhe…", 4);
    int64_t result;
    arg1[3] = result;
    arg1[2] = var_38;
    int128_t zmm0 = var_58;
    int128_t var_48;
    arg1[1] = var_48;
    *arg1 = zmm0;
    return result;
}
