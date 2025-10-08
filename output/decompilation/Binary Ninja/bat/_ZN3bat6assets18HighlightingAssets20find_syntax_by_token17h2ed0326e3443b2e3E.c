
  char* bat::assets::HighlightingAssets::find_syntax_by_token::h2ed0326e3443b2e3(char* arg1, int64_t* arg2, char* arg3, int64_t arg4)

{
    char var_80;
    bat::assets::HighlightingAssets::get_syntax_set::h9a5acb7c2790c837(&var_80, arg2);
    char rbp = var_80;
    void* rax;
    void* var_78;
    
    if (rbp != 0xd)
    {
        int32_t var_7f;
        *(arg1 + 4) = var_7f;
        *(arg1 + 1) = var_7f;
        rax = var_78;
        int128_t var_60;
        *(arg1 + 0x20) = var_60;
        int128_t var_50;
        *(arg1 + 0x30) = var_50;
        int128_t var_40;
        *(arg1 + 0x40) = var_40;
        int128_t var_70;
        *(arg1 + 0x10) = var_70;
    }
    else
    {
        rax = syntect::parsing::syntax_set::SyntaxSet::find_syntax_by_token::hd2ebbb585b2e3395(
            var_78, arg3, arg4);
        *(arg1 + 0x10) = var_78;
    }
    *(arg1 + 8) = rax;
    *arg1 = rbp;
    return arg1;
}
