
  int64_t flealib::email::EMail::send_email::hb78b620ddbb65463(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, uint64_t arg7, int64_t arg8, uint64_t arg9, int64_t arg10, uint64_t arg11, int64_t arg12, uint64_t arg13, int64_t arg14, uint64_t arg15)

{
    int64_t var_2d8 = 0;
    int64_t result = 8;
    int64_t var_2c8 = 0;
    int64_t var_2c0 = -0x8000000000000000;
    char var_288 = 1;
    int128_t var_198;
    _$LT$lettre..message..mailbox..types..Mailbox$u20$as$u20$core..str..traits..FromStr$GT$::from_str::hca5b830ea31f665e(&var_198, arg4);
    int128_t var_1f8;
    core::result::Result$LT$T$C$E$GT$::unwrap::h51c45ecd630aa21b(&var_1f8, &var_198, &data_b0a348);
    lettre::message::MessageBuilder::from::h80bd8256f55c1d52(&var_198, &var_2d8, &var_1f8);
    _$LT$lettre..message..mailbox..types..Mailbox$u20$as$u20$core..str..traits..FromStr$GT$::from_str::hca5b830ea31f665e(&var_2d8, arg2);
    core::result::Result$LT$T$C$E$GT$::unwrap::h51c45ecd630aa21b(&var_1f8, &var_2d8, &data_b0a360);
    lettre::message::MessageBuilder::to::h8e72621cfa4d89e5(&var_2d8, &var_198, &var_1f8);
    lettre::message::MessageBuilder::subject::h3c1da0aa5aeb6d42(&var_198, &var_2d8, arg6, arg7);
    int128_t var_2a8;
    __builtin_memcpy(&var_2a8, 
        "\x00\x04\x00\x00\x00\x00\x00\x00\x42\xc8\x46\x00\x00\x00\x00\x00\x19\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00", 0x28);
    int128_t var_2b8 = data_b0a398;
    var_2c8 = data_b0a388;
    var_2d8 = data_b0a378;
    lettre::message::MessageBuilder::header::h9bb9686bcbccd57c(&var_1f8, &var_198, &var_2d8);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_2d8, arg8, 
        arg9);
    int64_t var_188 = var_2c8;
    var_198 = var_2d8;
    lettre::message::MessageBuilder::body::h6d3c592676ecce8f(&var_2d8, &var_1f8, &var_198);
    void var_b8;
    core::result::Result$LT$T$C$E$GT$::unwrap::hdbe6d9e661609677(&var_b8, &var_2d8);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_2d8, 
        arg10, arg11);
    var_198 = var_2d8;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_2d8, 
        arg12, arg13);
    int64_t var_2e0 = var_2c8;
    int128_t var_2f0 = var_2d8;
    int128_t zmm0_3 = var_198;
    lettre::transport::smtp::transport::SmtpTransport::relay::ha4678dd0a2f4789d(&var_2d8, arg14, 
        arg15);
    core::result::Result$LT$T$C$E$GT$::unwrap::h374d5854169469bf(&var_198, &var_2d8);
    int128_t var_1d8 = var_2f0;
    int128_t var_1e8 = var_2c8;
    var_1f8 = zmm0_3;
    lettre::transport::smtp::transport::SmtpTransportBuilder::credentials::hedb09507299783df(
        &var_2d8, &var_198, &var_1f8);
    int64_t* var_310 =
        lettre::transport::smtp::transport::SmtpTransportBuilder::build::hb09a1eb5c0012b38(
        &var_2d8);
    lettre::transport::Transport::send::hc6382188ba3d8fb6(&var_2d8, &var_310, &var_b8);
    int64_t rax_5 = var_2d8;
    
    if (rax_5 == -0x8000000000000000)
    {
        core::ptr::drop_in_place$LT$lettre..transport..smtp..transport..SmtpTransport$GT$::h8ae73c8263b3f072(&var_310);
        core::ptr::drop_in_place$LT$lettre..message..Message$GT$::h5e12d633996c0cf7(&var_b8);
        return result;
    }
    
    int64_t var_188_1;
    var_188_1 = var_2c8;
    var_198 = rax_5;
    *var_198[8] = result;
    core::ptr::drop_in_place$LT$lettre..transport..smtp..response..Response$GT$::hb741338183c3818b(
        &var_198);
    core::ptr::drop_in_place$LT$lettre..transport..smtp..transport..SmtpTransport$GT$::h8ae73c8263b3f072(&var_310);
    core::ptr::drop_in_place$LT$lettre..message..Message$GT$::h5e12d633996c0cf7(&var_b8);
    return 0;
}
