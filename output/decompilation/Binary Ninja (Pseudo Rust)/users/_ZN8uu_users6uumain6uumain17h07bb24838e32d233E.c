
  fn uu_users::uumain::uumain::h07bb24838e32d233(arg1: i64) -> u64

{
    let mut var_2e8: i64;
    uu_users::uu_app::h7da0e4a9ca0670f1(&var_2e8);
    let mut var_618: i128;
    uu_users::get_long_usage::hee942914ad333b9f(&var_618);
    let mut var_5b0: i128;
    clap_builder::builder::command::Command::after_help::hc3c20dd38abcda9b(&var_5b0, &var_2e8, 
        &var_618);
    let mut var_5f8: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h17a13a32e7a961dc(&var_5f8, 
        &var_5b0, arg1);
    let rax: i64 = var_5f8;
    let var_5f0: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_5f0);
    }
    
    let var_5c8: i64;
    let var_2b8_1: i64 = var_5c8;
    let var_5d8: i128;
    let var_2c8_1: i128 = var_5d8;
    let mut var_5e8: i128;
    let var_2d8_1: i128 = var_5e8;
    var_2e8 = rax;
    let var_2e0_1: i64 = var_5f0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1c4b52964e8492be(
        &var_5b0, &var_2e8, "filei128 as dyn ERANGEEDEADLKENA…", 4);
    let rax_2: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::he47af87570a89762(
        "filei128 as dyn ERANGEEDEADLKENA…", 4, &var_5b0);
    let mut rdi_6: *const i8;
    
    if rax_2 == 0
    {
        rdi_6 = "/var/run/utmp/home/34r7hm4n/.rus…";
    }
    else
    {
        rdi_6 = *rax_2.byte_offset(8);
        *rax_2.byte_offset(0x10);
    }
    
    let mut rax_3: i64;
    let mut rdx_3: i8;
    rax_3 = uucore::features::utmpx::Utmpx::iter_all_records_from::hf3137ad6b0598685(rdi_6);
    core::iter::traits::iterator::Iterator::collect::h8ab246990a06ff93(&var_5b0, rax_3, rdx_3 & 1);
    let var_5a0: i64;
    let var_608_1: i64 = var_5a0;
    var_618 = var_5b0;
    
    if var_5a0 != 0
    {
        let r15_1: *mut i128 = *var_618[8];
        alloc::slice::stable_sort::hbde198f5ab0ed970(r15_1, var_5a0);
        alloc::str::join_generic_copy::h5a982ba1478ea753(&var_5b0, r15_1, var_5a0);
        var_5e8 = var_5a0;
        var_5f8 = var_5b0;
        let mut var_5c0: *mut i64 = &var_5f8;
        let var_5b8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_5b0 = &data_4dbb40;
        *var_5b0[8] = 2;
        let var_590_1: i64 = 0;
        let var_5a0_1: *mut *mut i64 = &var_5c0;
        let var_598_1: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_5b0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf4418ebee0ba8ac9(var_5f8, var_5f0);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h866ec0f130c99f19(
        &var_618);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hbfcb6a5b4969a18c(&var_2e8);
    0
}
