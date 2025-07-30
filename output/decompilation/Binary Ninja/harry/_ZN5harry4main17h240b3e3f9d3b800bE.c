
  void harry::main::h240b3e3f9d3b800b() __noreturn

{
    void** const var_140 = &data_474000;
    int64_t (* var_138)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h55d6a8b466f9fb98;
    char const (** const var_e8)[0x8a];
    core::fmt::Arguments::new_v1::h72a5ca90758d0a10(&var_e8, &data_474010, 1, &var_140, 1);
    void* var_70;
    alloc::fmt::format::hc41d8db97b3bb714(&var_70, &var_e8);
    void* var_b8 = var_70;
    int64_t var_60;
    int64_t var_b0 = var_60;
    int64_t rax_1;
    int32_t rdx;
    rax_1 = std::time::Instant::now::h496a7553e3911a50();
    int64_t var_a8 = rax_1;
    int32_t var_a0 = rdx;
    
    while (true)
    {
        var_140 = &var_b8;
        int64_t (* var_138_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h55d6a8b466f9fb98;
        core::fmt::Arguments::new_v1::h72a5ca90758d0a10(&var_e8, &data_474020, 2, &var_140, 1);
        std::io::stdio::_print::hbcfcc64486c1a1db(&var_e8);
        std::net::each_addr::h84bf5175266a12e1(&var_e8);
        core::result::Result$LT$T$C$E$GT$::map::h6c1fa2fed6e72495(&var_140, &var_e8);
        int32_t fd = core::result::Result$LT$T$C$E$GT$::expect::h7005adc39a822520(&var_140);
        var_e8 = &data_474058;
        int64_t var_e0_1 = 1;
        char const* const var_d8_1 = "/rustc/1b198b3a196442e14fb069781…";
        int128_t var_d0_1 = {0};
        std::io::stdio::_print::hbcfcc64486c1a1db(&var_e8);
        int32_t var_58;
        std::net::tcp::TcpListener::accept::hb039f0b1ecf9d320(&var_58, &fd);
        int128_t var_98;
        int128_t var_50;
        
        if (!var_58)
        {
            int32_t fd_2;
            int32_t fd_1 = fd_2;
            int128_t var_40;
            int128_t var_88_1 = var_40;
            var_98 = var_50;
            var_140 = &var_98;
            int64_t (* var_138_3)(int16_t* arg1) = _$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Display$GT$::fmt::h0801164e00af01bb;
            core::fmt::Arguments::new_v1::h72a5ca90758d0a10(&var_e8, &data_474068, 2, &var_140, 1);
            std::io::stdio::_print::hbcfcc64486c1a1db(&var_e8);
            char var_15c_1 = 0;
            int64_t var_158;
            int64_t* var_110;
            
            while (true)
            {
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hc75773a6223aa268(
                    &var_140, 0x2000, &fd_1);
                var_158 = 1;
                int128_t var_150_1 = {0};
                int64_t var_f8;
                std::io::append_to_string::h8a48f86863967257(&var_f8, &var_158, &var_140);
                int64_t* var_f0;
                int64_t* var_168;
                
                if (!var_f8)
                {
                    if (!var_f0)
                        break;
                    
                    alloc::string::String::pop::hfca843d401cd7607(&var_158);
                    var_e8 = &data_4740a8;
                    int64_t var_e0_2 = 1;
                    char const* const var_d8_3 = "/rustc/1b198b3a196442e14fb069781…";
                    int128_t var_d0_2 = {0};
                    std::io::stdio::_print::hbcfcc64486c1a1db(&var_e8);
                    char rax_7 = harry::verify_sha3::hc08f6c9d2a5e4aae(var_158);
                    char rax_9;
                    
                    if (rax_7)
                    {
                        int64_t rax_8;
                        int32_t rdx_7;
                        rax_8 = std::time::Instant::elapsed::h73f0bb44a1ed6627(&var_a8);
                        rax_9 = _$LT$core..time..Duration$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::h3e58c3a3fa7a0a4e(rax_8, rdx_7, 1, 0);
                    }
                    
                    if (!rax_7 || rax_9 == 0xff)
                    {
                        int64_t rax_11;
                        int32_t rdx_8;
                        rax_11 = std::time::Instant::now::h496a7553e3911a50();
                        var_a8 = rax_11;
                        int32_t var_a0_1 = rdx_8;
                        var_168 = &var_158;
                        var_110 = &var_168;
                        int64_t (* var_108_2)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9a842562ad49cb5b;
                        core::fmt::Arguments::new_v1::h72a5ca90758d0a10(&var_e8, &data_4740b8, 2, 
                            &var_110, 1);
                        std::io::stdio::_print::hbcfcc64486c1a1db(&var_e8);
                    }
                    else
                    {
                        var_e8 = &data_4740d8;
                        int64_t var_e0_3 = 1;
                        char const* const var_d8_4 = "/rustc/1b198b3a196442e14fb069781…";
                        int128_t var_d0_3 = {0};
                        std::io::stdio::_print::hbcfcc64486c1a1db(&var_e8);
                        std::net::udp::UdpSocket::send::h4e1ed1b396109b45(&var_e8, &fd_1, 
                            "Authenticated!\nError: -cshFaile…", 0xf);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hf978b148e834039c(&var_e8);
                        var_15c_1 = 1;
                    }
                }
                else
                {
                    label_40c1a5:
                    var_168 = var_f0;
                    var_110 = &var_168;
                    uint64_t (* var_108_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha06740198faf5823;
                    core::fmt::Arguments::new_v1::h72a5ca90758d0a10(&var_e8, &data_4740e8, 2, 
                        &var_110, 1);
                    std::io::stdio::_print::hbcfcc64486c1a1db(&var_e8);
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha602bf7ed800fc68(
                        &var_168);
                }
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82ac9a33f2cb35fc(&var_158);
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$$u5b$u8$u5d$$GT$$GT$::hc3fc27d3d4938943(var_140, var_138_3);
                
                if (var_15c_1 & 1)
                {
                    while (true)
                    {
                        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hc75773a6223aa268(&var_140, 0x2000, &fd_1);
                        var_158 = 1;
                        int128_t var_150_2 = {0};
                        std::io::append_to_string::h8a48f86863967257(&var_f8, &var_158, &var_140);
                        
                        if (var_f8)
                            goto label_40c1a5;
                        
                        if (!var_f0)
                            break;
                        
                        alloc::string::String::pop::hfca843d401cd7607(&var_158);
                        int64_t var_d8_2 = *var_150_2[8];
                        var_e8 = var_158;
                        harry::exec::hac2f1647ab723faf(&var_110, &var_e8);
                        uint64_t var_100;
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
            int64_t (* var_108_3)(int16_t* arg1) = _$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Display$GT$::fmt::h0801164e00af01bb;
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
            uint64_t (* var_138_2)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha06740198faf5823;
            core::fmt::Arguments::new_v1::h72a5ca90758d0a10(&var_e8, &data_4740e8, 2, &var_140, 1);
            std::io::stdio::_print::hbcfcc64486c1a1db(&var_e8);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha602bf7ed800fc68(&var_98);
            core::ptr::drop_in_place$LT$std..net..tcp..TcpStream$GT$::h9b88f3dc8a6d30d8(fd);
        }
    }
}
