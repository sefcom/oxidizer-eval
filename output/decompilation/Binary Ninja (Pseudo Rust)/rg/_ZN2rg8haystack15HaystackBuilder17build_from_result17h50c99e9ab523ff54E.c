
  fn rg::haystack::HaystackBuilder::build_from_result::h50c99e9ab523ff54(arg1: *mut i64, arg2: i8, arg3: *mut i32) -> i64

{
    if *arg3 != 3
    {
        /* tailcall */
        return rg::haystack::HaystackBuilder::build::hbf10e93e3f18e435(arg1, arg2, arg3);
    }
    
    let var_28: i64 = *arg3.byte_offset(0x38);
    let var_38: i128 = *arg3.byte_offset(0x28);
    let var_48: i128 = *arg3.byte_offset(0x18);
    let mut var_58: i128 = *arg3.byte_offset(8);
    rg::messages::set_errored::h9a7e7dff7c3f4854();
    
    if rg::messages::messages::h9ee4188b23ce53b0() != 0
    {
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        let mut var_a0: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
        let rax_2: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_a0);
        var_a0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
        let mut var_a8: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_a0);
        var_a0 = &data_7e99c8;
        let var_98_1: i64 = 1;
        let var_90_1: i64 = 8;
        let mut var_88_1: i128 = {0};
        let mut rbp: i64;
        rbp = 1;
        let rax_4: *mut i128 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_a8, &var_a0);
        let mut var_68: *mut i128 = rax_4;
        
        if rax_4 != 0
        {
            var_a0 = rax_4;
            let mut rdi_12: i32;
            rdi_12 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_4) != 0xb;
            std::process::exit::hcda678ff272dfed1(rdi_12 * 2);
            /* no return */
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_68);
        var_68 = &var_58;
        let var_60_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 =
            _$LT$ignore..Error$u20$as$u20$core..fmt..Display$GT$::fmt::heee24f66390ed69b;
        var_a0 = &data_7ea800;
        let var_98_2: i64 = 2;
        *var_88_1[8] = 0;
        let var_90_2: *mut *mut i128 = &var_68;
        var_88_1 = 1;
        let rax_5: *mut i64 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_a8, &var_a0);
        let mut var_70: *mut i64 = rax_5;
        
        if rax_5 != 0
        {
            var_a0 = rax_5;
            let mut rdi_15: i32;
            rdi_15 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_5) != 0xb;
            std::process::exit::hcda678ff272dfed1(rdi_15 * 2);
            /* no return */
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_70);
        core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(rax_2);
        core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(var_a8);
    }
    
    *arg1 = 3;
    core::ptr::drop_in_place$LT$ignore..Error$GT$::h648dc1fae12db6ab(&var_58)
}
