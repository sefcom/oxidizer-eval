
  fn alacritty_terminal::thread::spawn_named::h24574652a96280a1(arg1: *mut i128, arg2: *mut i128) -> i64

{
    let mut var_78: i64 = -0x8000000000000000;
    let mut var_88: i64 = 0;
    let var_60: i8 = 0;
    let mut var_58: ();
    _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::h0234e4d8e087250e(&var_58, 
        "socket listener.sockFailed to co…", 0xf);
    let mut var_40: ();
    std::thread::Builder::name::h9a7df364061ccb51(&var_40, &var_88, &var_58);
    let var_68: i64 = arg2[2];
    var_78 = arg2[1];
    var_88 = *arg2;
    std::thread::Builder::spawn_unchecked::hfbb11b2c2c0a43ff(&var_58, &var_40, &var_88);
    core::result::Result$LT$T$C$E$GT$::expect::ha04fb372785aeabd(arg1, &var_58)
}
