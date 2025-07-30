
  fn harry::main::h240b3e3f9d3b800b() -> !

{
    let mut var_140: *mut *mut c_void = &data_474000;
    let var_138: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h55d6a8b466f9fb98;
    let mut var_e8: *mut *mut [i8; 0x8a];
    core::fmt::Arguments::new_v1::h72a5ca90758d0a10(&var_e8, &data_474010, 1, &var_140, 1);
    let mut var_70: *mut c_void;
    alloc::fmt::format::hc41d8db97b3bb714(&var_70, &var_e8);
    let mut var_b8: *mut c_void = var_70;
    let var_60: i64;
    let var_b0: i64 = var_60;
    let mut rax_1: i64;
    let mut rdx: i32;
    rax_1 = std::time::Instant::now::h496a7553e3911a50();
    let mut var_a8: i64 = rax_1;
    let var_a0: i32 = rdx;
    
    loop
    {
        var_140 = &var_b8;
        let var_138_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h55d6a8b466f9fb98;
        core::fmt::Arguments::new_v1::h72a5ca90758d0a10(&var_e8, &data_474020, 2, &var_140, 1);
        std::io::stdio::_print::hbcfcc64486c1a1db(&var_e8);
        std::net::each_addr::h84bf5175266a12e1(&var_e8);
        core::result::Result$LT$T$C$E$GT$::map::h6c1fa2fed6e72495(&var_140, &var_e8);
        let mut fd: i32 = core::result::Result$LT$T$C$E$GT$::expect::h7005adc39a822520(&var_140);
        var_e8 = &data_474058;
        let var_e0_1: i64 = 1;
        let var_d8_1: *const i8 = "/rustc/1b198b3a196442e14fb069781…";
        let var_d0_1: i128 = {0};
        std::io::stdio::_print::hbcfcc64486c1a1db(&var_e8);
        let mut var_58: i32;
        std::net::tcp::TcpListener::accept::hb039f0b1ecf9d320(&var_58, &fd);
        let mut var_98: i128;
        let var_50: i128;
        
        if var_58 == 0
        {
            let fd_2: i32;
            let mut fd_1: i32 = fd_2;
            let var_40: i128;
            let var_88_1: i128 = var_40;
            var_98 = var_50;
            var_140 = &var_98;
            let var_138_3: fn(arg1: *mut i16) -> i64 = _$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Display$GT$::fmt::h0801164e00af01bb;
            core::fmt::Arguments::new_v1::h72a5ca90758d0a10(&var_e8, &data_474068, 2, &var_140, 1);
            std::io::stdio::_print::hbcfcc64486c1a1db(&var_e8);
            let mut var_15c_1: i8 = 0;
            let mut var_158: i64;
            let mut var_110: *mut i64;
            
            loop
            {
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hc75773a6223aa268(
                    &var_140, 0x2000, &fd_1);
                var_158 = 1;
                let var_150_1: i128 = {0};
                let mut var_f8: i64;
                std::io::append_to_string::h8a48f86863967257(&var_f8, &var_158, &var_140);
                let var_f0: *mut i64;
                let mut var_168: *mut i64;
                
                if var_f8 == 0
                {
                    if var_f0 == 0
                    {
                        break;
                    }
                    
                    alloc::string::String::pop::hfca843d401cd7607(&var_158);
                    var_e8 = &data_4740a8;
                    let var_e0_2: i64 = 1;
                    let var_d8_3: *const i8 = "/rustc/1b198b3a196442e14fb069781…";
                    let var_d0_2: i128 = {0};
                    std::io::stdio::_print::hbcfcc64486c1a1db(&var_e8);
                    let rax_7: i8 = harry::verify_sha3::hc08f6c9d2a5e4aae(var_158);
                    let mut rax_9: i8;
                    
                    if rax_7 != 0
                    {
                        let mut rax_8: i64;
                        let mut rdx_7: i32;
                        rax_8 = std::time::Instant::elapsed::h73f0bb44a1ed6627(&var_a8);
                        rax_9 = _$LT$core..time..Duration$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::h3e58c3a3fa7a0a4e(rax_8, rdx_7, 1, 0);
                    }
                    
                    if rax_7 == 0 || rax_9 == 0xff
                    {
                        let mut rax_11: i64;
                        let mut rdx_8: i32;
                        rax_11 = std::time::Instant::now::h496a7553e3911a50();
                        var_a8 = rax_11;
                        let var_a0_1: i32 = rdx_8;
                        var_168 = &var_158;
                        var_110 = &var_168;
                        let var_108_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9a842562ad49cb5b;
                        core::fmt::Arguments::new_v1::h72a5ca90758d0a10(&var_e8, &data_4740b8, 2, 
                            &var_110, 1);
                        std::io::stdio::_print::hbcfcc64486c1a1db(&var_e8);
                    }
                    else
                    {
                        var_e8 = &data_4740d8;
                        let var_e0_3: i64 = 1;
                        let var_d8_4: *const i8 = "/rustc/1b198b3a196442e14fb069781…";
                        let var_d0_3: i128 = {0};
                        std::io::stdio::_print::hbcfcc64486c1a1db(&var_e8);
                        std::net::udp::UdpSocket::send::h4e1ed1b396109b45(&var_e8, &fd_1, 
                            "Authenticated!\nError: -cshFaile…", 0xf);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hf978b148e834039c(&var_e8);
                        var_15c_1 = 1;
                    }
                }
                else
                {
                    'label_40c1a5:
                    var_168 = var_f0;
                    var_110 = &var_168;
                    let var_108_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha06740198faf5823;
                    core::fmt::Arguments::new_v1::h72a5ca90758d0a10(&var_e8, &data_4740e8, 2, 
                        &var_110, 1);
                    std::io::stdio::_print::hbcfcc64486c1a1db(&var_e8);
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha602bf7ed800fc68(
                        &var_168);
                }
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82ac9a33f2cb35fc(&var_158);
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$$u5b$u8$u5d$$GT$$GT$::hc3fc27d3d4938943(var_140, var_138_3);
                
                if (var_15c_1 & 1) != 0
                {
                    loop
                    {
                        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hc75773a6223aa268(&var_140, 0x2000, &fd_1);
                        var_158 = 1;
                        let var_150_2: i128 = {0};
                        std::io::append_to_string::h8a48f86863967257(&var_f8, &var_158, &var_140);
                        
                        if var_f8 != 0
                        {
                            goto 'label_40c1a5;
                        }
                        
                        if var_f0 == 0
                        {
                            break;
                        }
                        
                        alloc::string::String::pop::hfca843d401cd7607(&var_158);
                        let var_d8_2: i64 = *var_150_2[8];
                        var_e8 = var_158;
                        harry::exec::hac2f1647ab723faf(&var_110, &var_e8);
                        let var_100: u64;
                        std::net::udp::UdpSocket::send::h4e1ed1b396109b45(&var_e8, &fd_1, var_110, 
                            var_100);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hf978b148e834039c(&var_e8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82ac9a33f2cb35fc(
                            &var_110);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$$u5b$u8$u5d$$GT$$GT$::hc3fc27d3d4938943(var_140, var_138_3);
                    }
                    
                    break;
                }
            }
            
            var_110 = &var_98;
            let var_108_3: fn(arg1: *mut i16) -> i64 = _$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Display$GT$::fmt::h0801164e00af01bb;
            core::fmt::Arguments::new_v1::h72a5ca90758d0a10(&var_e8, &data_474088, 2, &var_110, 1);
            std::io::stdio::_print::hbcfcc64486c1a1db(&var_e8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82ac9a33f2cb35fc(&var_158);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$$u5b$u8$u5d$$GT$$GT$::hc3fc27d3d4938943(var_140, var_138_3);
            core::ptr::drop_in_place$LT$std..net..tcp..TcpStream$GT$::h9b88f3dc8a6d30d8(fd_1);
            core::ptr::drop_in_place$LT$std..net..tcp..TcpStream$GT$::h9b88f3dc8a6d30d8(fd);
        }
        else
        {
            var_98 = var_50;
            var_140 = &var_98;
            let var_138_2: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha06740198faf5823;
            core::fmt::Arguments::new_v1::h72a5ca90758d0a10(&var_e8, &data_4740e8, 2, &var_140, 1);
            std::io::stdio::_print::hbcfcc64486c1a1db(&var_e8);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha602bf7ed800fc68(&var_98);
            core::ptr::drop_in_place$LT$std..net..tcp..TcpStream$GT$::h9b88f3dc8a6d30d8(fd);
        }
    }
}
