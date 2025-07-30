
  fn backdoorautomater::sanitizer::sanitize_command_exist::h2a8286a439cabb9a(arg1: *mut c_void) -> u64

{
    let zmm0: i64 = *arg1.byte_offset(8);
    let mut var_d8: *mut c_void = "command -v sh-cFailed to execute…";
    let var_d0: i64 = 0xb;
    let mut var_160: ();
    alloc::str::join_generic_copy::hc78a65dc4338aaa9(&var_160, &var_d8, 2, 1, 0);
    std::process::Command::new::hc59b10cf3f1b2ada(&var_d8, "sh-cFailed to execute commandErr…");
    std::process::Command::arg::h1a6c514e95e1ad22(
        std::process::Command::arg::ha1bca970e684ecbe(&var_d8, 
            "-cFailed to execute commandError…"), 
        &var_160);
    let mut var_148: ();
    std::process::Command::output::hf2f7777b705db8a9(&var_148);
    let mut var_110: ();
    core::result::Result$LT$T$C$E$GT$::expect::h4dac3b1149b99667(&var_110, &var_148);
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h60da061aa1df0d14(&var_d8);
    let var_108: i64;
    let var_100: size_t;
    alloc::string::String::from_utf8_lossy::h7ed9087fa43d10ad(&var_148, var_108, var_100);
    let mut rax_1: i64;
    let mut rdx_4: u64;
    rax_1 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..ops..deref..Deref$GT$::deref::ha2c16a4b1cc76445(&var_148);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_d8, rax_1, 
        rdx_4);
    let mut var_178: i128 = var_d8;
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb5385058f177b775(&var_148);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_178);
    core::ptr::drop_in_place$LT$std..process..Output$GT$::h78d1e539beaf0e46(&var_110);
    let mut rbx: i64;
    rbx = zmm0 != 0;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_160);
    rbx
}
