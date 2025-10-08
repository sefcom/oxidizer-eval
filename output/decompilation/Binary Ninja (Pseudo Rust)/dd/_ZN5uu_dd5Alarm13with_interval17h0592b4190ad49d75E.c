
  fn uu_dd::Alarm::with_interval::h0592b4190ad49d75(arg1: *mut u64, arg2: i64, arg3: i32) -> *mut u64

{
    let mut var_80: i64 = 1;
    let var_78: i64 = 1;
    let mut var_70: i8 = 0;
    let rax: u64 = alloc::boxed::Box$LT$T$GT$::new::h887c2a53faad888d(&var_80);
    let var_88: u64 = rax;
    alloc::sync::Arc$LT$T$C$A$GT$::downgrade::h42b3cc1521e60bc8(rax);
    let mut var_50: u64 = rax;
    let var_48: i64 = arg2;
    let var_40: i32 = arg3;
    var_70 = -0x8000000000000000;
    var_80 = 0;
    let var_58: i8 = 0;
    let mut var_38: ();
    std::thread::Builder::spawn_unchecked::h9e1168d4c6f049a2(&var_38, &var_80, &var_50);
    core::result::Result$LT$T$C$E$GT$::expect::hde2740aff8c517d5(&var_80, &var_38);
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h04c84524a3cb659e(
        &var_80);
    arg1[1] = arg2;
    arg1[2] = arg3;
    *arg1 = rax;
    arg1
}
