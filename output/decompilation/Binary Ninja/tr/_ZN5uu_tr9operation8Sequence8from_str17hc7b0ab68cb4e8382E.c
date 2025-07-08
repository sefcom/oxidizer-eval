
  int64_t* uu_tr::operation::Sequence::from_str::hc7b0ab68cb4e8382(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    void var_89;
    int64_t var_68;
    nom::multi::many0::_$u7b$$u7b$closure$u7d$$u7d$::h8cf6a4b7fc883442(&var_68, &var_89, arg2, 
        arg3);
    int64_t var_88;
    int128_t var_50;
    
    if (!var_68)
    {
        int64_t var_40;
        int64_t var_70_1 = var_40;
        int128_t var_80_1 = var_50;
        var_88 = 3;
    }
    else
    {
        int128_t var_80 = var_50;
        int128_t var_60;
        var_88 = var_60;
    }
    core::result::Result$LT$T$C$E$GT$::unwrap::hb9abf94b670d136b(&var_68, &var_88);
    void var_38;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h9e5e53909aab6517(&var_38, &var_68);
    return core::iter::adapters::try_process::hb2b95e5a82835fee(arg1, &var_38);
}
