
  uint64_t uu_wc::WcError::files_disabled::h89bfe6d0afa3db5e(int64_t* arg1)

{
    int64_t var_40;
    uint64_t rdx;
    int64_t rsi;
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_40, rsi, rdx);
    int128_t var_28;
    uint64_t result;
    int64_t var_38;
    uint64_t result_1;
    
    if (!(0 + -(var_40)))
    {
        result = result_1;
        var_28 = var_40;
    }
    else
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h805faec68bbcdbaf(&var_28, var_38, result_1);
    arg1[3] = result;
    *(arg1 + 8) = var_28;
    *arg1 = -0x7fffffffffffffff;
    return result;
}
