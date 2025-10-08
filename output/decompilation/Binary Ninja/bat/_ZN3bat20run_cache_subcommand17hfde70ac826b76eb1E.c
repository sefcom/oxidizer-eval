
  int64_t bat::run_cache_subcommand::hfde70ac826b76eb1(int128_t* arg1, void* arg2, int64_t arg3, uint64_t arg4, int64_t arg5, uint64_t arg6)

{
    uint64_t r14 = arg6;
    int64_t r15 = arg5;
    char var_80;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&var_80, 
        arg2, "targetUse a different directory …", 6);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
        "targetUse a different directory …", 6, &var_80);
    
    if (rax)
    {
        r15 = *(rax + 8);
        r14 = *(rax + 0x10);
    }
    
    char result;
    
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, 
        "buildInitialize (or update) the …", 5))
    {
        result =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(
            arg2, "clearRemove the cached syntax de…", 5);
        
        if (result)
            result = bat::assets::clear_assets::h259d7b4131bd5bbc(r15, r14);
        
        *arg1 = 0xd;
    }
    else
    {
        result = bat::build_assets::h193b2c8b59bbddef(&var_80, arg2, arg3, arg4, r15, r14);
        
        if (var_80 == 0xd)
            *arg1 = 0xd;
        else
        {
            int128_t var_40;
            arg1[4] = var_40;
            int128_t zmm0_1 = var_80;
            int128_t var_50;
            arg1[3] = var_50;
            int128_t var_60;
            arg1[2] = var_60;
            int128_t var_70;
            arg1[1] = var_70;
            *arg1 = zmm0_1;
        }
    }
    
    return result;
}
