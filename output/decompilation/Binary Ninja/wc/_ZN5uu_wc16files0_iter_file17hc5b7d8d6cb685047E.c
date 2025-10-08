
  uint64_t uu_wc::files0_iter_file::hc5b7d8d6cb685047(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int32_t var_68;
    std::fs::File::open::h2ac8fc8643c389e6(&var_68, arg2);
    
    if (var_68 != 1)
    {
        int128_t var_38;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h805faec68bbcdbaf(&var_38, arg2, arg3);
        int64_t var_28;
        int64_t var_48_1 = var_28;
        int128_t var_58 = var_38;
        int32_t var_64;
        return uu_wc::files0_iter::h3a2520d8f4dd46d9(arg1, var_64, &var_58);
    }
    
    uint64_t result = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::he406d8bf057b4e96();
    *arg1 = -0x7fffffffffffffff;
    arg1[1] = result;
    arg1[2] = &data_4f9240;
    return result;
}
