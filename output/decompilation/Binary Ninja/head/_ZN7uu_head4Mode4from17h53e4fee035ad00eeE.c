
  uint64_t uu_head::Mode::from::h53e4fee035ad00ee(int128_t* arg1, void* arg2)

{
    int128_t var_48;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h93f14d0ecce99c1a(&var_48, 
        arg2, "BYTESbytes[-]NUMprint the first …", 5);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h1a803a7302dfb847(
        "BYTESbytes[-]NUMprint the first …", 5, &var_48);
    uint64_t result;
    int128_t var_88;
    int32_t var_68;
    int64_t var_60;
    int128_t var_58;
    
    if (!rax)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h93f14d0ecce99c1a(
            &var_48, arg2, "LINESlinesprint the first NUM li…", 5);
        result = clap_builder::parser::error::MatchesError::unwrap::h1a803a7302dfb847(
            "LINESlinesprint the first NUM li…", 5, &var_48);
        
        if (!result)
        {
            *(arg1 + 8) = 0;
            arg1[1] = 0xa;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            result = uu_head::parse::parse_num::h0b10a586c944e6e5(&var_68, *(result + 8), 
                *(result + 0x10));
            
            if (var_68 != 3)
            {
                int128_t var_38_2 = var_58;
                var_48 = var_68;
                uu_head::Mode::from::_$u7b$$u7b$closure$u7d$$u7d$::hb5202c7fdcf4dd08(&var_88, 
                    &var_48);
                goto label_4b8eb4;
            }
            
            if (!var_58)
                *(arg1 + 8) = 0;
            else
                *(arg1 + 8) = 1;
            
            arg1[1] = var_60;
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        result = uu_head::parse::parse_num::h0b10a586c944e6e5(&var_68, *(rax + 8), *(rax + 0x10));
        
        if (var_68 != 3)
        {
            int128_t var_38_1 = var_58;
            var_48 = var_68;
            uu_head::Mode::from::_$u7b$$u7b$closure$u7d$$u7d$::he18e9b8fbd48dd2e(&var_88, &var_48);
            label_4b8eb4:
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
            if (!var_58)
                *(arg1 + 8) = 2;
            else
                *(arg1 + 8) = 3;
            
            arg1[1] = var_60;
            *arg1 = -0x8000000000000000;
        }
    }
    return result;
}
