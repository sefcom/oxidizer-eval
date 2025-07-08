
  int128_t* uu_unexpand::open::h29e09d4acbe1a140(int64_t* arg1, char* arg2, uint64_t arg3)

{
    int128_t* result;
    int128_t* result_1;
    void* const var_50;
    
    if (!std::path::Path::is_dir::h9ac0db933706da51(arg2, arg3))
    {
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h62532d3932070b7a(arg2, arg3, "-allfirst-onlyno-utf8--first-onl…", 1))
        {
            std::io::stdio::stdin::h7215cc131abb55d8();
            /* tailcall */
            return
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hc296df1f2003fc99(
                arg1, 0x2000, 
                alloc::boxed::Box$LT$T$GT$::new::habb3fb88f54e05c3(
                    &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5), 
                &data_51cfe8);
        }
        
        std::fs::File::open::h6533ca8bcbc1a3e9(&var_50, arg2);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h1af4d7cd559368ac(&result_1, &var_50);
        result = result_1;
        int32_t var_88;
        
        if (!result)
            /* tailcall */
            return
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hc296df1f2003fc99(
                arg1, 0x2000, alloc::boxed::Box$LT$T$GT$::new::hc41914ec638acdb5(var_88), 
                &data_51cf90);
        
        arg1[1] = result;
        arg1[2] = var_88;
    }
    else
    {
        char* var_60 = arg2;
        uint64_t var_58_1 = arg3;
        int64_t* var_70 = &var_60;
        int64_t (* var_68_1)(int64_t* arg1, void* arg2) =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        var_50 = &data_51cf70;
        int64_t var_48_1 = 2;
        int64_t var_30_1 = 0;
        int64_t** var_40_1 = &var_70;
        int64_t var_38_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h76d79f35edc71809(&result_1, &var_50);
        int32_t var_78_1 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h94e9d4f87d516a2c(&result_1);
        arg1[1] = result;
        arg1[2] = &data_51d078;
    }
    *arg1 = 0;
    return result;
}
