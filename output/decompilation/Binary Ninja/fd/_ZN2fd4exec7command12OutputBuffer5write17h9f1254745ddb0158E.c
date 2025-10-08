
  int64_t fd::exec::command::OutputBuffer::write::h9f1254745ddb0158(int64_t* arg1)

{
    int64_t r15 = arg1[2];
    
    if (!r15)
        /* tailcall */
        return core::ptr::drop_in_place$LT$fd..exec..command..OutputBuffer$GT$::h4d7411562d7912bd(
            arg1);
    
    void** var_48;
    std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h49a2f44c13a21c87(&var_48, arg1[3]);
    int32_t* rax;
    char rdx;
    rax = core::result::Result$LT$T$C$E$GT$::unwrap::hed9c0f4613795626(&var_48);
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_58 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    void* var_50 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
    int64_t* var_78 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_58);
    int64_t* var_70 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_50);
    int64_t r14 = arg1[1];
    int64_t i = 0;
    
    do
    {
        var_48 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_78, *(r14 + i + 8), *(r14 + i + 0x10));
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf603403cb1b5404d(&var_48);
        var_48 = _$LT$std..io..stdio..StderrLock$u20$as$u20$std..io..Write$GT$::write_all::h529f10f41251b95a(&var_70, *(r14 + i + 0x20), *(r14 + i + 0x28));
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf603403cb1b5404d(&var_48);
        i += 0x30;
    } while (r15 * 0x30 != i);
    
    core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::h3603111795f94fd0(var_70);
    core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::h3603111795f94fd0(var_78);
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$crossbeam_channel..flavors..zero..Inner$GT$$GT$::h6207fb4f25d3957f(rax, rdx & 1);
    return core::ptr::drop_in_place$LT$fd..exec..command..OutputBuffer$GT$::h4d7411562d7912bd(arg1);
}
