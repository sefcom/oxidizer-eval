
  int64_t uu_whoami::platform::unix::get_username::h858b21d98303e7a3(int64_t* arg1)

{
    int64_t var_88;
    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h5d0bb482984d9c00(&var_88, uucore::features::process::geteuid::hd0ed7b4820ed9632());
    int64_t result;
    int64_t rcx;
    
    if (!(0 + -(var_88)))
    {
        int64_t result_1;
        uucore::features::entries::uid2usr::_$u7b$$u7b$closure$u7d$$u7d$::h067aed1d574403f7(
            &result_1, &var_88);
        result = result_1;
        int64_t var_98;
        rcx = var_98;
        int64_t var_90;
        arg1[2] = var_90;
    }
    else
    {
        result = -0x8000000000000000;
        int64_t var_80;
        rcx = var_80;
    }
    
    arg1[1] = rcx;
    *arg1 = result;
    return result;
}
