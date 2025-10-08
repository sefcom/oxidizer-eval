
  fn zoxide::main::h052d65c38aafa843() -> u64

{
    std::env::remove_var::h2e8df9aa3cb8d6b6("RUST_LIB_BACKTRACERUST_BACKTRACE…");
    std::env::remove_var::h2e8df9aa3cb8d6b6("RUST_BACKTRACE' wasn't recognize…");
    let mut var_58: ();
    clap_builder::derive::Parser::parse::h7c59585d5d69ad43(&var_58);
    let rax: *mut i64 =
        _$LT$zoxide..cmd..cmd..Cmd$u20$as$u20$zoxide..cmd..Run$GT$::run::h9c459d8ce607258a(&var_58);
    let mut rbx: u32;
    
    if rax == 0
    {
        rbx = 0;
    }
    else
    {
        let mut var_b8: i8;
        anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::downcast::h1c453138b475fd5e(&var_b8, rax);
        let var_b7: i8;
        
        if var_b8 != 1
        {
            rbx = var_b7;
        }
        else
        {
            let var_b0: i64;
            let mut var_c0: i64 = var_b0;
            let mut var_a0: *mut c_void = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            let mut var_98: *mut i64 = &var_c0;
            let var_90_1: fn(arg1: *mut i64) -> i64 = anyhow::error::_$LT$impl$u20$core..fmt..Debug$u20$for$u20$anyhow..Error$GT$::fmt::h45dbd11a91a596ce;
            let mut var_88: *mut *mut c_void = &data_534cb0;
            let var_80_1: i64 = 2;
            let var_68_1: i64 = 0;
            let var_78_1: *mut *mut i64 = &var_98;
            let var_70_1: i64 = 1;
            let mut var_a8: *mut c_void = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(&var_a0, &var_88);
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h29a4fc21488b4033(&var_a8);
            core::ptr::drop_in_place$LT$anyhow..Error$GT$::h20a3619e4651cb22();
            rbx = 1;
        }
    }
    
    core::ptr::drop_in_place$LT$zoxide..cmd..cmd..Cmd$GT$::h1183555263919549(&var_58);
    rbx
}
