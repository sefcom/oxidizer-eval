
  fn uu_who::platform::unix::uumain::h0ce5c590433f3d26(arg1: i64) -> i64

{
    let mut var_2f8: i64;
    uu_who::uu_app::h66b593fcffc444f9(&var_2f8);
    let mut var_618: ();
    uu_who::platform::unix::get_long_usage::had9fcc63344d3619(&var_618);
    let mut var_5c0: i64;
    clap_builder::builder::command::Command::after_help::h10203b70564a15be(&var_5c0, &var_2f8, 
        &var_618);
    let mut var_650: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h778888cd595d27d0(&var_650, 
        &var_5c0, arg1);
    let rax: i64 = var_650;
    let mut var_648: i64;
    
    if -(rax) == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_648);
    }
    
    let var_620: i64;
    let var_590: i64 = var_620;
    let var_630: i128;
    let var_5a0: i128 = var_630;
    let mut var_640: i128;
    let var_5b0: i128 = var_640;
    var_5c0 = rax;
    let var_5b8: i64 = var_648;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb26010e58287709b(
        &var_2f8, &var_5c0);
    let mut var_600: i64;
    clap_builder::parser::error::MatchesError::unwrap::h12a87886debc1fc8(&var_600, &var_2f8);
    let mut var_2f0: i128;
    
    if var_600 == 0
    {
        var_650 = 0;
        let var_648_1: i64 = 8;
        var_640 = 0;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h46fe471172d293d5(&var_2f8, &var_600);
        var_648 = var_2f0;
        var_650 = var_2f8;
    }
    
    let rax_3: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_5c0, "lookupcountallheadingloginproces…", 6);
    let rax_4: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_5c0, "countallheadingloginprocessusers…", 5);
    let rax_5: u32 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_5c0, "allheadingloginprocessusersonly_…", 3);
    let rax_6: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_5c0, "headingloginprocessusersonly_hos…", 7);
    let mut var_668: i8;
    let mut rbx_1: u32;
    let mut rbp: i8;
    let mut r12: u64;
    
    if rax_5 == 0
    {
        let rax_7: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_5c0, "mesgdeadkeyscaseu128for<\x1b[1mK…", 4);
        let rax_8: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_5c0, "bootBlue\x1b[4mfullbaseSomedumb\x1b…", 4);
        let rax_9: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_5c0, "deadkeyscaseu128for<\x1b[1mKindb…", 4);
        let rax_10: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_5c0, "loginprocessusersonly_hostname_u…", 5);
        let rax_11: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_5c0, "processusersonly_hostname_user/h…", 7);
        let rax_12: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_5c0, "timecodetip:\x1b[3mmesgdeadkeysc…", 4);
        let rax_13: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_5c0, "runlevelextern "# users=ENOTUNIQ…", 8);
        let mut r12_1: i8;
        
        if (rax_12 | rax_13 | rax_10 | rax_11 | rax_8 | rax_9) == 0
        {
            r12_1 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_5c0, "usersonly_hostname_user/home/34r…", 5) ^ 1;
        }
        else
        {
            r12_1 = 0;
        }
        
        let rax_18: u32 = r12_1;
        rbx_1 = rax_18;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_5c0, "usersonly_hostname_user/home/34r…", 5) != 0
        {
            rbx_1 = 1;
        }
        
        r12 = rbx_1;
        
        if rax_13 != 0
        {
            r12 = 1;
        }
        
        if rax_10 != 0
        {
            r12 = 1;
        }
        
        rbp = 0;
        
        if rax_9 != 0
        {
            r12 = 1;
        }
        
        if rax_9 == 0
        {
            rbp = rax_18;
        }
        
        let zmm0_4: u128 = _mm_shufflelo_epi16(
            _mm_insert_epi16(
                _mm_insert_epi16(
                    _mm_insert_epi16(
                        _mm_insert_epi16(_mm_insert_epi16(rax_9 << 0x10 | rax_7, rax_8, 2), rax_10, 
                            4), 
                        rax_11, 5), 
                    rax_12, 6), 
                rax_13, 7), 
            0x64) & data_4189b0;
        var_668 = _mm_packus_epi16(zmm0_4, zmm0_4);
    }
    else
    {
        var_668 = data_4188b0;
        r12 = 1;
        rbp = 0;
        rbx_1 = 1;
    }
    
    let mut rcx_8: bool = true;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_5c0, "only_hostname_user/home/34r7hm4n…", 0x12) == 0
    {
        rcx_8 = var_640 == 2;
    }
    
    *var_2f0[8] = var_640;
    var_2f8 = var_650;
    let var_2e0: i8 = rax_3;
    let var_2df: i8 = rax_4;
    let var_2de: i8 = rbp;
    let var_2dd: i8 = r12;
    let var_2dc: i8 = rax_6;
    let var_2db: i64 = var_668;
    let var_2d3: i8 = rbx_1;
    let var_2d2: bool = rcx_8;
    let mut result: i64;
    let mut rdx_4: i64;
    result = uu_who::platform::unix::Who::exec::hfa7301829d97906e(&var_2f8);
    core::ptr::drop_in_place$LT$uu_who..platform..unix..Who$GT$::h0c02ef86784fcfa2(&var_2f8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h80080c2e7de54405(&var_5c0);
    result
}
