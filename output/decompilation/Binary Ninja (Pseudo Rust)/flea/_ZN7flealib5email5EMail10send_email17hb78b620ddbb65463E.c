
  fn flealib::email::EMail::send_email::hb78b620ddbb65463(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: u64, arg8: i64, arg9: u64, arg10: i64, arg11: u64, arg12: i64, arg13: u64, arg14: i64, arg15: u64) -> i64

{
    let mut var_2d8: i64 = 0;
    let result: i64 = 8;
    let mut var_2c8: i64 = 0;
    let var_2c0: i64 = -0x8000000000000000;
    let var_288: i8 = 1;
    let mut var_198: i128;
    _$LT$lettre..message..mailbox..types..Mailbox$u20$as$u20$core..str..traits..FromStr$GT$::from_str::hca5b830ea31f665e(&var_198, arg4);
    let mut var_1f8: i128;
    core::result::Result$LT$T$C$E$GT$::unwrap::h51c45ecd630aa21b(&var_1f8, &var_198, &data_b0a348);
    lettre::message::MessageBuilder::from::h80bd8256f55c1d52(&var_198, &var_2d8, &var_1f8);
    _$LT$lettre..message..mailbox..types..Mailbox$u20$as$u20$core..str..traits..FromStr$GT$::from_str::hca5b830ea31f665e(&var_2d8, arg2);
    core::result::Result$LT$T$C$E$GT$::unwrap::h51c45ecd630aa21b(&var_1f8, &var_2d8, &data_b0a360);
    lettre::message::MessageBuilder::to::h8e72621cfa4d89e5(&var_2d8, &var_198, &var_1f8);
    lettre::message::MessageBuilder::subject::h3c1da0aa5aeb6d42(&var_198, &var_2d8, arg6, arg7);
    let mut var_2a8: i128;
    __builtin_memcpy(&var_2a8, 
        "\x00\x04\x00\x00\x00\x00\x00\x00\x42\xc8\x46\x00\x00\x00\x00\x00\x19\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00", 0x28);
    let var_2b8: i128 = data_b0a398;
    var_2c8 = data_b0a388;
    var_2d8 = data_b0a378;
    lettre::message::MessageBuilder::header::h9bb9686bcbccd57c(&var_1f8, &var_198, &var_2d8);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_2d8, arg8, 
        arg9);
    let var_188: i64 = var_2c8;
    var_198 = var_2d8;
    lettre::message::MessageBuilder::body::h6d3c592676ecce8f(&var_2d8, &var_1f8, &var_198);
    let mut var_b8: ();
    core::result::Result$LT$T$C$E$GT$::unwrap::hdbe6d9e661609677(&var_b8, &var_2d8);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_2d8, 
        arg10, arg11);
    var_198 = var_2d8;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_2d8, 
        arg12, arg13);
    let var_2e0: i64 = var_2c8;
    let var_2f0: i128 = var_2d8;
    let zmm0_3: i128 = var_198;
    lettre::transport::smtp::transport::SmtpTransport::relay::ha4678dd0a2f4789d(&var_2d8, arg14, 
        arg15);
    core::result::Result$LT$T$C$E$GT$::unwrap::h374d5854169469bf(&var_198, &var_2d8);
    let var_1d8: i128 = var_2f0;
    let var_1e8: i128 = var_2c8;
    var_1f8 = zmm0_3;
    lettre::transport::smtp::transport::SmtpTransportBuilder::credentials::hedb09507299783df(
        &var_2d8, &var_198, &var_1f8);
    let mut var_310: *mut i64 =
        lettre::transport::smtp::transport::SmtpTransportBuilder::build::hb09a1eb5c0012b38(
        &var_2d8);
    lettre::transport::Transport::send::hc6382188ba3d8fb6(&var_2d8, &var_310, &var_b8);
    let rax_5: i64 = var_2d8;
    
    if rax_5 == -0x8000000000000000
    {
        core::ptr::drop_in_place$LT$lettre..transport..smtp..transport..SmtpTransport$GT$::h8ae73c8263b3f072(&var_310);
        core::ptr::drop_in_place$LT$lettre..message..Message$GT$::h5e12d633996c0cf7(&var_b8);
        return result;
    }
    
    let mut var_188_1: i64;
    var_188_1 = var_2c8;
    var_198 = rax_5;
    *var_198[8] = result;
    core::ptr::drop_in_place$LT$lettre..transport..smtp..response..Response$GT$::hb741338183c3818b(
        &var_198);
    core::ptr::drop_in_place$LT$lettre..transport..smtp..transport..SmtpTransport$GT$::h8ae73c8263b3f072(&var_310);
    core::ptr::drop_in_place$LT$lettre..message..Message$GT$::h5e12d633996c0cf7(&var_b8);
    0
}
