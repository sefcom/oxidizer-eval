
  bool rg::eprint_nothing_searched::hf00b8c23f740cffe()

{
    rg::messages::set_errored::h9a7e7dff7c3f4854();
    bool result = rg::messages::messages::h9ee4188b23ce53b0();
    
    if (!result)
        return result;
    
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_48 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    int64_t* rax = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_48);
    var_48 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
    int64_t* var_58 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_48);
    var_48 = &data_7e99c8;
    int64_t var_40_1 = 1;
    int64_t var_38_1 = 8;
    int128_t var_30_1 = {0};
    int64_t rbp;
    rbp = 1;
    int64_t* rax_2 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_58, &var_48);
    int64_t* var_50 = rax_2;
    
    if (rax_2)
    {
        var_48 = rax_2;
        int32_t rdi_10;
        rdi_10 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_2) != 0xb;
        std::process::exit::hcda678ff272dfed1(rdi_10 * 2);
        /* no return */
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_50);
    var_48 = &data_7eba38;
    int64_t var_40_2 = 1;
    int64_t var_38_2 = 8;
    int128_t var_30_2 = {0};
    int64_t* rax_3 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_58, &var_48);
    var_50 = rax_3;
    
    if (!rax_3)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_50);
        core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(rax);
        return core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(
            var_58);
    }
    
    var_48 = rax_3;
    int32_t rdi_13;
    rdi_13 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_3) != 0xb;
    std::process::exit::hcda678ff272dfed1(rdi_13 * 2);
    /* no return */
}
