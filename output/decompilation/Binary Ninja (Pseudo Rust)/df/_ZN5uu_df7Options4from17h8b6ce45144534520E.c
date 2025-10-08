
  fn uu_df::Options::from::h8b6ce45144534520(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut var_158: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3719f0ee9075a3fe(
        &var_158, arg2, &data_419a18[0xc], 4);
    let mut var_c8: i64;
    clap_builder::parser::error::MatchesError::unwrap::h3fb7cb9ce86227a4(&var_c8, 
        &data_419a18[0xc], 4, &var_158);
    let mut var_198: i64;
    
    if var_c8 == 0
    {
        var_198 = -0x8000000000000000;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h49a51ee5ac4b4f6e(&var_198, &var_c8);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3719f0ee9075a3fe(
        &var_158, arg2, "exclude-typesrc/uu/df/src/df.rs(…", 0xc);
    let mut var_88: i64;
    clap_builder::parser::error::MatchesError::unwrap::h3fb7cb9ce86227a4(&var_88, 
        "exclude-typesrc/uu/df/src/df.rs(…", 0xc, &var_158);
    let mut var_1b8: i64;
    let mut var_1a8: i64;
    let var_188: i64;
    
    if var_88 != 0
    {
        core::iter::traits::iterator::Iterator::collect::h49a51ee5ac4b4f6e(&var_158, &var_88);
        let var_148: i64;
        var_1a8 = var_148;
        var_1b8 = var_158;
        
        if var_198 == -0x8000000000000000 || var_1b8 == -0x8000000000000000
        {
            goto 'label_46d1d1;
        }
        
        let var_1b0: i64;
        let var_190: *mut c_void;
        uu_df::Options::get_intersected_types::h9cab40c1fdffacad(&var_158, var_190, var_188, 
            var_1b0, var_1a8);
        
        if var_158 == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::h38b38b300538279c(&var_158);
            goto 'label_46d1d1;
        }
        
        arg1[2] = var_148;
        arg1[1] = var_158;
        *arg1.byte_offset(8) = 4;
        goto 'label_46d477;
    }
    
    var_1b8 = -0x8000000000000000;
    'label_46d1d1:
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "localno-syncoutputpathsportabili…", 5);
    let rax_3: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "allblocksizehuman-readable-binar…", 3);
    let rax_4: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "synctypeCyan    TYPE"`$\EADVlofs…", 4);
    let mut var_e8: i32;
    uu_df::blocks::read_block_size::h32d30779f3aa72e5(&var_e8, arg2);
    let mut var_180_1: i64;
    let mut var_108: i64;
    let var_100: i64;
    let var_f8: i128;
    
    if var_e8 != 4
    {
        uu_df::Options::from::_$u7b$$u7b$closure$u7d$$u7d$::h55bdb2272571ef7d(&var_108, arg2, 
            &var_e8);
        let rax_6: i64 = var_108;
        
        if rax_6 == 5
        {
            var_180_1 = var_100;
            goto 'label_46d289;
        }
        
        *arg1.byte_offset(0x18) = var_f8;
        *arg1.byte_offset(8) = rax_6;
        arg1[1] = var_100;
        'label_46d477:
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::h38b38b300538279c(&var_1b8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::h38b38b300538279c(&var_198);
    }
    else
    {
        let var_e0: i64;
        var_180_1 = var_e0;
        'label_46d289:
        let mut r12_1: i8 = 1;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "human-readable-binaryhuman-reada…", 0x15) == 0 &&
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "human-readable-decimalinodesloca…", 0x16) == 0
        {
            r12_1 = 2;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "portabilityprint-typeexclude-typ…", 0xb) == 0
            {
                let mut rcx_4: i64;
                rcx_4 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(arg2, "outputpathsportabilityprint-type…", 6) == 2;
                r12_1 = rcx_4 * 3;
            }
        }
        
        let mut r13_1: i8 = 1;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "human-readable-binaryhuman-reada…", 0x15) == 0
        {
            r13_1 = (
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "human-readable-decimalinodesloca…", 0x16) ^ 1) * 2;
        }
        
        let rax_13: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "total%", 5);
        uu_df::columns::Column::from_matches::h56d2df2bf88d44da(&var_108, arg2);
        let rcx_5: i64 = *var_f8[8];
        let zmm0_4: i128 = var_100;
        
        if var_108 == 1
        {
            arg1[2] = rcx_5;
            arg1[1] = zmm0_4;
            *arg1.byte_offset(8) = 3;
            goto 'label_46d477;
        }
        
        var_158 = zmm0_4;
        let var_140_1: i128 = var_198;
        let var_118_1: i64 = var_1a8;
        let zmm1_1: i128 = var_1b8;
        let var_128_1: i128 = zmm1_1;
        *arg1 = zmm0_4;
        arg1[4] = var_1a8;
        arg1[3] = zmm1_1;
        arg1[1] = rcx_5;
        *arg1.byte_offset(0x18) = var_140_1;
        arg1[2] = *var_140_1[8];
        *arg1.byte_offset(0x28) = var_188;
        *arg1.byte_offset(0x48) = var_180_1;
        arg1[5] = rax_2;
        *arg1.byte_offset(0x51) = rax_3;
        *arg1.byte_offset(0x52) = rax_4;
        *arg1.byte_offset(0x53) = rax_13;
        *arg1.byte_offset(0x54) = r13_1;
        *arg1.byte_offset(0x55) = r12_1;
    }
    arg1
}
