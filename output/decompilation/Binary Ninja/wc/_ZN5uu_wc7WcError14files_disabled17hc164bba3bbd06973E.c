
  uint64_t uu_wc::WcError::files_disabled::hc164bba3bbd06973(int64_t* arg1)

{
    int64_t var_40;
    size_t rdx;
    int64_t rsi;
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_40, rsi, rdx);
    int128_t var_28;
    uint64_t result;
    int64_t var_38;
    uint64_t result_1;
    
    if (var_40 != -0x8000000000000000)
    {
        result = result_1;
        var_28 = var_40;
    }
    else
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8d59d4d5d5f04802(&var_28, 
            var_38, result_1);
    arg1[3] = result;
    *(arg1 + 8) = var_28;
    *arg1 = -0x7fffffffffffffff;
    return result;
}
