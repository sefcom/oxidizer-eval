
  ssize_t uu_yes::exec::h60fe677fd5670f3c(int64_t arg1, uint64_t arg2)

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_28 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    int64_t* rax = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_28);
    int64_t* rbx = rax;
    int64_t* var_30 = rax;
    uint64_t rax_1 = uucore::features::signals::enable_pipe_errors::he7938a115a9dd81b();
    ssize_t result;
    
    if (rax_1 != 0x86)
        result = rax_1 << 0x20 | 2;
    else
    {
        ssize_t i;
        
        do
            i = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_30, arg1, arg2);
         while (!i);
        
        result = i;
        rbx = var_30;
    }
    
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::hacba85391fa2ffb8(rbx);
    return result;
}
