
  uint64_t uu_uname::uumain::uumain::h7aceabc7020779d6(int64_t arg1)

{
    void* const var_2f8;
    uu_uname::uu_app::h498fd26d6b647696(&var_2f8);
    void* const var_3b8;
    clap_builder::builder::command::Command::try_get_matches_from::h4c779ee413b803e4(&var_3b8, 
        &var_2f8, arg1);
    void* const rax = var_3b8;
    int64_t var_3b0;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3b0);
    
    int64_t var_388;
    int64_t var_3f8_1 = var_388;
    int128_t var_398;
    int128_t var_408_1 = var_398;
    int128_t var_3a8;
    int128_t var_418_1 = var_3a8;
    void* const var_428 = rax;
    int64_t var_420_1 = var_3b0;
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_428, "allkernel-namekernel-versionkern…", 3);
    char rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_428, "kernel-namekernel-versionkernel-…", 0xb);
    char rax_4 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_428, "nodenamePriorArg' existsDeadlock…", 8);
    char rax_5 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_428, "kernel-releasemachineprocessorha…", 0xe);
    char rax_6 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_428, "kernel-versionkernel-releasemach…", 0xe);
    char rax_7 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_428, "machineprocessorhardware-platfor…", 7);
    char rax_8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_428, "processorhardware-platformunknow…", 9);
    char rax_9 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_428, "hardware-platformunknowncannot g…", 0x11);
    char rax_10 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_428, "operating-system[short aliases: …", 0x10);
    int64_t temp0_2 = _mm_insert_epi16(
        _mm_insert_epi16(rax_6 << 0x18 | rax_4 << 0x10 | rax_3 << 8 | rax_2, rax_7 << 8 | rax_5, 
            2), 
        rax_9 << 8 | rax_8, 3);
    int64_t var_438 = temp0_2[0];
    char var_430_1 = rax_10;
    uu_uname::UNameOutput::new::h8729604a17648380(&var_2f8, &var_438);
    void* const r15_2 = var_2f8;
    uint64_t result;
    
    if (r15_2 == -0x7fffffffffffffff)
    {
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h4d1b1d6ae62b9a64(&var_428);
        return result;
    }
    
    int64_t var_2e0;
    memcpy(&*var_3a8[8], &var_2e0, 0xa8);
    var_3b8 = r15_2;
    uint64_t result_1 = result;
    void** var_2e8;
    var_3a8 = var_2e8;
    int64_t var_3f0;
    uu_uname::UNameOutput::display::hd46e899639185bb3(&var_3f0, &var_3b8);
    void** var_3e8;
    int64_t var_3e0;
    int64_t rax_11;
    int64_t rdx_7;
    rax_11 =
        core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h6f828d1310d332a9(var_3e8, var_3e0);
    int64_t var_3c8 = rax_11;
    int64_t var_3c0_1 = rdx_7;
    int64_t* var_3d8 = &var_3c8;
    int64_t (* var_3d0_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h228d75d66c3b9798;
    var_2f8 = &data_4d9788;
    int64_t var_2f0 = 2;
    int64_t var_2d8_1 = 0;
    int64_t** var_2e8_1 = &var_3d8;
    var_2e0 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_2f8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hef8ab74d1209e6f3(var_3f0, var_3e8);
    core::ptr::drop_in_place$LT$uu_uname..UNameOutput$GT$::h0289b97ecf8237fe(&var_3b8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h4d1b1d6ae62b9a64(&var_428);
    return 0;
}
