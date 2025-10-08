
  int64_t just::source::Source::import::h2eeb856d6368391e(int128_t* arg1, void* arg2, int128_t* arg3, int64_t arg4)

{
    int32_t rbp = *(arg2 + 0x78);
    int128_t var_80;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h2bd5fac3a44d596c(
        &var_80, *(arg2 + 8), *(arg2 + 0x10));
    int128_t var_a8;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7020ec4582f4a09d(&var_a8, &var_80);
    _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_80, *(arg3 + 8), arg3[1]);
    int128_t var_c8 = var_80;
    core::iter::traits::iterator::Iterator::chain::h6ca93b7fa2b582b5(&var_80, &var_a8, &var_c8);
    int128_t var_48;
    core::iter::traits::iterator::Iterator::collect::h823ffc06f5fa5e1c(&var_48, &var_80);
    int64_t rsi_5 = *(arg2 + 0x20);
    core::iter::traits::iterator::Iterator::chain::hd6f7005e3861953e(&var_80, rsi_5, 
        rsi_5 + (*(arg2 + 0x28) << 3), arg4);
    core::iter::traits::iterator::Iterator::collect::hdb440cd1d1e586cc(&var_c8, &var_80);
    int64_t var_98;
    int64_t var_70;
    
    if (!(0 + -(*(arg2 + 0x60))))
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha18ac3b8a47dca8f(&var_80, *(arg2 + 0x68), *(arg2 + 0x70));
        var_98 = var_70;
        var_a8 = var_80;
    }
    else
        var_a8 = -0x8000000000000000;
    
    _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_80, *(arg2 + 0x50), *(arg2 + 0x58));
    *(arg1 + 0x58) = var_70;
    *(arg1 + 0x48) = var_80;
    *(arg1 + 0x78) = rbp + 1;
    int64_t var_38;
    arg1[1] = var_38;
    *arg1 = var_48;
    *(arg1 + 0x28) = var_70;
    *(arg1 + 0x18) = var_c8;
    arg1[6] = var_a8;
    arg1[7] = var_98;
    arg1[3] = *arg3;
    int64_t result = arg3[1];
    arg1[4] = result;
    return result;
}
