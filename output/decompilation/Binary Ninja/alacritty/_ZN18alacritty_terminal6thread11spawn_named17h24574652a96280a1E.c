
  int64_t alacritty_terminal::thread::spawn_named::h24574652a96280a1(int128_t* arg1, int128_t* arg2)

{
    int64_t var_78 = -0x8000000000000000;
    int64_t var_88 = 0;
    char var_60 = 0;
    void var_58;
    _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::h0234e4d8e087250e(&var_58, 
        "socket listener.sockFailed to co…", 0xf);
    void var_40;
    std::thread::Builder::name::h9a7df364061ccb51(&var_40, &var_88, &var_58);
    int64_t var_68 = arg2[2];
    var_78 = arg2[1];
    var_88 = *arg2;
    std::thread::Builder::spawn_unchecked::hfbb11b2c2c0a43ff(&var_58, &var_40, &var_88);
    return core::result::Result$LT$T$C$E$GT$::expect::ha04fb372785aeabd(arg1, &var_58);
}
