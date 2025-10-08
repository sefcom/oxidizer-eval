
  uint64_t uu_head::Mode::from::h83e29ab46b97bf14(int128_t* arg1, void* arg2)

{
    int128_t var_48;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hcfe202c159b0fd99(&var_48, 
        arg2, "BYTESbytes[-]NUMprint the first …");
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h514e0ae5cc56700a(
        "BYTESbytes[-]NUMprint the first …", &var_48);
    uint64_t result;
    int128_t var_88;
    int32_t var_68;
    uint64_t result_2;
    int128_t var_58;
    uint64_t rcx_2;
    
    if (!rax)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hcfe202c159b0fd99(
            &var_48, arg2, "LINESlinesprint the first NUM li…");
        result = clap_builder::parser::error::MatchesError::unwrap::h514e0ae5cc56700a(
            "LINESlinesprint the first NUM li…", &var_48);
        
        if (result)
        {
            uu_head::parse::parse_num::h03514696a27c7578(&var_68, *(result + 8), *(result + 0x10));
            
            if (var_68 == 4)
            {
                result = result_2;
                rcx_2 = var_58;
                goto label_466dde;
            }
            
            int128_t var_38_2 = var_58;
            var_48 = var_68;
            uu_head::Mode::from::_$u7b$$u7b$closure$u7d$$u7d$::ha059e337d15c07d8(&var_88, &var_48);
            goto label_466e4b;
        }
        
        *(arg1 + 8) = 0;
        arg1[1] = 0xa;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        uu_head::parse::parse_num::h03514696a27c7578(&var_68, *(rax + 8), *(rax + 0x10));
        
        if (var_68 != 4)
        {
            int128_t var_38_1 = var_58;
            var_48 = var_68;
            uu_head::Mode::from::_$u7b$$u7b$closure$u7d$$u7d$::h19c5bd1f00edc5c0(&var_88, &var_48);
            label_466e4b:
            char result_1;
            result = result_1;
            int32_t var_74;
            *(arg1 + 0x14) = var_74;
            int32_t var_77;
            *(arg1 + 0x11) = var_77;
            *arg1 = var_88;
            arg1[1] = result;
        }
        else
        {
            result = result_2;
            rcx_2 = var_58 | 2;
            label_466dde:
            *(arg1 + 8) = rcx_2;
            arg1[1] = result;
            *arg1 = -0x8000000000000000;
        }
    }
    return result;
}
