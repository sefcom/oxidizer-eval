
  char const (**)[0xcf] uu_yes::exec::h637ae1cf8fadb89a(int64_t arg1, uint64_t arg2)

{
    std::io::stdio::stdout::h077da66234850927();
    int64_t* var_28 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    int64_t* rax = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_28);
    int64_t* rbx = rax;
    int64_t* var_38 = rax;
    uint64_t rax_1 = uucore::features::signals::enable_pipe_errors::hea9713d91b5b8a8c();
    char const (** i)[0xcf];
    
    if (rax_1 != 0x86)
        i = rax_1 << 0x20 | 2;
    else
    {
        int32_t var_2c = 1;
        i = uu_yes::splice::splice_data::h72ae45c2ba61e376(arg1, arg2, &var_2c);
        
        if (!i)
        {
            do
                i = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_38, arg1, arg2);
             while (!i);
            
            rbx = var_38;
        }
    }
    
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h4e60d91f978d58ff(rbx);
    return i;
}
