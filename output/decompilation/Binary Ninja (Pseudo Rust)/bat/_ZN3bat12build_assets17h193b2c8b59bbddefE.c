
  fn bat::build_assets::h193b2c8b59bbddef(arg1: *mut i8, arg2: *mut c_void, arg3: i64, arg4: u64, arg5: i64, arg6: u64) -> *mut i8

{
    let mut r15: u64 = arg4;
    let mut r12: i64 = arg3;
    let mut var_58: ();
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&var_58, 
        arg2, "sourcedirUse a different directo…", 6);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
        "sourcedirUse a different directo…", 6, &var_58);
    
    if rax != 0
    {
        r12 = *rax.byte_offset(8);
        r15 = *rax.byte_offset(0x10);
    }
    
    bat::assets::build_assets::build::h804f4ffaa9aa359e(arg1, r12, r15, 
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, 
            "blankCreate completely new synta…", 5) ^ 1, 
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, 
        "acknowledgements", 0x10), arg5, arg6, "0.25.0Clearing  ... okay\nskippe…", 6)
}
