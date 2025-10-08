
  int64_t* uu_sort::ext_sort::write::h6c40a425f9d84fbb(int64_t* arg1, void* arg2, int32_t* arg3, int64_t arg4, uint64_t arg5, char arg6)

{
    int64_t var_108;
    _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::h0b8ecde962a5ff3a(&var_108, arg3, arg4, arg5);
    int64_t rdx_1 = var_108;
    int64_t* result;
    int64_t var_f8;
    
    if (-(rdx_1) == -0x8000000000000000)
    {
        arg1[1] = result;
        arg1[2] = var_f8;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int64_t var_a0;
    int64_t var_28_1 = var_a0;
    int64_t var_90 = rdx_1;
    int64_t* result_1 = result;
    uu_sort::ext_sort::write_lines::h52eb50a69352cfad(*(arg2 + 0x20), *(arg2 + 0x28), 
        _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::ha4082f868beb8d8c(&var_90), 
        arg6);
    var_f8 = var_f8;
    var_108 = var_90;
    return _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hc7e70b8b6ae55049(arg1, &var_108);
}
