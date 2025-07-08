
  int128_t* uu_tr::operation::TranslateOperation::new::h1640a7dbb9893994(int128_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t rax = arg3[2];
    void var_d0;
    
    if (!rax)
    {
        if (!arg2[2])
        {
            std::thread::local::LocalKey$LT$T$GT$::try_with::h62479413722e7037(&var_d0);
            int64_t rax_1;
            int64_t rdx_2;
            rax_1 = core::result::Result$LT$T$C$E$GT$::expect::h6b9a503cd36b2e53(&var_d0);
            arg1[1] = data_52eef8;
            *arg1 = *data_52eee8;
            arg1[2] = rax_1;
            *(arg1 + 0x28) = rdx_2;
        }
        else
        {
            *(arg1 + 8) = -0x7ffffffffffffffb;
            *arg1 = 0;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(arg3);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8b6037f7c42e6bd2(arg2);
    }
    else
    {
        char rbp_1 = *(rax + arg3[1] - 1);
        void var_70;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::heeebac057b065724(&var_70, arg2);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::heeebac057b065724(&var_d0, arg3);
        void var_50;
        core::iter::traits::iterator::Iterator::chain::hccf923e4541b6396(&var_50, &var_d0, rbp_1);
        core::iter::traits::iterator::Iterator::zip::h90e8b66d0c18356e(&var_d0, &var_70, &var_50);
        _$LT$std..collections..hash..map..HashMap$LT$K$C$V$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$LP$K$C$V$RP$$GT$$GT$::from_iter::h992be80ae17d0a8b(arg1, &var_d0);
    }
    return arg1;
}
