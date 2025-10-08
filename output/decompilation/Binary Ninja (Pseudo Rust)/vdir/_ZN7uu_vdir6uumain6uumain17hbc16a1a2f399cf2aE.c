
  fn uu_vdir::uumain::uumain::hbc16a1a2f399cf2a(arg1: i64) -> u64

{
    let mut var_2f0: ();
    uu_vdir::uu_app::h0d4c9cb228e3f678(&var_2f0);
    let mut var_598: ();
    clap_builder::builder::command::Command::get_matches_from::h3e571fd5e1d61e8c(&var_598, 
        &var_2f0, arg1);
    let mut rbx_1: i8;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
        &var_598, "quoting-stylehide-control-charss…", 0xd) != 0
    {
        rbx_1 = 0;
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_598, "quote-namepfile-typedereferenced…", 0xa) != 0
    {
        rbx_1 = 0;
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_598, "escapeliteralquote-namepfile-typ…", 6) == 0
    {
        rbx_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_598, "literalquote-namepfile-typederef…", 7) ^ 1;
    }
    else
    {
        rbx_1 = 0;
    }
    
    let mut rbp: i8;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
        &var_598, "formatignore-backupsdirectoryino…", 6) != 0
    {
        rbp = 0;
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_598, "xtabsizemgonumeric-uid-gidallalm…", 1) != 0
    {
        rbp = 0;
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_598, "Cxtabsizemgonumeric-uid-gidallal…", 1) != 0
    {
        rbp = 0;
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_598, "mgonumeric-uid-gidallalmost-allS…", 1) != 0
    {
        rbp = 0;
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_598, "long', 'FFMTZero\x1b[7mauto", 4) != 0
    {
        rbp = 0;
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_598, "onumeric-uid-gidallalmost-allStU…", 1) != 0
    {
        rbp = 0;
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_598, "gonumeric-uid-gidallalmost-allSt…", 1) != 0
    {
        rbp = 0;
    }
    else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_598, "numeric-uid-gidallalmost-allStUv…", 0xf) == 0
    {
        rbp = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_598, "1Cxtabsizemgonumeric-uid-gidalla…", 1) ^ 1;
    }
    else
    {
        rbp = 0;
    }
    
    let mut var_548: i64;
    uu_ls::Config::from::h82af185516eb5913(&var_548, &var_598);
    let r12: i64 = var_548;
    let result_1: u64;
    let mut result: u64 = result_1;
    
    if -(r12) != -0x8000000000000000
    {
        let mut var_530: ();
        let mut var_3e0: ();
        memcpy(&var_3e0, &var_530, 0xf0);
        let mut var_3f8: i64 = r12;
        let result_2: u64 = result;
        let var_538: i64;
        let var_3e8_1: i64 = var_538;
        
        if rbx_1 != 0
        {
            let var_2fc_1: i16 = 2;
        }
        
        if rbp != 0
        {
            let var_2f8_1: i8 = 1;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc6163a00f3306563(
            &var_548, &var_598, "pathsindicator-styletime-stylefu…", 5);
        let mut var_438: i64;
        clap_builder::parser::error::MatchesError::unwrap::hc8d1ba82535bbb47(&var_438, 
            "pathsindicator-styletime-stylefu…", 5, &var_548);
        let mut var_560: i64;
        let mut var_558: i128;
        
        if var_438 == 0
        {
            uu_vdir::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h6c7a13566096c095(&var_560);
        }
        else
        {
            core::iter::traits::iterator::Iterator::collect::h63fcdbe0697bc3e4(&var_548, &var_438);
            var_558 = result_1;
            var_560 = var_548;
        }
        
        let var_538_1: i64 = *var_558[8];
        var_548 = var_560;
        let var_540: i64 = var_558;
        let mut result_3: u64;
        let mut rdx_1: i64;
        result_3 = uu_ls::list::hbc04f019ee17b84a(&var_548, &var_3f8);
        result = result_3;
        core::ptr::drop_in_place$LT$uu_ls..Config$GT$::hc82f863fb9445fd1(&var_3f8);
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h5d211315a79c9f44(&var_598);
    result
}
