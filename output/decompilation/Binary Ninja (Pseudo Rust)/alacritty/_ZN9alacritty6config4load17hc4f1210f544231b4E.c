
  fn alacritty::config::load::hc4f1210f544231b4(arg1: i64, arg2: *mut c_void) -> i64

{
    let mut var_440: i64;
    
    if !(0 + -(*arg2.byte_offset(0x1b0)))
    {
        _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
            &var_440, *arg2.byte_offset(0x1b8), *arg2.byte_offset(0x1c0));
    }
    else
    {
        var_440 = -0x8000000000000000;
    }
    
    let mut var_860: ();
    core::option::Option$LT$T$GT$::or_else::h0b1f5b4de00d6415(&var_860, &var_440);
    let mut var_890: i64;
    core::option::Option$LT$T$GT$::or_else::h4ae75538c15e033b(&var_890, &var_860);
    let mut rdx_3: i32;
    let var_880: i64;
    let mut var_878: i128;
    
    if var_890 != -0x8000000000000000
    {
        let var_888: i64;
        alacritty::config::load::_$u7b$$u7b$closure$u7d$$u7d$::ha635c51bd6a67dc1(&var_440, var_888);
        let var_868_1: i64 = var_880;
        var_878 = var_890;
        
        if var_440 != 6
        {
            memcpy(&var_860, &var_440, 0x420);
            rdx_3 = core::ptr::drop_in_place$LT$alacritty..config..load..$u7b$$u7b$closure$u7d$$u7d$$GT$::hd5229858aa66467d(&var_890);
        }
        else
        {
            rdx_3 = alacritty::config::load::_$u7b$$u7b$closure$u7d$$u7d$::h658c9e9e484f06cd(
                &var_860, &var_878);
        }
    }
    else
    {
        let var_868: i64 = var_880;
        var_878 = var_890;
        rdx_3 = alacritty::config::load::_$u7b$$u7b$closure$u7d$$u7d$::h658c9e9e484f06cd(&var_860, 
            &var_878);
    }
    alacritty::config::after_loading::h997230e48c68b3cd(&var_860, arg2, rdx_3);
    memcpy(arg1, &var_860, 0x420)
}
