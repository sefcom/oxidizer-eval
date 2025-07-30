
  int64_t flealib::commandprocessor::CommandProcessor::create_restart_file::h95b9ea373e575473(int128_t* arg1, void* arg2)

{
    int128_t var_28;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h6b169aa4c72fa5e4(
        &var_28, arg2);
    int128_t* var_98;
    int128_t var_88;
    int32_t var_50;
    int128_t* var_48;
    
    if (core::sync::atomic::atomic_load::h8980141092664382(
        &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4)
    {
        var_98 = &var_28;
        int64_t (* var_90_1)(void* arg1, void* arg2) =
            _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h97f1f44c687b683c;
        var_88 = &data_b087a8;
        *var_88[8] = 1;
        int64_t var_68_1 = 0;
        int128_t** var_78_1 = &var_98;
        int64_t var_70_1 = 1;
        int64_t rax_1 = log::__private_api::loc::he6f33e710a34adaf(&data_b087d0);
        var_50 = "flealib::commandprocessorWrong n…";
        var_48 = 0x19;
        char const* const var_40_1 = "flealib::commandprocessorWrong n…";
        int64_t var_38_1 = 0x19;
        int64_t var_30_1 = rax_1;
        log::__private_api::log::hd2d1d5843cf283e9(&var_88, 4, &var_50);
    }
    
    std::path::PathBuf::push::hc66e4b85c8e42483(&var_28, "flea.rst@");
    var_88 = var_28;
    int64_t rdx_3 = std::fs::File::create::hb10f4de1cd0f279a(&var_50, &var_88);
    
    if (var_50 != 1)
    {
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h4172f34dc5251b61(&var_50);
    }
    
    var_98 = var_48;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&var_88, 
        &var_98, rdx_3);
    int64_t var_18;
    arg1[1] = var_18;
    *arg1 = var_88;
    return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(var_48);
}
