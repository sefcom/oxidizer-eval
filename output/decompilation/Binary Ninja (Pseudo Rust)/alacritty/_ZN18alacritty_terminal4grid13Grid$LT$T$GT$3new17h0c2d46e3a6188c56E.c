
  fn alacritty_terminal::grid::Grid$LT$T$GT$::new::h0c2d46e3a6188c56(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut var_80: i128;
    let result: i64 =
        alacritty_terminal::grid::storage::Storage$LT$T$GT$::with_capacity::h44ccd8fb6acb56a2(
        &var_80, arg2, arg3);
    let mut var_50: i128;
    _$LT$alacritty_terminal..grid..Cursor$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::hc6ed34f88d23cf01(&var_50);
    _$LT$alacritty_terminal..grid..Cursor$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::hc6ed34f88d23cf01(&arg1[3]);
    let zmm0: i128 = var_50;
    let var_30: i128;
    arg1[8] = var_30;
    let var_40: i128;
    arg1[7] = var_40;
    arg1[6] = zmm0;
    *arg1 = var_80;
    let var_70: i128;
    arg1[1] = var_70;
    let var_60: i128;
    arg1[2] = var_60;
    arg1[9] = arg3;
    *arg1.byte_offset(0x98) = arg2;
    arg1[0xa] = 0;
    *arg1.byte_offset(0xa8) = arg4;
    result
}
