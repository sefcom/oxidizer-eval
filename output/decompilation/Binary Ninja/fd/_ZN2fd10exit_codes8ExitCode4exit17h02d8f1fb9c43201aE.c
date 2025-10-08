
  void fd::exit_codes::ExitCode::exit::h02d8f1fb9c43201a(char arg1) __noreturn

{
    char rax_1 = arg1 - 2;
    
    if (arg1 - 2 >= 4)
        rax_1 = 1;
    
    uint64_t rbx = rax_1;
    void* rcx_1 = jump_table_474930[rbx] + &jump_table_474930;
    
    switch (rcx_1)
    {
        case 0x5f3f88:
        {
            std::process::exit::hcda678ff272dfed1(~arg1 & 1);
            /* no return */
        }
        case 0x5f3f9b:
        {
            std::process::exit::hcda678ff272dfed1(1);
            /* no return */
        }
        case 0x5f3fa8:
        {
            int32_t var_18;
            nix::sys::signal::signal::h5c99f1cb58fa7598(&var_18, 2, nullptr, rcx_1);
            
            if (var_18 == 4)
            {
                std::process::exit::hcda678ff272dfed1(0x82);
                /* no return */
            }
            
            nix::sys::signal::raise::hc734896dc776f4d0(2);
            std::process::exit::hcda678ff272dfed1(0x82);
            /* no return */
        }
        case 0x5f3fc3:
        {
            std::process::exit::hcda678ff272dfed1(rbx);
            /* no return */
        }
    }
}
