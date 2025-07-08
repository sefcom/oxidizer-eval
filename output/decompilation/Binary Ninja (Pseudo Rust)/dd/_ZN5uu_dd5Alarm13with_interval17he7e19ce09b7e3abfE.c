
  fn uu_dd::Alarm::with_interval::he7e19ce09b7e3abf(arg1: *mut *mut i128) -> *mut *mut i128

{
    let mut var_60: i64 = 1;
    let var_58: i64 = 1;
    let mut var_50: i8 = 0;
    let mut var_68: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::hff327b290596ae78(&var_60);
    let var_38: *mut c_void = alloc::sync::Arc$LT$T$C$A$GT$::downgrade::h3187bea099a37cc6(&var_68);
    let var_30: i64 = 1;
    let var_28: i32 = 0;
    var_50 = -0x8000000000000000;
    var_60 = 0;
    let mut var_20: ();
    std::thread::Builder::spawn_unchecked::h548e90d968e6b112(&var_20, &var_60);
    core::result::Result$LT$T$C$E$GT$::expect::hae1648ffdc1cd49b(&var_60, &var_20);
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h34f9f794f4847285(
        &var_60);
    let rax_2: *mut i128 = var_68;
    arg1[1] = 1;
    arg1[2] = 0;
    *arg1 = rax_2;
    arg1
}
