
  char* bat::build_assets::h193b2c8b59bbddef(char* arg1, void* arg2, int64_t arg3, uint64_t arg4, int64_t arg5, uint64_t arg6)

{
    uint64_t r15 = arg4;
    int64_t r12 = arg3;
    void var_58;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&var_58, 
        arg2, "sourcedirUse a different directo…", 6);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
        "sourcedirUse a different directo…", 6, &var_58);
    
    if (rax)
    {
        r12 = *(rax + 8);
        r15 = *(rax + 0x10);
    }
    
    return bat::assets::build_assets::build::h804f4ffaa9aa359e(arg1, r12, r15, 
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, 
            "blankCreate completely new synta…", 5) ^ 1, 
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, 
        "acknowledgements", 0x10), arg5, arg6, "0.25.0Clearing  ... okay\nskippe…", 6);
}
