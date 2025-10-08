
  fn uu_nohup::replace_fds::h2e47797ec36e0a94() -> *mut i128

{
    std::io::stdio::stdin::h9a05a2c3e7544b2a();
    
    if std::sys::io::is_terminal::isatty::is_terminal::h046b5b5b5fb1a26b() == 0
    {
        goto 'label_456a86;
    }
    
    let mut var_40: i8;
    std::fs::File::open::h2416ede482a4a2f7(&var_40);
    let mut var_38: i64;
    
    if (var_40 & 1) == 0
    {
        let fd: i32;
        let mut rax_7: *mut i128;
        
        if dup2(fd, 0) != 0
        {
            let var_38_1: *const i8 = "STDINSTDERRSTDOUT: ignoring inpu…";
            let var_30_1: i64 = 5;
            let var_28_1: i64 = *__errno_location() << 0x20 | 2;
            var_40 = -0x7fffffffffffffff;
            rax_7 = alloc::boxed::Box$LT$T$GT$::new::hea0f551513cd90e2(&var_40);
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h184ce9d8bb619024(fd);
            return rax_7;
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h184ce9d8bb619024(fd);
        'label_456a86:
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        
        if std::sys::io::is_terminal::isatty::is_terminal::hcf7d6d4c2f7f995e() != 0
        {
            uu_nohup::find_stdout::hadffd7477f170ba3(&var_40);
            let rax_9: i64 = var_40;
            
            if rax_9 != 0
            {
                return rax_9;
            }
            
            let fd_1: i32 = var_38;
            
            if dup2(fd_1, 1) != 1
            {
                let var_38_3: *const i8 = "STDOUT: ignoring input and appen…";
                let var_30_3: i64 = 6;
                let var_28_3: i64 = *__errno_location() << 0x20 | 2;
                var_40 = -0x7fffffffffffffff;
                rax_7 = alloc::boxed::Box$LT$T$GT$::new::hea0f551513cd90e2(&var_40);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h184ce9d8bb619024(fd_1);
                return rax_7;
            }
            
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h184ce9d8bb619024(fd_1);
        }
        
        let rax_11: i8 = std::sys::io::is_terminal::isatty::is_terminal::h8f1b5f7a0186fa4c();
        let mut rax_12: i32;
        
        if rax_11 != 0
        {
            rax_12 = dup2(1, 2);
        }
        
        if rax_11 == 0 || rax_12 == 2
        {
            return 0;
        }
        
        let var_38_2: *const i8 = "STDERRSTDOUT: ignoring input and…";
        let var_30_2: i64 = 6;
        let var_28_2: i64 = *__errno_location() << 0x20 | 2;
        var_40 = -0x7fffffffffffffff;
    }
    else
    {
        let rax_1: i64 = var_38;
        var_40 = -0x7fffffffffffffff;
        var_38 = "STDINSTDERRSTDOUT: ignoring inpu…";
        *var_38[4] = 0;
        let var_30: i64 = 5;
        let var_28: i64 = rax_1;
    }
    alloc::boxed::Box$LT$T$GT$::new::hea0f551513cd90e2(&var_40)
}
