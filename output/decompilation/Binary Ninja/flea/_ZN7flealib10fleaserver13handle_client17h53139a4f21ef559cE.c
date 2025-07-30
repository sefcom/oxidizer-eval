
  int64_t flealib::fleaserver::handle_client::h53139a4f21ef559c(int32_t arg1, void** arg2, int64_t* arg3)

{
    int64_t r14;
    int64_t var_18 = r14;
    int32_t fd = arg1;
    void var_430;
    memset(&var_430, 0, 0x400);
    char* rax_1 = *arg3 + 0x10;
    
    while (true)
    {
        int64_t rax_2;
        int64_t rdx;
        rax_2 = std::os::unix::net::datagram::UnixDatagram::recv::hbe5d90d0f7fa3845(&fd, &var_430, 
            0x400);
        char var_478_1 = rax_2;
        int64_t var_470 = rdx;
        r14 = rax_2;
        int128_t var_528;
        int64_t var_510;
        int64_t var_4f8;
        char const* const var_4e8;
        int128_t var_4b8;
        char var_498;
        int128_t var_490;
        int128_t var_468;
        
        if (!rax_2)
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(
                &var_528, 1, 0);
            int128_t* var_518;
            int128_t* var_4a8_1 = var_518;
            var_4b8 = var_528;
            
            if (rdx - 0x3ff > -0x3ff)
            {
                *(&var_430 + rdx) = 0;
                core::str::converts::from_utf8::hfa72d6a448de4559(&var_498, &var_430, 0x400);
                
                if (!(var_498 & 1))
                {
                    var_4f8 = var_490;
                    int64_t var_508;
                    int64_t var_4e0;
                    int64_t var_4d0;
                    int64_t var_4c8;
                    
                    if (core::sync::atomic::atomic_load::h8980141092664382() >= 4)
                    {
                        var_468 = &var_4f8;
                        *var_468[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e99a2697242919d;
                        var_528 = &data_b0b2a0;
                        *var_528[8] = 1;
                        var_508 = 0;
                        var_518 = &var_468;
                        var_510 = 1;
                        int64_t rax_10 = log::__private_api::loc::he6f33e710a34adaf(&data_b0b2d0);
                        var_4e8 = "flealib::fleaserverReceived comm…";
                        var_4e0 = 0x13;
                        char const* const var_4d8_1 = "flealib::fleaserverReceived comm…";
                        var_4d0 = 0x13;
                        var_4c8 = rax_10;
                        log::__private_api::log::hd2d1d5843cf283e9(&var_528, 4, &var_4e8);
                    }
                    
                    uint64_t var_4f0;
                    flealib::fleaserver::remove_newline_characters::h03a01e77daac1003(&var_528, 
                        var_4f8, var_4f0);
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(
                        &var_468, *var_528[8], var_518);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(
                        &var_528);
                    var_4e8 = var_468;
                    alloc::string::String::from_utf8::hd36b3fc0ff50dc14(&var_528, &var_4e8);
                    core::result::Result$LT$T$C$E$GT$::unwrap::hdccd02afad51252c(&var_4e8, 
                        &var_528);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(
                        &var_4b8);
                    int64_t var_458;
                    int64_t var_4a8_2 = var_458;
                    var_4b8 = var_4e8;
                    void var_529;
                    flealib::commandparser::CommandParser::get_command::hb7c6cafd7485ac31(&var_4e8, 
                        &var_529, *var_4b8[8], var_458);
                    
                    if (0 + -(var_4e8))
                    {
                        var_4f8 = var_4e0;
                        core::result::Result$LT$T$C$E$GT$::unwrap::h9dcf40e224f0c1bc(
                            std::os::unix::net::stream::UnixStream::shutdown::h18b658800364aeec(
                            &fd, 2));
                        
                        if (core::sync::atomic::atomic_load::h8980141092664382())
                        {
                            var_498 = &var_4f8;
                            var_490 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e99a2697242919d;
                            var_528 = &data_44fb30;
                            *var_528[8] = 1;
                            int64_t var_508_2 = 0;
                            char* var_518_2 = &var_498;
                            var_510 = 1;
                            int64_t rax_23 =
                                log::__private_api::loc::he6f33e710a34adaf(&data_b0b330);
                            var_468 = "flealib::fleaserverReceived comm…";
                            *var_468[8] = 0x13;
                            char const* const var_458_1 = "flealib::fleaserverReceived comm…";
                            int64_t var_450_1 = 0x13;
                            int64_t var_448_1 = rax_23;
                            log::__private_api::log::hd2d1d5843cf283e9(&var_528, 1, &var_468);
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(
                            &var_4b8);
                        break;
                    }
                    
                    var_518 = var_458;
                    var_508 = var_4c8;
                    var_528 = var_4e8;
                    r14 = !var_518;
                    
                    if (!var_518)
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(
                            &var_528);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(
                            &var_510);
                    }
                    else
                    {
                        *var_490[8] = var_458;
                        var_498 = var_4e8;
                        int64_t var_4c0;
                        var_458 = var_4c0;
                        var_468 = var_4d0;
                        char rax_14 = flealib::fleaserver::replay::h1abd155ed0ce5999(&fd, &var_498, 
                            &var_468, arg2);
                        core::result::Result$LT$T$C$E$GT$::unwrap::h9dcf40e224f0c1bc(
                            std::os::unix::net::stream::UnixStream::shutdown::h18b658800364aeec(
                            &fd, 2));
                        
                        if (rax_14 & 1)
                            core::sync::atomic::atomic_store::hc406b6e66ce305a2(rax_1);
                    }
                }
                else
                {
                    core::result::Result$LT$T$C$E$GT$::unwrap::h9dcf40e224f0c1bc(
                        std::os::unix::net::stream::UnixStream::shutdown::h18b658800364aeec(&fd, 
                        2));
                    r14 = 0;
                }
            }
            else
            {
                core::result::Result$LT$T$C$E$GT$::unwrap::h9dcf40e224f0c1bc(
                    std::os::unix::net::stream::UnixStream::shutdown::h18b658800364aeec(&fd, 2));
                r14 = 0;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_4b8);
            
            if (!r14)
                break;
        }
        else
        {
            if (std::io::error::Error::kind::h7f0d5435ec1cf07f(rdx) != 0xd)
            {
                var_4f8 = var_470;
                
                if (core::sync::atomic::atomic_load::h8980141092664382())
                {
                    std::net::tcp::TcpStream::peer_addr::h9ccf6949693ba95c(&var_528, &fd);
                    core::result::Result$LT$T$C$E$GT$::unwrap::h87ce7ab9bcf554f6(&var_468, 
                        &var_528);
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&var_4b8, &var_4f8, &data_b0b378);
                    var_498 = &var_468;
                    var_490 = _$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Display$GT$::fmt::hb8f0b665671134da;
                    *var_490[8] = &var_4b8;
                    int64_t (* var_480_1)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                    var_528 = &data_b0b2b0;
                    *var_528[8] = 2;
                    int64_t var_508_1 = 0;
                    char* var_518_1 = &var_498;
                    var_510 = 2;
                    int64_t rax_18 = log::__private_api::loc::he6f33e710a34adaf(&data_b0b390);
                    var_4e8 = "flealib::fleaserverReceived comm…";
                    int64_t var_4e0_1 = 0x13;
                    char const* const var_4d8_3 = "flealib::fleaserverReceived comm…";
                    int64_t var_4d0_1 = 0x13;
                    int64_t var_4c8_1 = rax_18;
                    log::__private_api::log::hd2d1d5843cf283e9(&var_528, 1, &var_4e8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(
                        &var_4b8);
                }
                
                core::result::Result$LT$T$C$E$GT$::unwrap::h9dcf40e224f0c1bc(
                    std::os::unix::net::stream::UnixStream::shutdown::h18b658800364aeec(&fd, 2));
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(&var_4f8);
                break;
            }
            
            std::thread::sleep::h1a6eeffe1c923e1f(0, 0x5f5e100);
            
            if (var_478_1 & 1)
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(&var_470);
        }
    }
    
    return core::ptr::drop_in_place$LT$std..net..tcp..TcpStream$GT$::ha1973ae5d6a4418d(fd);
}
