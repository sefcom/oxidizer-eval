
  int64_t alacritty_terminal::grid::Grid$LT$T$GT$::new::h0c2d46e3a6188c56(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int128_t var_80;
    int64_t result =
        alacritty_terminal::grid::storage::Storage$LT$T$GT$::with_capacity::h44ccd8fb6acb56a2(
        &var_80, arg2, arg3);
    int128_t var_50;
    _$LT$alacritty_terminal..grid..Cursor$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::hc6ed34f88d23cf01(&var_50);
    _$LT$alacritty_terminal..grid..Cursor$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::hc6ed34f88d23cf01(&arg1[3]);
    int128_t zmm0 = var_50;
    int128_t var_30;
    arg1[8] = var_30;
    int128_t var_40;
    arg1[7] = var_40;
    arg1[6] = zmm0;
    *arg1 = var_80;
    int128_t var_70;
    arg1[1] = var_70;
    int128_t var_60;
    arg1[2] = var_60;
    arg1[9] = arg3;
    *(arg1 + 0x98) = arg2;
    arg1[0xa] = 0;
    *(arg1 + 0xa8) = arg4;
    return result;
}
