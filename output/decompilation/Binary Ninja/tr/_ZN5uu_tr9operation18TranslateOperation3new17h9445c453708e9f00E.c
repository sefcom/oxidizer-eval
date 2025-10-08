
  int128_t* uu_tr::operation::TranslateOperation::new::h9445c453708e9f00(int128_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t rax = arg3[2];
    
    if (!rax)
    {
        if (!arg2[2])
        {
            int64_t rax_1;
            int64_t rdx_2;
            rax_1 = std::thread::local::LocalKey$LT$T$GT$::with::h56a44e5ab6646988();
            arg1[1] = data_4fdac8;
            *arg1 = *data_4fdab8;
            arg1[2] = rax_1;
            *(arg1 + 0x28) = rdx_2;
        }
        else
        {
            *(arg1 + 8) = 5;
            *arg1 = 0;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hd84321348a921e7b(*arg3, 
            arg3[1]);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hd84321348a921e7b(*arg2, 
            arg2[1]);
    }
    else
    {
        char rbp_1 = *(arg3[1] + rax - 1);
        void var_d0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h1100d8fab93dcfd4(&var_d0, arg2);
        void var_88;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h1100d8fab93dcfd4(&var_88, arg3);
        void var_b0;
        core::iter::traits::iterator::Iterator::chain::h48a3ee56282d8eb3(&var_b0, &var_88, rbp_1);
        core::iter::traits::iterator::Iterator::zip::h7dfe65a511fa7e22(&var_88, &var_d0, &var_b0);
        core::iter::traits::iterator::Iterator::collect::h3341162f8609cd76(arg1, &var_88);
    }
    
    return arg1;
}
