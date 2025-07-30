
  fn harry::exec::hac2f1647ab723faf(arg1: *mut i128, arg2: *mut i64) -> i64

{
    let rax: *mut *mut i8 = alloc::alloc::exchange_malloc::h96f28a35c9335228();
    let rcx: i64 = *arg2;
    let rdx: i64 = arg2[2];
    *rax = "-cshFailed to run command '': ";
    rax[1] = 2;
    rax[2] = rcx;
    rax[3] = rdx;
    let mut var_e0: i128;
    alloc::slice::hack::into_vec::h83fe17ba49f2f4c7(&var_e0, rax, 2);
    let var_d0: i64;
    let var_178: i64 = var_d0;
    let mut var_188: i128 = var_e0;
    let mut var_1f0: *const i8 = "shFailed to run command '': ";
    let var_1e8: i64 = 2;
    let mut var_1e0: *const *const i8 = &var_1f0;
    let var_1d8: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h55d6a8b466f9fb98;
    core::fmt::Arguments::new_v1::h72a5ca90758d0a10(&var_e0, &data_474108, 2, &var_1e0, 1);
    std::io::stdio::_print::hbcfcc64486c1a1db(&var_e0);
    std::process::Command::new::h3573804b8150258f(&var_e0, var_1f0);
    std::process::Command::args::hc6e9244e072c6ef6(&var_e0, &var_188);
    std::process::Command::output::h0b316890cd6c897b(&var_1e0);
    let mut var_1a8: *mut i64;
    let mut var_168: i64;
    
    if var_1e0 == 0
    {
        let mut var_1f8: fn(arg1: *mut i64, arg2: i64) -> i64 = var_1d8;
        var_1a8 = arg2;
        let var_1a0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h4a7c468ff387aa2c;
        let var_198_1: *mut fn(arg1: *mut i64, arg2: i64) -> i64 = &var_1f8;
        let var_190_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha06740198faf5823;
        core::fmt::Arguments::new_v1::h72a5ca90758d0a10(&var_168, &data_474158, 2, &var_1a8, 2);
        let mut var_f8: i128;
        alloc::fmt::format::hc41d8db97b3bb714(&var_f8, &var_168);
        let var_e8: i64;
        arg1[1] = var_e8;
        *arg1 = var_f8;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha602bf7ed800fc68(&var_1f8);
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h471dcd8ff33a6397(&var_e0);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h0da5646a342a4732(&var_188);
    }
    else
    {
        let var_1b0: i64;
        let var_108_1: i64 = var_1b0;
        let mut var_138: i128 = var_1e0;
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h471dcd8ff33a6397(&var_e0);
        var_168 = 1;
        let var_160_1: i128 = {0};
        let var_1d0: i128;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h05daa31551103c74(
            &var_1e0, 0x2000, var_138, var_1d0);
        let var_1c0: i128;
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
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82ac9a33f2cb35fc(arg2)
}
