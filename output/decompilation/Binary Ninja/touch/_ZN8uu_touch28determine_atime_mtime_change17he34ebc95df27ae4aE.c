
  int64_t uu_touch::determine_atime_mtime_change::he34ebc95df27ae4a(void* arg1)

{
    char rax =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
        arg1, "timeHashj", 4);
    void* rax_1;
    
    if (rax)
    {
        void var_40;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h16a5e9cf3828def8(
            &var_40, arg1);
        rax_1 = clap_builder::parser::error::MatchesError::unwrap::ha857efe89eb0967e(&var_40);
    }
    
    uint64_t rbp;
    
    if (!rax || !rax_1)
    {
        rbp = 2;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg1, "accessmodificationno-createno-de…", 6))
        {
            if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, "modificationno-createno-derefere…", 0xc))
                return 2;
            
            return 1;
        }
        
        label_53a6c3:
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg1, "modificationno-createno-derefere…", 0xc) && (rbp == 2 || rbp & 1))
            return 0;
    }
    else
    {
        rbp =
            uu_touch::determine_atime_mtime_change::_$u7b$$u7b$closure$u7d$$u7d$::hb1c67c10ad6ef86e(
            *(rax_1 + 8), *(rax_1 + 0x10));
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg1, "accessmodificationno-createno-de…", 6))
            goto label_53a6c3;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg1, "modificationno-createno-derefere…", 0xc))
        {
            if (!rbp)
                return 1;
            
            return 0;
        }
        
        if (!rbp)
            return 1;
    }
    return 2;
}
