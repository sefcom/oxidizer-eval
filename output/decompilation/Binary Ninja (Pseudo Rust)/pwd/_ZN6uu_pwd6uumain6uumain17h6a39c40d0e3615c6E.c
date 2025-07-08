
  fn uu_pwd::uumain::uumain::h6a39c40d0e3615c6(arg1: i64) -> *mut i64

{
    let mut var_2e8: i64;
    uu_pwd::uu_app::h4454d6573b8ab8c1(&var_2e8);
    let mut var_338: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h33e7466411a157e4(&var_338, 
        &var_2e8, arg1);
    let rax: i64 = var_338;
    let result_1: *mut i64;
    
    if rax == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(result_1);
    }
    
    let var_308: i64;
    let var_340_1: i64 = var_308;
    let var_318: i128;
    let var_350_1: i128 = var_318;
    let var_328: i128;
    let var_360_1: i128 = var_328;
    let mut var_370: i64 = rax;
    let result_4: *mut i64 = result_1;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_370, &data_412988[8], 8) != 0
    {
        uu_pwd::physical_path::h5c5da6b14d972300(&var_2e8);
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_370, "logicalPOSIXLY_CORRECT", 7) != 0
    {
        uu_pwd::logical_path::h67df90d7519c7ea2(&var_2e8);
    }
    else
    {
        std::env::var::h23d362e75506305f(&var_2e8);
        
        if var_2e8 == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::hb3bbf00eaa3bcc22(&var_2e8);
            uu_pwd::logical_path::h67df90d7519c7ea2(&var_2e8);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::hb3bbf00eaa3bcc22(&var_2e8);
            uu_pwd::physical_path::h5c5da6b14d972300(&var_2e8);
        }
    }
    
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hff586d9334aa0b44(&var_338, &var_2e8);
    let rax_4: i64 = var_338;
    let mut result: *mut i64 = result_1;
    
    if rax_4 != -0x8000000000000000
    {
        let mut var_300: i64 = rax_4;
        let result_2: *mut i64 = result;
        let var_2f0_1: *mut *mut c_void = var_328;
        let result_3: *mut i64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h022d8ad013205a62(uucore::mods::display::println_verbatim::he333530693d8dcfe(
            &var_300));
        
        if result_3 == 0
        {
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hff8689e77a915942(&var_370);
            return nullptr;
        }
        
        result = result_3;
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hff8689e77a915942(&var_370);
    result
}
