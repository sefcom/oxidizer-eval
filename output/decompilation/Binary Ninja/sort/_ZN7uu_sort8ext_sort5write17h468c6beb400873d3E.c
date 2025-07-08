
  int128_t* uu_sort::ext_sort::write::h468c6beb400873d3(int64_t* arg1, void* arg2, int32_t* arg3, int64_t arg4, int64_t arg5, char arg6)

{
    int64_t var_98;
    _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::hf387bcea2432cd24(&var_98, arg3);
    int64_t rdx_1 = var_98;
    int128_t* result;
    int64_t var_88;
    
    if (rdx_1 == -0x8000000000000000)
    {
        arg1[1] = result;
        arg1[2] = var_88;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int64_t var_58 = rdx_1;
    int128_t* result_1 = result;
    uu_sort::ext_sort::write_lines::h885deb96e81ca5d5(*(arg2 + 0x20), *(arg2 + 0x28), 
        _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::hd7022d2bef20dad2(&var_58), 
        arg6);
    int128_t var_70;
    *var_70[8] = *var_70[8];
    var_88 = var_88;
    var_98 = var_58;
    return _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::h5f1c720516718632(arg1, &var_98);
}
