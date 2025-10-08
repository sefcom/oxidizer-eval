
  fn bat::main::ha60bf7c909bbc3cd() -> !

{
    let mut var_a8: i8;
    bat::run::hfad687f80ee846ce(&var_a8);
    
    if var_a8 == 0xd
    {
        let var_a7: i8;
        
        if var_a7 == 0
        {
            std::process::exit::hcda678ff272dfed1(1);
            /* no return */
        }
        
        std::process::exit::hcda678ff272dfed1(0);
        /* no return */
    }
    
    let var_68: i128;
    let var_18: i128 = var_68;
    let var_78: i128;
    let var_28: i128 = var_78;
    let var_88: i128;
    let var_38: i128 = var_88;
    let var_98: i128;
    let var_48: i128 = var_98;
    let mut var_58: i128 = var_a8;
    let mut var_b0: *mut c_void = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
    let mut var_b8: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_b0);
    bat::error::default_error_handler::h2bda66878880b633(&var_58, &var_b8, &data_ac8b00);
    core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hea15def22e7f674f(&var_b8);
    std::process::exit::hcda678ff272dfed1(1);
    /* no return */
}
