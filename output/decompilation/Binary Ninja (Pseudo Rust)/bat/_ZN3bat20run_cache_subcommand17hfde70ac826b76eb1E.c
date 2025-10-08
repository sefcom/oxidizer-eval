
  fn bat::run_cache_subcommand::hfde70ac826b76eb1(arg1: *mut i128, arg2: *mut c_void, arg3: i64, arg4: u64, arg5: i64, arg6: u64) -> i64

{
    let mut r14: u64 = arg6;
    let mut r15: i64 = arg5;
    let mut var_80: i8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&var_80, 
        arg2, "targetUse a different directory …", 6);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
        "targetUse a different directory …", 6, &var_80);
    
    if rax != 0
    {
        r15 = *rax.byte_offset(8);
        r14 = *rax.byte_offset(0x10);
    }
    
    let mut result: i8;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, 
        "buildInitialize (or update) the …", 5) == 0
    {
        result =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(
            arg2, "clearRemove the cached syntax de…", 5);
        
        if result != 0
        {
            result = bat::assets::clear_assets::h259d7b4131bd5bbc(r15, r14);
        }
        
        *arg1 = 0xd;
    }
    else
    {
        result = bat::build_assets::h193b2c8b59bbddef(&var_80, arg2, arg3, arg4, r15, r14);
        
        if var_80 == 0xd
        {
            *arg1 = 0xd;
        }
        else
        {
            let var_40: i128;
            arg1[4] = var_40;
            let zmm0_1: i128 = var_80;
            let var_50: i128;
            arg1[3] = var_50;
            let var_60: i128;
            arg1[2] = var_60;
            let var_70: i128;
            arg1[1] = var_70;
            *arg1 = zmm0_1;
        }
    }
    
    result
}
