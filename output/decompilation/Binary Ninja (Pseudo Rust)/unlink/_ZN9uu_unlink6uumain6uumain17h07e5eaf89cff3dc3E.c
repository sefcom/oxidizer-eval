
  fn uu_unlink::uumain::uumain::h07e5eaf89cff3dc3(arg1: i64) -> *mut i128

{
    let mut var_2e0: i64;
    uu_unlink::uu_app::hdbcae0fc1396218f(&var_2e0);
    let mut var_318: i64;
    clap_builder::builder::command::Command::try_get_matches_from::ha818702dab301bbf(&var_318, 
        &var_2e0, arg1);
    let rax: i64 = var_318;
    let var_310: i64;
    
    if rax == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_310);
    }
    
    let var_2e8: i64;
    let var_2b0: i64 = var_2e8;
    let var_2f8: i128;
    let var_2c0: i128 = var_2f8;
    let var_308: i128;
    let var_2d0: i128 = var_308;
    var_2e0 = rax;
    let var_2d8: i64 = var_310;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h58b3520effad2bf6(
        &var_318, &var_2e0, "FILE -> \x1b[2mAnsi -- \x1b[8mhe…", 4);
    let rax_2: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h40baddc8e029e47e(
        "FILE -> \x1b[2mAnsi -- \x1b[8mhe…", 4, &var_318);
    
    if rax_2 == 0
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    *rax_2.byte_offset(0x10);
    let result: *mut i128 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h611ae2e89287ed88(std::fs::remove_file::hbd709b316fa4f879(*rax_2.byte_offset(8)));
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h5aacfee888f9a35c(&var_2e0);
    result
}
