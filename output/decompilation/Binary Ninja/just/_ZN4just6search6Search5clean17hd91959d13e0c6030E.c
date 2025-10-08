
  int64_t just::search::Search::clean::hd91959d13e0c6030(int128_t* arg1, int64_t arg2, uint64_t arg3)

{
    void var_100;
    int64_t rcx;
    std::path::Path::join::h1eac0ae5e7efa361(&var_100, arg2, arg3, rcx);
    int64_t var_118 = 0;
    char* var_110 = 8;
    int64_t var_108 = 0;
    int64_t var_f8;
    int64_t var_f0;
    int128_t var_a8;
    std::path::Path::components::hd0346d362206f2e9(&var_a8, var_f8, var_f0);
    int128_t var_78;
    int128_t var_b8 = var_78;
    int128_t var_88;
    int128_t var_c8 = var_88;
    int128_t var_98;
    int128_t var_d8 = var_98;
    int128_t var_e8 = var_a8;
    
    while (true)
    {
        char var_68;
        _$LT$std..path..Components$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h73ed8dd6f02f5cb4(&var_68, &var_e8);
        
        if (var_68 == 0xa)
            break;
        
        if (!_$LT$std..path..Component$u20$as$u20$core..cmp..PartialEq$GT$::eq::hfa2fa96020c6cc4b(
                &var_68, &data_471728))
            alloc::vec::Vec$LT$T$C$A$GT$::push::hf0e1448068b63a5d(&var_118, &var_68);
        else if (var_108 && var_110[(var_108 - 1) * 0x38] == 9)
            var_108 -= 1;
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hc695da30dbf516c4(&var_e8, &var_118);
    core::iter::traits::iterator::Iterator::collect::h5ec721f06ebe2405(arg1, &var_e8);
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_100);
}
