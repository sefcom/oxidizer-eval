
  int64_t fd::exec::CommandBuilder::new_command::hd2fd042878a0df86(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    if (!arg3)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
        /* no return */
    }
    
    void var_108;
    argmax::Command::new::habaac7a58701f95a(&var_108, arg2);
    std::process::Command::stdin::h6a646153670912e8(&var_108);
    std::process::Command::stdout::h015ae6fd745f4422(&var_108);
    std::process::Command::stderr::hf8aae86f4e8c2dfd(&var_108);
    char rax;
    int64_t rdx_1;
    rax = argmax::Command::try_args::h67b21b8585c12cd1(&var_108, arg2 + 0x18, arg3 - 1);
    
    if (!(rax & 1))
        return memcpy(arg1, &var_108, 0xe8);
    
    arg1[1] = rdx_1;
    *arg1 = -0x8000000000000000;
    return core::ptr::drop_in_place$LT$argmax..Command$GT$::hca65ebb0b5b23438(&var_108);
}
