
  int64_t harry::exec::hac2f1647ab723faf(int128_t* arg1, int64_t* arg2)

{
    char** rax = alloc::alloc::exchange_malloc::h96f28a35c9335228();
    int64_t rcx = *arg2;
    int64_t rdx = arg2[2];
    *rax = "-cshFailed to run command '': ";
    rax[1] = 2;
    rax[2] = rcx;
    rax[3] = rdx;
    int128_t var_e0;
    alloc::slice::hack::into_vec::h83fe17ba49f2f4c7(&var_e0, rax, 2);
    int64_t var_d0;
    int64_t var_178 = var_d0;
    int128_t var_188 = var_e0;
    char const* const var_1f0 = "shFailed to run command '': ";
    int64_t var_1e8 = 2;
    char const* const* var_1e0 = &var_1f0;
    int64_t (* var_1d8)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h55d6a8b466f9fb98;
    core::fmt::Arguments::new_v1::h72a5ca90758d0a10(&var_e0, &data_474108, 2, &var_1e0, 1);
    std::io::stdio::_print::hbcfcc64486c1a1db(&var_e0);
    std::process::Command::new::h3573804b8150258f(&var_e0, var_1f0);
    std::process::Command::args::hc6e9244e072c6ef6(&var_e0, &var_188);
    std::process::Command::output::h0b316890cd6c897b(&var_1e0);
    int64_t* var_1a8;
    int64_t var_168;
    
    if (!var_1e0)
    {
        int64_t (* var_1f8)(int64_t* arg1, int64_t arg2) = var_1d8;
        var_1a8 = arg2;
        int64_t (* var_1a0_1)(int64_t* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h4a7c468ff387aa2c;
        int64_t (** var_198_1)(int64_t* arg1, int64_t arg2) = &var_1f8;
        uint64_t (* var_190_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha06740198faf5823;
        core::fmt::Arguments::new_v1::h72a5ca90758d0a10(&var_168, &data_474158, 2, &var_1a8, 2);
        int128_t var_f8;
        alloc::fmt::format::hc41d8db97b3bb714(&var_f8, &var_168);
        int64_t var_e8;
        arg1[1] = var_e8;
        *arg1 = var_f8;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha602bf7ed800fc68(&var_1f8);
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h471dcd8ff33a6397(&var_e0);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h0da5646a342a4732(&var_188);
    }
    else
    {
        int64_t var_1b0;
        int64_t var_108_1 = var_1b0;
        int128_t var_138 = var_1e0;
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h471dcd8ff33a6397(&var_e0);
        var_168 = 1;
        int128_t var_160_1 = {0};
        int128_t var_1d0;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h05daa31551103c74(
            &var_1e0, 0x2000, var_138, var_1d0);
        int128_t var_1c0;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h05daa31551103c74(&var_e0, 
            0x2000, *var_1d0[8], *var_1c0[8]);
        _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read_to_string::hd0bc8abda03c3068(&var_1a8, &var_1e0, &var_168);
        core::result::Result$LT$T$C$E$GT$::unwrap::h16826addb7ab2ba3(&var_1a8);
        _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read_to_string::hd0bc8abda03c3068(&var_1a8, &var_e0, &var_168);
        core::result::Result$LT$T$C$E$GT$::unwrap::h16826addb7ab2ba3(&var_1a8);
        arg1[1] = *var_160_1[8];
        *arg1 = var_168;
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$$u5b$u8$u5d$$GT$$GT$::hc3fc27d3d4938943(var_e0, *var_e0[8]);
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$$u5b$u8$u5d$$GT$$GT$::hc3fc27d3d4938943(var_1e0, var_1d8);
        core::ptr::drop_in_place$LT$std..process..Output$GT$::h9b9c5803ce695ef8(&var_138);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h0da5646a342a4732(&var_188);
    }
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82ac9a33f2cb35fc(arg2);
}
