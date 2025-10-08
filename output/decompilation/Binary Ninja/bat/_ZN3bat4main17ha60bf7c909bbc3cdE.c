
  void bat::main::ha60bf7c909bbc3cd() __noreturn

{
    char var_a8;
    bat::run::hfad687f80ee846ce(&var_a8);
    
    if (var_a8 == 0xd)
    {
        char var_a7;
        
        if (!var_a7)
        {
            std::process::exit::hcda678ff272dfed1(1);
            /* no return */
        }
        
        std::process::exit::hcda678ff272dfed1(0);
        /* no return */
    }
    
    int128_t var_68;
    int128_t var_18 = var_68;
    int128_t var_78;
    int128_t var_28 = var_78;
    int128_t var_88;
    int128_t var_38 = var_88;
    int128_t var_98;
    int128_t var_48 = var_98;
    int128_t var_58 = var_a8;
    void* var_b0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
    int64_t* var_b8 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_b0);
    bat::error::default_error_handler::h2bda66878880b633(&var_58, &var_b8, &data_ac8b00);
    core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hea15def22e7f674f(&var_b8);
    std::process::exit::hcda678ff272dfed1(1);
    /* no return */
}
