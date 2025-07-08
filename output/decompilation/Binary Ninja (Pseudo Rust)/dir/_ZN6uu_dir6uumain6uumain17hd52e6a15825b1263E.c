
  fn uu_dir::uumain::uumain::hd52e6a15825b1263(arg1: i64) -> *mut i128

{
    let mut var_2f0: ();
    uu_dir::uu_app::he3101ebc7bd9a2bd(&var_2f0);
    let mut var_5a0: ();
    clap_builder::builder::command::Command::get_matches_from::h6782c68bc326c5e5(&var_5a0, 
        &var_2f0, arg1);
    let mut rbx_1: i8;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
        &var_5a0, "quoting-stylehide-control-charss…", 0xd) != 0
    {
        rbx_1 = 0;
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_5a0, "quote-name", 0xa) != 0
    {
        rbx_1 = 0;
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_5a0, "escapeliteralquote-name", 6) == 0
    {
        rbx_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_5a0, "literalquote-name", 7) ^ 1;
    }
    else
    {
        rbx_1 = 0;
    }
    
    let mut rbp: i8;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
        &var_5a0, "formatignore-backupsdirectoryino…", 6) != 0
    {
        rbp = 0;
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_5a0, "xtabsizemgonumeric-uid-giducFata…", 1) != 0
    {
        rbp = 0;
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_5a0, "Cxtabsizemgonumeric-uid-giducFat…", 1) != 0
    {
        rbp = 0;
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_5a0, "mgonumeric-uid-giducFatal intern…", 1) != 0
    {
        rbp = 0;
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_5a0, "long\x1b[7m", 4) != 0
    {
        rbp = 0;
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_5a0, "onumeric-uid-giducFatal internal…", 1) != 0
    {
        rbp = 0;
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_5a0, "gonumeric-uid-giducFatal interna…", 1) != 0
    {
        rbp = 0;
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_5a0, "numeric-uid-giducFatal internal …", 0xf) == 0
    {
        rbp = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_5a0, "1Cxtabsizemgonumeric-uid-giducFa…", 1) ^ 1;
    }
    else
    {
        rbp = 0;
    }
    
    let mut var_4f8: i64;
    uu_ls::Config::from::h304081f9da8d7174(&var_4f8, &var_5a0);
    let r12: i64 = var_4f8;
    let result_1: *mut i128;
    let mut result: *mut i128 = result_1;
    
    if r12 != -0x8000000000000000
    {
        let mut var_4e0: ();
        let mut var_3d8: ();
        memcpy(&var_3d8, &var_4e0, 0xe8);
        let mut var_3f0: i64 = r12;
        let result_2: *mut i128 = result;
        let mut var_4e8: i64;
        let var_3e0_1: i64 = var_4e8;
        
        if rbx_1 != 0
        {
            let var_2fb_1: i8 = 0;
            let var_2f9_1: i8 = 2;
        }
        
        if rbp != 0
        {
            let var_2f8_1: i8 = 0;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::ha6c1a7eac38a6eab(
            &var_4f8, &var_5a0, "pathsindicator-styletime-stylefu…", 5);
        let mut var_538: i64;
        clap_builder::parser::error::MatchesError::unwrap::h1ab6576cc5f5749a(&var_538, 
            "pathsindicator-styletime-stylefu…", 5, &var_4f8);
        let mut var_568: i64;
        let mut var_560: i128;
        
        if var_538 == 0
        {
            uu_dir::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h8478ec9724f4b289(&var_568);
        }
        else
        {
            let var_508: i128;
            let var_4c8_1: i128 = var_508;
            let var_518: i128;
            let var_4d8_1: i128 = var_518;
            let var_528: i128;
            var_4e8 = var_528;
            var_4f8 = var_538;
            let mut var_550: i64;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h80e25043356daf1c(&var_550, &var_4f8);
            let var_548: i128;
            var_560 = var_548;
            var_568 = var_550;
        }
        
        let var_4e8_1: i64 = *var_560[8];
        var_4f8 = var_568;
        let var_4f0: i64 = var_560;
        let mut result_3: *mut i128;
        let mut rdx_1: i64;
        result_3 = uu_ls::list::h6ddc1ea5566af8cc(&var_4f8, &var_3f0);
        result = result_3;
        core::ptr::drop_in_place$LT$uu_ls..Config$GT$::h037aaa778408e670(&var_3f0);
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h88cc932e0be994ae(&var_5a0);
    result
}
