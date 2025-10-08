
  int128_t* uu_shuf::split_seps::he07f8c4bbcda6c2a(int128_t* arg1, int64_t arg2, int64_t arg3, char arg4)

{
    char var_41 = arg4;
    int64_t var_28 = arg2;
    int64_t var_20 = arg3;
    char* var_18 = &var_41;
    char var_10 = 0;
    int128_t var_40;
    core::iter::traits::iterator::Iterator::collect::h0ab5c37a6b7336bd(&var_40, &var_28);
    int64_t var_30;
    
    if (var_30 && !*(*var_40[8] + ((var_30 - 1) << 4) + 8))
        var_30 -= 1;
    
    arg1[1] = var_30;
    *arg1 = var_40;
    return arg1;
}
