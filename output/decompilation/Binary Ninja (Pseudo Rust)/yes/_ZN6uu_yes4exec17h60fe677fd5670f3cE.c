
  fn uu_yes::exec::h60fe677fd5670f3c(arg1: i64, arg2: u64) -> ssize_t

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_28: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let rax: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_28);
    let mut rbx: *mut i64 = rax;
    let mut var_30: *mut i64 = rax;
    let rax_1: u64 = uucore::features::signals::enable_pipe_errors::he7938a115a9dd81b();
    let mut result: ssize_t;
    
    if rax_1 != 0x86
    {
        result = rax_1 << 0x20 | 2;
    }
    else
    {
        let mut i: ssize_t;
        
        do
        {
            i = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_30, arg1, arg2);
        } while i == 0;
        
        result = i;
        rbx = var_30;
    }
    
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::hacba85391fa2ffb8(rbx);
    result
}
