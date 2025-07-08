
  bool uu_touch::determine_atime_mtime_change::hda9df64dc3778c17(void* arg1)

{
    uint64_t rbp;
    uint64_t var_8 = rbp;
    char const* const r14;
    char const* const var_18 = r14;
    char rax =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
        arg1, "timeHashj", 4);
    void* rax_1;
    
    if (rax)
    {
        void var_48;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf835c51125603d99(
            &var_48, arg1, "timeHashj", 4);
        rax_1 = clap_builder::parser::error::MatchesError::unwrap::h0fd0d44a61af13ca("timeHashj", 
            4, &var_48);
    }
    
    bool rax_5;
    
    if (!rax || !rax_1)
    {
        r14 = 2;
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg1, "accessmodificationno-createno-de…", 6))
            goto label_5c3023;
        
        rax_5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg1, "modificationno-createno-derefere…", 0xc);
        rbp = 0;
    }
    else
    {
        rbp =
            uu_touch::determine_atime_mtime_change::_$u7b$$u7b$closure$u7d$$u7d$::hfdbf3da7597c28ba(
            *(rax_1 + 8), *(rax_1 + 0x10));
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg1, "accessmodificationno-createno-de…", 6))
        {
            rax_5 = true;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg1, "modificationno-createno-derefere…", 0xc))
            {
                rax_5 = rbp ^ 1;
                
                if (rbp)
                    goto label_5c307c;
                
                rbp = 0;
            }
        }
        else
        {
            r14 = rbp;
            label_5c3023:
            rax_5 = true;
            rbp = 1;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg1, "modificationno-createno-derefere…", 0xc))
            {
                if (r14 == 2)
                    return false;
                
                r14 ^= 1;
                rax_5 = r14;
                label_5c307c:
                rbp = 1;
                bool cond:0_1 = !rax_5;
                rax_5 = true;
                
                if (cond:0_1)
                    return false;
            }
        }
    }
    
    return 2 - (!rbp & rax_5);
}
