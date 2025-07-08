
  fn uu_yes::exec::h637ae1cf8fadb89a(arg1: i64, arg2: u64) -> *mut *mut [i8; 0xcf]

{
    std::io::stdio::stdout::h077da66234850927();
    let mut var_28: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    let rax: *mut i64 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_28);
    let mut rbx: *mut i64 = rax;
    let mut var_38: *mut i64 = rax;
    let rax_1: u64 = uucore::features::signals::enable_pipe_errors::hea9713d91b5b8a8c();
    let mut i: *mut *mut [i8; 0xcf];
    
    if rax_1 != 0x86
    {
        i = rax_1 << 0x20 | 2;
    }
    else
    {
        let mut var_2c: i32 = 1;
        i = uu_yes::splice::splice_data::h72ae45c2ba61e376(arg1, arg2, &var_2c);
        
        if i == 0
        {
            do
            {
                i = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_38, arg1, arg2);
            } while i == 0;
            
            rbx = var_38;
        }
    }
    
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h4e60d91f978d58ff(rbx);
    i
}
