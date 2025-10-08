
  fn uu_uname::uumain::uumain::h7aceabc7020779d6(arg1: i64) -> u64

{
    let mut var_2f8: *mut c_void;
    uu_uname::uu_app::h498fd26d6b647696(&var_2f8);
    let mut var_3b8: *mut c_void;
    clap_builder::builder::command::Command::try_get_matches_from::h4c779ee413b803e4(&var_3b8, 
        &var_2f8, arg1);
    let rax: *mut c_void = var_3b8;
    let var_3b0: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3b0);
    }
    
    let var_388: i64;
    let var_3f8_1: i64 = var_388;
    let var_398: i128;
    let var_408_1: i128 = var_398;
    let mut var_3a8: i128;
    let var_418_1: i128 = var_3a8;
    let mut var_428: *mut c_void = rax;
    let var_420_1: i64 = var_3b0;
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_428, "allkernel-namekernel-versionkern…", 3);
    let rax_3: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_428, "kernel-namekernel-versionkernel-…", 0xb);
    let rax_4: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_428, "nodenamePriorArg' existsDeadlock…", 8);
    let rax_5: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_428, "kernel-releasemachineprocessorha…", 0xe);
    let rax_6: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_428, "kernel-versionkernel-releasemach…", 0xe);
    let rax_7: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_428, "machineprocessorhardware-platfor…", 7);
    let rax_8: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_428, "processorhardware-platformunknow…", 9);
    let rax_9: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_428, "hardware-platformunknowncannot g…", 0x11);
    let rax_10: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_428, "operating-system[short aliases: …", 0x10);
    let temp0_2: i64 = _mm_insert_epi16(
        _mm_insert_epi16(rax_6 << 0x18 | rax_4 << 0x10 | rax_3 << 8 | rax_2, rax_7 << 8 | rax_5, 
            2), 
        rax_9 << 8 | rax_8, 3);
    let mut var_438: i64 = temp0_2[0];
    let var_430_1: i8 = rax_10;
    uu_uname::UNameOutput::new::h8729604a17648380(&var_2f8, &var_438);
    let r15_2: *mut c_void = var_2f8;
    let result: u64;
    
    if r15_2 == -0x7fffffffffffffff
    {
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h4d1b1d6ae62b9a64(&var_428);
        return result;
    }
    
    let mut var_2e0: i64;
    memcpy(&*var_3a8[8], &var_2e0, 0xa8);
    var_3b8 = r15_2;
    let result_1: u64 = result;
    let var_2e8: *mut *mut c_void;
    var_3a8 = var_2e8;
    let mut var_3f0: i64;
    uu_uname::UNameOutput::display::hd46e899639185bb3(&var_3f0, &var_3b8);
    let var_3e8: *mut *mut c_void;
    let var_3e0: i64;
    let mut rax_11: i64;
    let mut rdx_7: i64;
    rax_11 =
        core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h6f828d1310d332a9(var_3e8, var_3e0);
    let mut var_3c8: i64 = rax_11;
    let var_3c0_1: i64 = rdx_7;
    let mut var_3d8: *mut i64 = &var_3c8;
    let var_3d0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h228d75d66c3b9798;
    var_2f8 = &data_4d9788;
    let var_2f0: i64 = 2;
    let var_2d8_1: i64 = 0;
    let var_2e8_1: *mut *mut i64 = &var_3d8;
    var_2e0 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_2f8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hef8ab74d1209e6f3(var_3f0, var_3e8);
    core::ptr::drop_in_place$LT$uu_uname..UNameOutput$GT$::h0289b97ecf8237fe(&var_3b8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h4d1b1d6ae62b9a64(&var_428);
    0
}
