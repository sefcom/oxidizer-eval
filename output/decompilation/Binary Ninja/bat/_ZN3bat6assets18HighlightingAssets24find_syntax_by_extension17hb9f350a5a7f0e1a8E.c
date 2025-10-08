
  uint64_t bat::assets::HighlightingAssets::find_syntax_by_extension::hb9f350a5a7f0e1a8(char* arg1, int64_t* arg2, char* arg3, int64_t arg4)

{
    char result_1;
    bat::assets::HighlightingAssets::get_syntax_set::h9a5acb7c2790c837(&result_1, arg2);
    uint64_t result = result_1;
    char* var_68;
    int128_t var_60;
    
    if (result != 0xd)
    {
        int32_t var_6f;
        *(arg1 + 4) = var_6f;
        *(arg1 + 1) = var_6f;
        int128_t var_50;
        *(arg1 + 0x20) = var_50;
        int128_t var_40;
        *(arg1 + 0x30) = var_40;
        int128_t var_30;
        *(arg1 + 0x40) = var_30;
        *(arg1 + 0x10) = var_60;
        *arg1 = result;
        *(arg1 + 8) = var_68;
    }
    else
    {
        int64_t rdx_1;
        char* rsi_1;
        
        if (!arg3)
        {
            rsi_1 = 1;
            rdx_1 = 0;
        }
        else
        {
            core::str::converts::from_utf8::h8a6dc80f786921e0(&result_1, arg3, arg4);
            rdx_1 = 0;
            char result_2 = result_1;
            
            if (!result_2)
                rdx_1 = var_60;
            
            rsi_1 = 1;
            
            if (!result_2)
                rsi_1 = var_68;
        }
        
        result =
            syntect::parsing::syntax_set::SyntaxSet::find_syntax_by_extension::h180543d9baac27ea(
            var_68, rsi_1, rdx_1);
        *(arg1 + 8) = result;
        *(arg1 + 0x10) = var_68;
        *arg1 = 0xd;
    }
    return result;
}
