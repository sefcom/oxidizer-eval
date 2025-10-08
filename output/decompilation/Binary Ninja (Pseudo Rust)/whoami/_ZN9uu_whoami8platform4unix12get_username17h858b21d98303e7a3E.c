
  fn uu_whoami::platform::unix::get_username::h858b21d98303e7a3(arg1: *mut i64) -> i64

{
    let mut var_88: i64;
    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h5d0bb482984d9c00(&var_88, uucore::features::process::geteuid::hd0ed7b4820ed9632());
    let mut result: i64;
    let mut rcx: i64;
    
    if !(0 + -(var_88))
    {
        let mut result_1: i64;
        uucore::features::entries::uid2usr::_$u7b$$u7b$closure$u7d$$u7d$::h067aed1d574403f7(
            &result_1, &var_88);
        result = result_1;
        let var_98: i64;
        rcx = var_98;
        let var_90: i64;
        arg1[2] = var_90;
    }
    else
    {
        result = -0x8000000000000000;
        let var_80: i64;
        rcx = var_80;
    }
    
    arg1[1] = rcx;
    *arg1 = result;
    result
}
