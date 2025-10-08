
  fn rg::special::h2a430c08df28a109(arg1: *mut i8, arg2: i8) -> i64

{
    let mut var_88: i128;
    let mut var_78: i64;
    let mut var_60: i128;
    let mut var_48: i8;
    let mut rbp: i8;
    
    match arg2
    {
        0 =>
        {
            rg::flags::doc::help::generate_short::hdde8bd32c057b3d4(&var_88);
            rbp = 0;
        }
        1 =>
        {
            rg::flags::doc::help::generate_long::h613fc9da1a2baeb6(&var_88);
            rbp = 0;
        }
        2 =>
        {
            rg::flags::doc::version::generate_short::h331b40a84196a55d(&var_88);
            rbp = 0;
        }
        3 =>
        {
            rg::flags::doc::version::generate_long::h39101dedc081911d(&var_88);
            rbp = 0;
        }
        4 =>
        {
            rg::flags::doc::version::generate_pcre2::ha65a2e5d72f36cf8(&var_60);
            let var_50: i64;
            var_78 = var_50;
            var_88 = var_60;
            rbp = var_48 ^ 1;
        }
    }
    
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_68: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut rax_4: i64;
    let mut rdx: i64;
    rax_4 =
        core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h6abe8100f4b9b9b1(*var_88[8], var_78);
    let mut var_20: i64 = rax_4;
    let var_18: i64 = rdx;
    let mut var_30: *mut i64 = &var_20;
    let var_28: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    var_60 = &data_7ea800;
    *var_60[8] = 2;
    let var_40: i64 = 0;
    let var_50_1: *mut *mut i64 = &var_30;
    var_48 = 1;
    let rax_5: *mut c_void =
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(
        &var_68, &var_60);
    
    if rax_5 == 0
    {
        arg1[1] = rbp;
        *arg1 = 0;
    }
    else
    {
        *arg1.byte_offset(8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h93265d5384100ee9(rax_5);
        *arg1 = 1;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_88)
}
