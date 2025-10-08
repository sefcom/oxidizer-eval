
  fn forc_crypto::main::h4cb215e16df55901() -> i64

{
    let mut var_48: i8 = 0;
    let var_46: i16 = 0x402;
    let mut var_68: *const i8 = 6;
    let var_60: i64 = -0x8000000000000000;
    forc_tracing::init_tracing_subscriber::h0a725aa6998cc63f(&var_68);
    let rax: u64 = forc_crypto::run::h9233c73a0bfd917d();
    let mut var_38: u64 = rax;
    
    if rax == 0
    {
        return core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$anyhow..Error$GT$$GT$::h966a044c23b2646d(&var_38);
    }
    
    let mut var_70: u64 = rax;
    let mut var_30: *mut u64 = &var_70;
    let var_28: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = anyhow::error::_$LT$impl$u20$core..fmt..Display$u20$for$u20$anyhow..Error$GT$::fmt::h15a36b3793b796da;
    var_68 = &data_47ab60;
    let var_60_1: i64 = 1;
    var_48 = 0;
    let var_58: *mut *mut u64 = &var_30;
    let var_50: i64 = 1;
    let mut var_20: i128;
    core::option::Option$LT$T$GT$::map_or_else::hf0943f2d701b1660(&var_20, &var_68);
    var_68 = var_20;
    let var_10: u64;
    let var_58_1: u64 = var_10;
    forc_tracing::println_error::h8bc2a86d36dc4dba(var_60_1, var_10);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h194128577f2b3aed(&var_68);
    std::process::exit::hcda678ff272dfed1(1);
    /* no return */
}
