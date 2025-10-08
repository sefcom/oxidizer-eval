
  fn rg::main::h7e0f93392abea4fa() -> u64

{
    let mut var_3c8: i128;
    rg::flags::parse::parse::hfff2c8ca8bc39d55(&var_3c8);
    let mut var_410: i8;
    rg::run::h4fa263ea092112c0(&var_410, &var_3c8);
    
    if var_410 != 1
    {
        let var_40f: i8;
        return var_40f;
    }
    
    let var_408: i64;
    let mut var_420: i64 = var_408;
    let mut var_3e8: i128;
    anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::chain::h309703631ff77b15(&var_3e8, &var_420);
    let var_3d8: i128;
    let mut var_3b8_1: i128 = var_3d8;
    var_3c8 = var_3e8;
    
    loop
    {
        let mut rax_1: *mut i64;
        let mut rdx_1: *mut c_void;
        rax_1 = anyhow::chain::_$LT$impl$u20$core..iter..traits..iterator..Iterator$u20$for$u20$anyhow..Chain$GT$::next::hdbe11d3f3550117e(&var_3c8);
        
        if rax_1 == 0
        {
            break;
        }
        
        *rdx_1.byte_offset(0x38);
        
        if _$LT$dyn$u20$core..error..Error$GT$::is::hce57dda328083154() != 0
            && std::io::error::Error::kind::h135fe00c4e7365f3(*rax_1) == 0xb
        {
            core::ptr::drop_in_place$LT$anyhow..Chain$GT$::h5d69fa9296ba90a7(&var_3c8);
            core::ptr::drop_in_place$LT$anyhow..Error$GT$::h25f51841f1014f37();
            return 0;
        }
    }
    
    core::ptr::drop_in_place$LT$anyhow..Chain$GT$::h5d69fa9296ba90a7(&var_3c8);
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    var_3c8 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let rax_4: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_3c8);
    var_3c8 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
    let mut var_418: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_3c8);
    var_3c8 = &data_7e99c8;
    *var_3c8[8] = 1;
    var_3b8_1 = 8;
    var_3b8_1 = {0};
    let mut rbp: i64;
    rbp = 1;
    let rax_6: *mut i64 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_418, &var_3c8);
    let mut var_3f8: *mut i64 = rax_6;
    
    if rax_6 != 0
    {
        var_3c8 = rax_6;
        let mut rdi_17: i32;
        rdi_17 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_6) != 0xb;
        std::process::exit::hcda678ff272dfed1(rdi_17 * 2);
        /* no return */
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_3f8);
    var_3f8 = &var_420;
    let var_3f0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = anyhow::error::_$LT$impl$u20$core..fmt..Display$u20$for$u20$anyhow..Error$GT$::fmt::he8862a1212ccbd86;
    var_3c8 = &data_7ea800;
    *var_3c8[8] = 2;
    let var_3a8_1: *mut c_void = &data_487ff8;
    let var_3a0_1: i64 = 1;
    var_3b8_1 = &var_3f8;
    *var_3b8_1[8] = 1;
    let rax_7: i64 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_418, &var_3c8);
    let mut var_400: i64 = rax_7;
    
    if rax_7 != 0
    {
        var_3c8 = rax_7;
        let mut rdi_20: i32;
        rdi_20 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_7) != 0xb;
        std::process::exit::hcda678ff272dfed1(rdi_20 * 2);
        /* no return */
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_400);
    core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(rax_4);
    core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(var_418);
    core::ptr::drop_in_place$LT$anyhow..Error$GT$::h25f51841f1014f37();
    let mut result: u64;
    result = 2;
    result
}
