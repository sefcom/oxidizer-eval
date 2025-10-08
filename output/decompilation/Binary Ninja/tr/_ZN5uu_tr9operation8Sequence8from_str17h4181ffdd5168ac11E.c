
  int64_t uu_tr::operation::Sequence::from_str::h4181ffdd5168ac11(int32_t* arg1, int64_t arg2, int64_t arg3)

{
    int32_t var_60;
    _$LT$nom..multi..Many0$LT$F$GT$$u20$as$u20$nom..internal..Parser$LT$I$GT$$GT$::process::hf61a4f0c57043b6e(&var_60, arg2, arg3);
    int64_t var_88;
    int128_t var_48;
    
    if (var_60 != 1)
    {
        int64_t var_38;
        int64_t var_70_1 = var_38;
        int128_t var_80_1 = var_48;
        var_88 = 3;
    }
    else
    {
        int128_t var_80 = var_48;
        int128_t var_58;
        var_88 = var_58;
    }
    void var_30;
    core::result::Result$LT$T$C$E$GT$::unwrap::had610963c451fde2(&var_30, &var_88);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hb4c43fc8bf470e5d(&var_60, &var_30);
    return core::iter::traits::iterator::Iterator::collect::hc903770427f87ede(arg1, &var_60);
}
