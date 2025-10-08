
  uint64_t* uu_dd::Alarm::with_interval::h0592b4190ad49d75(uint64_t* arg1, int64_t arg2, int32_t arg3)

{
    int64_t var_80 = 1;
    int64_t var_78 = 1;
    char var_70 = 0;
    uint64_t rax = alloc::boxed::Box$LT$T$GT$::new::h887c2a53faad888d(&var_80);
    uint64_t var_88 = rax;
    alloc::sync::Arc$LT$T$C$A$GT$::downgrade::h42b3cc1521e60bc8(rax);
    uint64_t var_50 = rax;
    int64_t var_48 = arg2;
    int32_t var_40 = arg3;
    var_70 = -0x8000000000000000;
    var_80 = 0;
    char var_58 = 0;
    void var_38;
    std::thread::Builder::spawn_unchecked::h9e1168d4c6f049a2(&var_38, &var_80, &var_50);
    core::result::Result$LT$T$C$E$GT$::expect::hde2740aff8c517d5(&var_80, &var_38);
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h04c84524a3cb659e(
        &var_80);
    arg1[1] = arg2;
    arg1[2] = arg3;
    *arg1 = rax;
    return arg1;
}
