
  fn alacritty_terminal::tty::unix::from_fd::h7c2d58da34abf93d(arg1: *mut i64, arg2: *mut c_void, arg3: u64, arg4: i32, arg5: i32) -> *mut i64

{
    let mut rbp: *mut i128;
    let var_8: *mut i128 = rbp;
    let mut result: *mut i64 = arg1;
    let mut fd_1: i32 = arg4;
    let mut fd: i32 = arg5;
    let mut var_298: i8;
    rustix::termios::tc::tcgetattr::h8d132d3fad628f9e(&var_298, &fd_1);
    let var_294: i128;
    let mut var_284: i128;
    let mut var_128: i128;
    
    if (var_298 & 1) == 0
    {
        let var_10c_1: i128 = var_284;
        let var_118_1: i128 = var_284;
        var_128 = var_294;
        rustix::termios::types::_::InternalBitFlags::set::hf46eb19ff63243df(&var_128);
        rustix::termios::tc::tcsetattr::he3b85e685d9dfa97(&fd_1, &var_128);
    }
    
    alacritty_terminal::tty::unix::ShellUser::from_env::h848b16d69b8782c0(&var_298);
    let rdx: i64 = var_298;
    let var_290: i64;
    
    if -(rdx) != -0x8000000000000000
    {
        let result_1: *mut i64 = result;
        let rax_3: i64 = *var_284[4];
        let rax_4: i64 = *var_284[0xc];
        let var_260: i64;
        let mut r12: i32;
        
        if *arg2 != -0x8000000000000000
        {
            result = 1;
            r12 = 1;
            std::process::Command::new::h917b3f2fed349ac5(&var_298, arg2);
            std::process::Command::args::he30d0902d7f04d4c(&var_298, *arg2.byte_offset(0x20), 
                *arg2.byte_offset(0x28));
            memcpy(&var_128, &var_298, 0xe0);
        }
        else
        {
            result = 1;
            r12 = 1;
            alacritty_terminal::tty::unix::default_shell_command::hb8782edabd018a25(&var_128, 
                var_260);
        }
        
        r12 = 1;
        rbp = 1;
        std::os::fd::owned::OwnedFd::try_clone::h2d4ed0a2cb697b3d(&var_298, &fd);
        let var_268: i64;
        let mut r15: *mut i64;
        
        if var_298 == 1
        {
            'label_9bf369:
            *result_1 = var_290;
            result_1[4] = 2;
            r12 = 1;
            'label_9bf622:
            r15 = 1;
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h2c085ab59821dbe3(&var_128);
            
            if r12 == 0
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h451460d2d1836db3(var_268, 
                    var_260);
                result = result_1;
                core::ptr::drop_in_place$LT$std..os..fd..owned..OwnedFd$GT$::h9df83259a5b4ddb8(
                    fd_1);
            }
            else
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h451460d2d1836db3(rdx, 
                    var_290);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h451460d2d1836db3(rax_3, 
                    rax_4);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h451460d2d1836db3(var_268, 
                    var_260);
                result = result_1;
                core::ptr::drop_in_place$LT$std..os..fd..owned..OwnedFd$GT$::h9df83259a5b4ddb8(fd);
                core::ptr::drop_in_place$LT$std..os..fd..owned..OwnedFd$GT$::h9df83259a5b4ddb8(
                    fd_1);
            }
        }
        else
        {
            rbp = 1;
            std::process::Command::stdin::h68abb24a9fa015ed(&var_128, var_294);
            rbp = 1;
            std::os::fd::owned::OwnedFd::try_clone::h2d4ed0a2cb697b3d(&var_298, &fd);
            
            if var_298 == 1
            {
                goto 'label_9bf369;
            }
            
            rbp = 1;
            std::process::Command::stderr::h9cc39a5b4693aed3(&var_128, var_294);
            std::process::Command::stdout::h3b60f20ba4bf0b41(&var_128, fd);
            let mut fd_2: i32;
            let mut rax_8: i64;
            let mut rdx_3: u64;
            rax_8 = core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(arg3, 
                &fd_2, 0x14);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_298, rax_8, rdx_3);
            let mut var_198: i128 = var_298;
            r12 = 1;
            let mut r13: u64;
            r13 = 1;
            std::process::Command::env::h2bbb24e765417b2d(&var_128, &var_198);
            var_298 = rdx;
            let var_290_1: i64 = var_290;
            let var_288: i64;
            let var_288_1: i64 = var_288;
            std::process::Command::env::he8c4ef71d556c1a2(&var_128, "USE", 4, &var_298);
            var_298 = rax_3;
            let var_270: i64;
            let var_288_2: i64 = var_270;
            std::process::Command::env::he8c4ef71d556c1a2(&var_128, "HOMEeasem", 4, &var_298);
            var_298 = var_198;
            std::process::Command::env::he8c4ef71d556c1a2(&var_128, "WINDOWI", 8, &var_298);
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h59531a80e7893969(&var_298, 
                arg2.byte_offset(0x48));
            
            loop
            {
                let mut rax_17: *mut c_void;
                let mut rdx_4: *mut c_void;
                rax_17 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9e245cb149992d79(&var_298);
                
                if rax_17 == 0
                {
                    break;
                }
                
                std::process::Command::env::hc9828b0dacfb8824(&var_128, rax_17, rdx_4);
            }
            
            std::process::Command::env_remove::h64302d80addb9e23(&var_128, 
                "XDG_ACTIVATION_TOKENDESKTOP_STAR…");
            std::process::Command::env_remove::h64302d80addb9e23(&var_128, 
                "DESKTOP_STARTUP_IDFailed to set …");
            let mut rax_18: i64 = -0x8000000000000000;
            let mut var_138: i128;
            
            if *arg2.byte_offset(0x30) != -0x8000000000000000
            {
                _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(&var_298, *arg2.byte_offset(0x38), *arg2.byte_offset(0x40));
                rax_18 = var_298;
                var_138 = rax_4;
            }
            
            var_298 = rax_18;
            let mut var_290_2: i64;
            var_290_2 = var_138;
            *var_284[4] = arg5;
            *var_284[8] = arg4;
            _$LT$std..process..Command$u20$as$u20$std..os..unix..process..CommandExt$GT$::pre_exec::h071ffb1edc305a90(&var_128, &var_298);
            std::os::unix::net::stream::UnixStream::pair::h100086d341b35033(&var_298);
            
            if var_298 == 1
            {
                *result_1 = var_290_2;
                result_1[4] = 2;
                r12 = 0;
                goto 'label_9bf622;
            }
            
            fd_2 = var_290_2;
            signal_hook::low_level::pipe::register_raw::hfd0241c2fd09bf97(&var_298, 0x11, var_294);
            let mut rax_20: i64;
            
            if (var_298 & 1) != 0
            {
                rax_20 = var_290_2;
                'label_9bf608:
                *result_1 = rax_20;
                result_1[4] = 2;
                core::ptr::drop_in_place$LT$std..process..ChildStdin$GT$::heb577a6f44b56825(fd_2);
                r12 = 0;
                goto 'label_9bf622;
            }
            
            rax_20 = std::os::unix::net::stream::UnixStream::set_nonblocking::h472a9945eb1c96b6(
                &fd_2, 1);
            
            if rax_20 != 0
            {
                goto 'label_9bf608;
            }
            
            let fd_3: i32 = fd_2;
            let mut var_158: i32;
            std::process::Command::spawn::haea730ea7b05a977(&var_158, &var_128);
            let var_154: i128;
            
            if var_158 != 1
            {
                alacritty_terminal::tty::unix::set_nonblocking::h073f954038365434(arg4);
                *var_290_2[4] = var_154;
                let fd_4: i32 = fd_1;
                result_1[1] = *var_284[4];
                *result_1 = var_288;
                result_1[2] = *var_284[0xc];
                *result_1.byte_offset(0x34) = *var_154[0xc];
                let zmm0_5: i128 = var_298;
                *result_1.byte_offset(0x24) = var_288;
                *result_1.byte_offset(0x14) = zmm0_5;
                *result_1.byte_offset(0x3c) = fd_4;
                result_1[8] = fd_3;
                r15 = nullptr;
            }
            else
            {
                let rdi_38: i64 = *var_154[4];
                let mut var_2a0: i64 = rdi_38;
                let rax_22: i8 = std::io::error::Error::kind::h135fe00c4e7365f3(rdi_38);
                let mut rax_23: i64;
                let mut rdx_9: u64;
                rax_23 = std::process::Command::get_program::h41efdce1cd7a1359(&var_128);
                let mut var_170: i64;
                alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_170, rax_23, rdx_9);
                fd_2 = &var_170;
                let var_1b0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h39a2d61af06a0d8e;
                let var_1a8_1: *mut i64 = &var_2a0;
                let var_1a0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                var_298 = &data_c972e0;
                let var_290_3: i64 = 2;
                *var_284[0xc] = 0;
                let var_288_4: *mut i32 = &fd_2;
                *var_284[4] = 2;
                let mut var_48: ();
                core::option::Option$LT$T$GT$::map_or_else::h2801a126379f10f2(&var_48, &var_298);
                let var_168: i64;
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h8f92a929d7e02796(
                    var_170, var_168);
                *result_1 = std::io::error::Error::new::h5db66b0057e01ec7(rax_22, &var_48);
                result_1[4] = 2;
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h86469fc896c1a0d5(var_2a0);
                core::ptr::drop_in_place$LT$std..process..ChildStdin$GT$::heb577a6f44b56825(fd_3);
                r15 = 1;
            }
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h2c085ab59821dbe3(&var_128);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h451460d2d1836db3(var_268, 
                var_260);
            result = result_1;
            
            if r15 != 0
            {
                core::ptr::drop_in_place$LT$std..os..fd..owned..OwnedFd$GT$::h9df83259a5b4ddb8(
                    fd_1);
            }
        }
    }
    else
    {
        *result = var_290;
        result[4] = 2;
        core::ptr::drop_in_place$LT$std..os..fd..owned..OwnedFd$GT$::h9df83259a5b4ddb8(fd);
        core::ptr::drop_in_place$LT$std..os..fd..owned..OwnedFd$GT$::h9df83259a5b4ddb8(fd_1);
    }
    result
}
