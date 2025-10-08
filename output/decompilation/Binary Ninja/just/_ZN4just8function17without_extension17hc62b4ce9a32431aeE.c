
  int64_t* just::function::without_extension::hc62b4ce9a32431ae(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_38 = arg3;
    int64_t var_30 = arg4;
    char* rax;
    uint64_t rdx;
    rax = std::path::Path::parent::hef287f60afa56900(arg3, arg4);
    int128_t var_90;
    int64_t var_80;
    int64_t* var_78;
    void** const var_68;
    void** const rax_3;
    
    if (!rax)
    {
        var_78 = &var_38;
        int64_t (* var_70_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
        rax_3 = &data_8300d8;
        label_66cb42:
        var_68 = rax_3;
        int64_t var_60_1 = 2;
        int64_t var_48_1 = 0;
        int64_t** var_58_1 = &var_78;
        int64_t var_50_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_90, 0, rdx, &var_68);
        *(arg1 + 8) = var_90;
        arg1[3] = var_80;
        *arg1 = 1;
    }
    else
    {
        uint64_t r15_1 = rdx;
        int16_t* rax_1;
        rax_1 = std::path::Path::file_stem::hc69c2d2c61933548(arg3, arg4);
        
        if (!rax_1)
        {
            var_78 = &var_38;
            int64_t (* var_70_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
            rax_3 = &data_82fec8;
            goto label_66cb42;
        }
        
        camino::Utf8Path::join::h5972e239d273391e(&var_68, rax, r15_1, rax_1);
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h8d6445813d8446cd(
            &var_90, &var_68);
        arg1[3] = var_80;
        *(arg1 + 8) = var_90;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$camino..Utf8PathBuf$GT$::hdd3b2f225d24af37(&var_68);
    }
    return arg1;
}
