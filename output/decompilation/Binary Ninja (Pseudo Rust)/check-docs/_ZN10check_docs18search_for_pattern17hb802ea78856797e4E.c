
  fn check_docs::search_for_pattern::hb802ea78856797e4(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64) -> *mut i64

{
    let mut var_1a8: i64 = arg2;
    let var_1a0: i64 = arg3;
    let mut var_128: *mut *mut [i8; 0xbf];
    std::process::Command::new::h6b193cfe60369f89(&var_128, "grepb");
    std::process::Command::arg::h09db51410207777d(&var_128, "-H-n-r--binary-files=without-mat…");
    std::process::Command::arg::h09db51410207777d(&var_128, "-n-r--binary-files=without-match…");
    std::process::Command::arg::h09db51410207777d(&var_128, "-r--binary-files=without-match--…");
    std::process::Command::arg::h09db51410207777d(&var_128, "--binary-files=without-match--ex…");
    std::process::Command::arg::h09db51410207777d(&var_128, "--exclude-dir=check-docsfailed g…");
    std::process::Command::arg::h09db51410207777d(&var_128, arg2);
    std::process::Command::arg::h09db51410207777d(&var_128, arg4);
    let mut var_198: i128;
    std::process::Command::output::h8d3fd625d1d0bec1(&var_198);
    let mut var_160: ();
    core::result::Result$LT$T$C$E$GT$::expect::hd013351f25734c35(&var_160, &var_198, 
        "failed grep commandFailed runnin…", 0x13);
    let rdx_7: u64 =
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h13e711a87b909194(&var_128);
    let var_130: i32;
    let mut var_120: i128;
    
    if var_130 == 0
    {
        alloc::string::String::from_utf8::hcb4419710bc0e60b(&var_128, &var_160);
        let rax_1: *mut *mut [i8; 0xbf] = var_128;
        var_198 = var_120;
        let var_110: i64;
        
        if -(rax_1) != -0x8000000000000000
        {
            let var_110_2: i64 = var_110;
            let var_120_1: i128 = var_198;
            var_128 = rax_1;
            let var_108: i64;
            let var_108_2: i64 = var_108;
            arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::ha48715314de132c6(&var_128);
            *arg1 = -0x8000000000000000;
        }
        else
        {
            arg1[2] = var_110;
            *arg1 = var_198;
        }
    }
    else
    {
        var_198 = &var_1a8;
        *var_198[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8c5b7927cb42b082;
        var_128 = &data_5d3688;
        var_120 = 2;
        let var_108_1: i64 = 0;
        *var_120[8] = &var_198;
        let var_110_1: i64 = 1;
        let mut var_48: ();
        core::option::Option$LT$T$GT$::map_or_else::hb92624ab2af3a182(&var_48, 0, rdx_7, &var_128);
        arg1[1] = anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::h1606e8560e5c3217(&var_48);
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3b4e207945e3471f(&var_160);
    }
    let mut var_148: ();
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3b4e207945e3471f(&var_148);
    arg1
}
