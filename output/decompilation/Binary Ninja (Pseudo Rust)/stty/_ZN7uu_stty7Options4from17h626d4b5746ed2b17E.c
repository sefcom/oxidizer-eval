
  fn uu_stty::Options::from::h626d4b5746ed2b17(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i64 @ r13) -> *mut i64

{
    let var_20: *mut i64 = arg3;
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "allthe options for verbose and s…", 3);
    let rax_1: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "save\x1b[0mnameCyan    stopEADVt…", 4);
    let mut var_d0: i64;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h905fee06855682e2(&var_d0, 
        arg2);
    let rax_2: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::h003d302a17359fba(&var_d0);
    let mut var_e4: i32;
    let mut var_c8: i32;
    let mut r12_1: i32;
    
    if rax_2 == 0
    {
        r12_1 = 1;
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        arg3 = &std::io::stdio::STDOUT::h411b213c5c9add46;
        'label_4585c2:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::he363e2117379e867(
            &var_d0, arg2);
        let mut var_70: i64;
        clap_builder::parser::error::MatchesError::unwrap::hdbc5c14b771241e0(&var_70, &var_d0);
        let mut var_88: i128;
        let mut rax_5: i64;
        
        if var_70 == 0
        {
            rax_5 = -0x8000000000000000;
        }
        else
        {
            core::iter::traits::iterator::Iterator::collect::heb47997e29649baa(&var_d0, &var_70);
            rax_5 = var_d0;
            var_88 = var_c8;
        }
        
        *arg1 = rax_5;
        *arg1.byte_offset(8) = var_88;
        arg1[3] = r12_1;
        *arg1.byte_offset(0x1c) = var_e4;
        arg1[4] = arg3;
        arg1[5] = rax;
        *arg1.byte_offset(0x29) = rax_1;
    }
    else
    {
        var_c8 = 0;
        let var_c4_1: i16 = 0;
        var_c8 = 1;
        var_d0 = 0x1b600000800;
        let mut var_e0: i8;
        std::fs::OpenOptions::open::h8081b96e677a3669(&var_e0, &var_d0, rax_2);
        
        if (var_e0 & 1) == 0
        {
            let var_dc: i32;
            var_e4 = var_dc;
            r12_1 = 0;
            goto 'label_4585c2;
        }
        
        let var_d8: i64;
        arg1[1] = var_d8;
        *arg1 = -0x7fffffffffffffff;
    }
    arg1
}
