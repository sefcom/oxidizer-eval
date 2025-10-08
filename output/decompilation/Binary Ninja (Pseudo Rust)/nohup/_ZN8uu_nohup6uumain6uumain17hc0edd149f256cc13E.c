
  fn uu_nohup::uumain::uumain::hc0edd149f256cc13(arg1: i64) -> u64

{
    let mut var_2e8: i128;
    uu_nohup::uu_app::hfbdd0a2e12237cc1(&var_2e8);
    let mut var_360: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h13de5036085f0ef3(&var_360, 
        &var_2e8, arg1);
    let rax: i64 = var_360;
    let var_358: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return alloc::boxed::Box$LT$T$GT$::new::hacdbe8827c4de382(var_358);
    }
    
    let var_34c: i128;
    let var_30c_1: i128 = var_34c;
    let var_33c: i128;
    let var_2fc_1: i128 = var_33c;
    let var_32c: i32;
    let var_2ec_1: i32 = var_32c;
    let mut var_320: i64 = rax;
    let var_318_1: i64 = var_358;
    let var_350: i32;
    let var_310_1: i32 = var_350;
    let mut result: u64;
    let mut rdx_3: i64;
    result = uu_nohup::replace_fds::h2e47797ec36e0a94();
    
    if result != 0
    {
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2ae17a9f6073f8ef(&var_320);
        return result;
    }
    
    signal(1, 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h64fb2621c0592c05(
        &var_2e8, &var_320);
    clap_builder::parser::error::MatchesError::unwrap::h03d1525767c0830f(&var_360, &var_2e8);
    
    if var_360 == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let var_2b8_1: i128 = var_33c;
    let var_2c8_1: i128 = var_34c;
    var_2e8 = var_360;
    core::iter::traits::iterator::Iterator::collect::ha7b23250fe83d133(&var_360, &var_2e8);
    core::iter::traits::iterator::Iterator::collect::h986ce61074ee98cd(&var_2e8, var_358);
    alloc::vec::Vec$LT$T$C$A$GT$::push::he0f547bf2c815009(&var_2e8);
    
    if var_350 == 0
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
        /* no return */
    }
    
    let argv: *mut i64 = *var_2e8[8];
    let mut rdi_10: i32;
    rdi_10 = execvp(*argv, argv) == 2;
    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(rdi_10 | 0x7e);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h4cbb849d5961f95b(var_2e8, 
        *var_2e8[8]);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..ffi..c_str..CString$GT$$GT$::h1140044b68f73ffc(&var_360);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2ae17a9f6073f8ef(&var_320);
    0
}
