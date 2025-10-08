
  int128_t* uu_nohup::replace_fds::h2e47797ec36e0a94()

{
    std::io::stdio::stdin::h9a05a2c3e7544b2a();
    
    if (!std::sys::io::is_terminal::isatty::is_terminal::h046b5b5b5fb1a26b())
        goto label_456a86;
    
    char var_40;
    std::fs::File::open::h2416ede482a4a2f7(&var_40);
    int64_t var_38;
    
    if (!(var_40 & 1))
    {
        int32_t fd;
        int128_t* rax_7;
        
        if (dup2(fd, 0))
        {
            char const* const var_38_1 = "STDINSTDERRSTDOUT: ignoring inpu…";
            int64_t var_30_1 = 5;
            int64_t var_28_1 = *__errno_location() << 0x20 | 2;
            var_40 = -0x7fffffffffffffff;
            rax_7 = alloc::boxed::Box$LT$T$GT$::new::hea0f551513cd90e2(&var_40);
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h184ce9d8bb619024(fd);
            return rax_7;
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h184ce9d8bb619024(fd);
        label_456a86:
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        
        if (std::sys::io::is_terminal::isatty::is_terminal::hcf7d6d4c2f7f995e())
        {
            uu_nohup::find_stdout::hadffd7477f170ba3(&var_40);
            int64_t rax_9 = var_40;
            
            if (rax_9)
                return rax_9;
            
            int32_t fd_1 = var_38;
            
            if (dup2(fd_1, 1) != 1)
            {
                char const* const var_38_3 = "STDOUT: ignoring input and appen…";
                int64_t var_30_3 = 6;
                int64_t var_28_3 = *__errno_location() << 0x20 | 2;
                var_40 = -0x7fffffffffffffff;
                rax_7 = alloc::boxed::Box$LT$T$GT$::new::hea0f551513cd90e2(&var_40);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h184ce9d8bb619024(fd_1);
                return rax_7;
            }
            
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h184ce9d8bb619024(fd_1);
        }
        
        char rax_11 = std::sys::io::is_terminal::isatty::is_terminal::h8f1b5f7a0186fa4c();
        int32_t rax_12;
        
        if (rax_11)
            rax_12 = dup2(1, 2);
        
        if (!rax_11 || rax_12 == 2)
            return 0;
        
        char const* const var_38_2 = "STDERRSTDOUT: ignoring input and…";
        int64_t var_30_2 = 6;
        int64_t var_28_2 = *__errno_location() << 0x20 | 2;
        var_40 = -0x7fffffffffffffff;
    }
    else
    {
        int64_t rax_1 = var_38;
        var_40 = -0x7fffffffffffffff;
        var_38 = "STDINSTDERRSTDOUT: ignoring inpu…";
        *var_38[4] = 0;
        int64_t var_30 = 5;
        int64_t var_28 = rax_1;
    }
    return alloc::boxed::Box$LT$T$GT$::new::hea0f551513cd90e2(&var_40);
}
