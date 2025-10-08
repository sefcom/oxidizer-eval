
  fn rg::eprint_nothing_searched::hf00b8c23f740cffe() -> bool

{
    rg::messages::set_errored::h9a7e7dff7c3f4854();
    let result: bool = rg::messages::messages::h9ee4188b23ce53b0();
    
    if result == 0
    {
        return result;
    }
    
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_48: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let rax: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_48);
    var_48 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
    let mut var_58: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_48);
    var_48 = &data_7e99c8;
    let var_40_1: i64 = 1;
    let var_38_1: i64 = 8;
    let var_30_1: i128 = {0};
    let mut rbp: i64;
    rbp = 1;
    let rax_2: *mut i64 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_58, &var_48);
    let mut var_50: *mut i64 = rax_2;
    
    if rax_2 != 0
    {
        var_48 = rax_2;
        let mut rdi_10: i32;
        rdi_10 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_2) != 0xb;
        std::process::exit::hcda678ff272dfed1(rdi_10 * 2);
        /* no return */
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_50);
    var_48 = &data_7eba38;
    let var_40_2: i64 = 1;
    let var_38_2: i64 = 8;
    let var_30_2: i128 = {0};
    let rax_3: *mut i64 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_58, &var_48);
    var_50 = rax_3;
    
    if rax_3 == 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_50);
        core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(rax);
        return core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(
            var_58);
    }
    
    var_48 = rax_3;
    let mut rdi_13: i32;
    rdi_13 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_3) != 0xb;
    std::process::exit::hcda678ff272dfed1(rdi_13 * 2);
    /* no return */
}
